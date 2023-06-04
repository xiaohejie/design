#include "SAXMLProtocol.h"
#include <QHash>
#include <QVector>
#include <QPointF>
//#include <QXmlStreamWriter>
//#include <QXmlStreamReader>
#include <QDomDocument>
#include <QDomElement>
#include <QDomAttr>
#include "SAProperties.h"
#include "SAXMLTagDefined.h"
#include "SAVariantCaster.h"

#define DEFAULT_GROUP_NAME    "${sa-default-group}"

class SAXMLProtocolPrivate
{
    SA_IMPL_PUBLIC(SAXMLProtocol)
public:
    SAXMLProtocolPrivate(SAXMLProtocol *p);
    SAXMLProtocolPrivate(const SAXMLProtocolPrivate& other, SAXMLProtocol *p);
    ~SAXMLProtocolPrivate();
    //
    void copy(const SAXMLProtocolPrivate *other);
    bool fromByteArray(const QByteArray& data);
    bool fromString(const QString& str);
    bool isHasGroup(const QString& groupName) const;
    bool isHasKey(const QString& groupName, const QString& keyName) const;
    void readProp(QDomElement& propEle, SAProperties& prop);
    QVariant readValue(QDomElement item, const QVariant& defaultVal = QVariant()) const;
    void writeValue(QDomDocument& doc, QDomElement& item, const QString& keyName, const QVariant& var);
    QString toString();

    //清空内容
    void clear();

    //解析
    bool parser(const QString& str);

public:
    int mClassID;
    int mFunID;
    SAPropertiesGroup mPropGroup;   ///< 存放属性信息
    QString mErrorMsg;              ///< 错误信息
private:
};

SAXMLProtocolPrivate::SAXMLProtocolPrivate(SAXMLProtocol *p)
    : q_ptr(p)
    , mClassID(-1)
    , mFunID(-1)
{
}


SAXMLProtocolPrivate::SAXMLProtocolPrivate(const SAXMLProtocolPrivate& other, SAXMLProtocol *p)
{
    copy(&other);
    q_ptr = p;
}


SAXMLProtocolPrivate::~SAXMLProtocolPrivate()
{
}


void SAXMLProtocolPrivate::copy(const SAXMLProtocolPrivate *other)
{
    this->mClassID = other->mClassID;
    this->mFunID = other->mFunID;
    this->mPropGroup = other->mPropGroup;
    this->mErrorMsg = other->mErrorMsg;
    //this->q_ptr = other->q_ptr; //这个绝对不能有
}


bool SAXMLProtocolPrivate::fromByteArray(const QByteArray& data)
{
    clear();
    return (parser(QString(data)));
}


bool SAXMLProtocolPrivate::fromString(const QString& str)
{
    clear();
    return (parser(str));
}


bool SAXMLProtocolPrivate::parser(const QString& str)
{
    QDomDocument doc;

    if (!doc.setContent(str, &(this->mErrorMsg))) {
        return (false);
    }
    QDomElement rootele = doc.documentElement();

    if (rootele.isNull()) {
        this->mErrorMsg = QObject::tr("root element error");
        return (false);
    }
    if (rootele.tagName() != SA_XML_TAG_SA) {
        this->mErrorMsg = QObject::tr("root element name error,require %1 but get %2")
            .arg(SA_XML_TAG_SA).arg(rootele.tagName());
        return (false);
    }
    SAPropertiesGroup properties;
    int classID;
    int funID;

    //获取类号和功能号
    classID = rootele.attribute(SA_XML_ATT_NAME_CLASSID, "0").toInt();
    funID = rootele.attribute(SA_XML_ATT_NAME_FUNID, "0").toInt();
    // 获取values节点,如果有多个values，会忽略后面的values
    QDomNodeList propsEleList = rootele.elementsByTagName(SA_XML_TAG_PROPERTIES);

    if (propsEleList.isEmpty()) {
        return (false);
    }
    //此协议只解析第一个props
    QDomElement propsEle = propsEleList.at(0).toElement();
    QDomNodeList propNodeList = propsEle.elementsByTagName(SA_XML_TAG_PROPERTY);
    auto size = propNodeList.size();

    for (auto i = 0; i < size; ++i)
    {
        SAProperties prop;
        QDomElement propEle = propNodeList.at(i).toElement();
        QString name = propEle.attribute(SA_XML_ATT_PROPERTY_GROUP_NAME, QString());
        if (name.isEmpty()) {
            //如果没有name属性，赋予默认值
            name = SAXMLProtocol::defaultGroupName();
            if (properties.hasGroup(name)) {
                //如果已经有默认分组，就把原来解析的默认分组取出
                prop = properties.getProperties(name);
            }
        }
        //获取property下的item
        readProp(propEle, prop);
        properties[name] = prop;
    }
    this->mFunID = funID;
    this->mClassID = classID;
    this->mPropGroup = properties;
    return (true);
}


void SAXMLProtocolPrivate::readProp(QDomElement& propEle, SAProperties& prop)
{
    // 获取group下的item信息
    QDomNodeList itemEles = propEle.elementsByTagName(SA_XML_TAG_ITEM);
    auto itemsize = itemEles.size();

    for (auto i = 0; i < itemsize; ++i)
    {
        QDomElement ie = itemEles.at(i).toElement();
        QString itemname = ie.attribute(SA_XML_ATT_NAME);
        QVariant var = readValue(ie, QVariant());
        if (var.isValid()) {
            prop[itemname] = var;
        }
    }
}


bool SAXMLProtocolPrivate::isHasGroup(const QString& groupName) const
{
    return (this->mPropGroup.contains(groupName));
}


bool SAXMLProtocolPrivate::isHasKey(const QString& groupName, const QString& keyName) const
{
    auto i = this->mPropGroup.find(groupName);

    if (i != this->mPropGroup.end()) {
        return (i.value().contains(keyName));
    }
    return (false);
}


QVariant SAXMLProtocolPrivate::readValue(QDomElement item, const QVariant& defaultVal) const
{
    if (item.isNull()) {
        return (defaultVal);
    }
    //

    QString vartype = item.attribute(SA_XML_ATT_TYPE);

    if (0 == QString::compare(vartype, SA_XML_VAR_ARR_LIST)) {
        //QVariantList 的处理
        QList<QVariant> res;
        //获取子节点数
        QDomNodeList ci = item.elementsByTagName(SA_XML_TAG_ITEM);
        auto size = ci.size();
        for (auto i = 0; i < size; ++i)
        {
            QVariant v = readValue(ci.at(i).toElement(), QVariant());
            if (v.isValid()) {
                res.append(v);
            }
        }
        return (QVariant(res));
    }else if (0 == QString::compare(vartype, SA_XML_VAR_ARR_MAP, Qt::CaseInsensitive)) {
        //QVariantMap 的处理
        QMap<QString, QVariant> res;
        //获取子节点数
        QDomNodeList ci = item.elementsByTagName(SA_XML_TAG_ITEM);
        auto size = ci.size();
        for (auto i = 0; i < size; ++i)
        {
            QDomElement childitem = ci.at(i).toElement();
            QString itemkeyname = childitem.attribute(SA_XML_ATT_NAME);
            QVariant v = readValue(childitem, QVariant());
            res[itemkeyname] = v;
        }
        return (QVariant(res));
    }else if (0 == QString::compare(vartype, SA_XML_VAR_ARR_HASH, Qt::CaseInsensitive)) {
        //QVariantHash 的处理
        QHash<QString, QVariant> res;
        //获取子节点数
        QDomNodeList ci = item.elementsByTagName(SA_XML_TAG_ITEM);
        auto size = ci.size();
        for (auto i = 0; i < size; ++i)
        {
            QDomElement childitem = ci.at(i).toElement();
            QString itemkeyname = childitem.attribute(SA_XML_ATT_NAME);
            QVariant v = readValue(childitem, QVariant());
            res[itemkeyname] = v;
        }
        return (QVariant(res));
    }else if (0 == QString::compare(vartype, SA_XML_VAR_ARR_STRLIST, Qt::CaseInsensitive)) {
        //QStringList 的处理
        QStringList res;
        //获取子节点数
        QDomNodeList ci = item.elementsByTagName(SA_XML_TAG_LI);
        auto size = ci.size();
        res.reserve(size);
        for (auto i = 0; i < size; ++i)
        {
            res.append(ci.at(i).toElement().text());
        }
        return (QVariant(res));
    }else if (0 == QString::compare(vartype, SA_XML_VAR_ARR_VECTOR_POINTF, Qt::CaseInsensitive)) {
        //QVector<QPointF> 的处理
        QVector<QPointF> res;
        //获取子节点数
        QDomNodeList ci = item.elementsByTagName(SA_XML_TAG_LI);
        auto size = ci.size();
        res.reserve(size);
        for (auto i = 0; i < size; ++i)
        {
            QDomElement li = ci.at(i).toElement();
            double x = li.attribute("x").toDouble();
            double y = li.attribute("y").toDouble();
            res.append(QPointF(x, y));
        }
        return (QVariant::fromValue<QVector<QPointF> >(res));
    }

    QString varstr = item.text();

    return (SAVariantCaster::stringToVariant(varstr, vartype));
}


QString SAXMLProtocolPrivate::toString()
{
    QDomDocument doc("SA");
    QDomElement root = doc.createElement(SA_XML_TAG_SA);

    root.setAttribute(SA_XML_ATT_TYPE, "xml");
    root.setAttribute(SA_XML_ATT_NAME_FUNID, QString::number(this->mFunID));
    root.setAttribute(SA_XML_ATT_NAME_CLASSID, QString::number(this->mClassID));
    //写入props
    QDomElement propsEle = doc.createElement(SA_XML_TAG_PROPERTIES);

    //写入prop
    for (auto i = mPropGroup.begin(); i != mPropGroup.end(); ++i)
    {
        QDomElement propEle = doc.createElement(SA_XML_TAG_PROPERTY);
        propEle.setAttribute(SA_XML_ATT_PROPERTY_GROUP_NAME, i.key());
        for (auto j = i.value().begin(); j != i.value().end(); ++j)
        {
            QDomElement itemEle = doc.createElement(SA_XML_TAG_ITEM);
            writeValue(doc, itemEle, j.key(), j.value());
            propEle.appendChild(itemEle);
        }
        propsEle.appendChild(propEle);
    }
    root.appendChild(propsEle);
    doc.appendChild(root);
    return (doc.toString());
}


void SAXMLProtocolPrivate::writeValue(QDomDocument& doc, QDomElement& item, const QString& keyName, const QVariant& var)
{
    QString vartype = var.typeName();

    if (!keyName.isNull()) {
        item.setAttribute(SA_XML_ATT_NAME, keyName);
    }
    item.setAttribute(SA_XML_ATT_TYPE, vartype);
    //对数组类型进行特殊处理
    if (0 == QString::compare(vartype, SA_XML_VAR_ARR_LIST, Qt::CaseInsensitive)) {
        //QVariantList 的处理
        QList<QVariant> l = var.toList();
        for (auto i = l.begin(); i != l.end(); ++i)
        {
            QDomElement itemEle = doc.createElement(SA_XML_TAG_ITEM);
            writeValue(doc, itemEle, QString(), *i);
            item.appendChild(itemEle);
        }
    }else if (0 == QString::compare(vartype, SA_XML_VAR_ARR_MAP, Qt::CaseInsensitive)) {
        //QVariantMap 的处理
        QMap<QString, QVariant> l = var.toMap();
        for (auto i = l.begin(); i != l.end(); ++i)
        {
            QDomElement itemEle = doc.createElement(SA_XML_TAG_ITEM);
            writeValue(doc, itemEle, i.key(), i.value());
            item.appendChild(itemEle);
        }
    }else if (0 == QString::compare(vartype, SA_XML_VAR_ARR_HASH, Qt::CaseInsensitive)) {
        //QVariantHash 的处理
        QHash<QString, QVariant> l = var.toHash();
        for (auto i = l.begin(); i != l.end(); ++i)
        {
            QDomElement itemEle = doc.createElement(SA_XML_TAG_ITEM);
            writeValue(doc, itemEle, i.key(), i.value());
            item.appendChild(itemEle);
        }
    }else if (0 == QString::compare(vartype, SA_XML_VAR_ARR_STRLIST, Qt::CaseInsensitive)) {
        //QStringList 的处理
        QStringList l = var.toStringList();
        for (const QString& str : l)
        {
            QDomElement li = doc.createElement(SA_XML_TAG_LI);
            QDomText t = doc.createTextNode(str);
            li.appendChild(t);
            item.appendChild(li);
        }
    }else if (0 == QString::compare(vartype, SA_XML_VAR_ARR_VECTOR_POINTF, Qt::CaseInsensitive)) {
        //QVector<QPointF> 的处理
        QVector<QPointF> data = var.value<QVector<QPointF> >();
        for (const QPointF& d : data)
        {
            QDomElement li = doc.createElement(SA_XML_TAG_LI);
            li.setAttribute("x", QString::number(d.x()));
            li.setAttribute("y", QString::number(d.y()));
            item.appendChild(li);
        }
    }else {
        QDomText t = doc.createTextNode(SAVariantCaster::variantToString(var));
        item.appendChild(t);
    }
}


void SAXMLProtocolPrivate::clear()
{
    mFunID = -1;
    mClassID = -1;
    mPropGroup.clear();
    mErrorMsg = "";
}


SAXMLProtocol::SAXMLProtocol() : SAAbstractProtocol()
    , d_ptr(new SAXMLProtocolPrivate(this))
{
}


SAXMLProtocol::SAXMLProtocol(const SAXMLProtocol& other) : SAAbstractProtocol()
{
    (*this) = other;
}


SAXMLProtocol::SAXMLProtocol(SAXMLProtocol&& other) : SAAbstractProtocol()
{
    this->d_ptr.reset(other.d_ptr.take());
    d_ptr->q_ptr = this;//这个尤为关键
}


SAXMLProtocol& SAXMLProtocol::operator =(const SAXMLProtocol& other)
{
    // 1.防止自身赋值
    if (this == (&other)) {
        return (*this);
    }
    this->d_ptr.reset(new SAXMLProtocolPrivate(*(other.d_ptr.data()), this));
    //this->d_ptr->q_ptr = this;//这个尤为关键
    return (*this);
}


SAXMLProtocol::~SAXMLProtocol()
{
}


void SAXMLProtocol::setFunctionID(int funid)
{
    d_ptr->mFunID = funid;
}


int SAXMLProtocol::getFunctionID() const
{
    return (d_ptr->mFunID);
}


void SAXMLProtocol::setClassID(int classid)
{
    d_ptr->mClassID = classid;
}


int SAXMLProtocol::getClassID() const
{
    return (d_ptr->mClassID);
}


void SAXMLProtocol::setValue(const QString& groupName, const QString& keyName, const QVariant& var)
{
    d_ptr->mPropGroup.setProperty(groupName, keyName, var);
}


void SAXMLProtocol::setValue(const QString& keyName, const QVariant& var)
{
    d_ptr->mPropGroup.setProperty(SAXMLProtocol::defaultGroupName(), keyName, var);
}


QStringList SAXMLProtocol::getGroupNames() const
{
    return (d_ptr->mPropGroup.keys());
}


QStringList SAXMLProtocol::getKeyNames(const QString& groupName) const
{
    if (!(d_ptr->mPropGroup.hasGroup(groupName))) {
        return (QStringList());
    }
    return (d_ptr->mPropGroup[groupName].keys());
}


/**
 * @brief 从默认分组中获取key值
 * @return
 */
QStringList SAXMLProtocol::getKeyNames() const
{
    return (getKeyNames(SAXMLProtocol::defaultGroupName()));
}


bool SAXMLProtocol::fromString(const QString& str)
{
    return (d_ptr->fromString(str));
}


QString SAXMLProtocol::toString() const
{
    return (d_ptr->toString());
}


bool SAXMLProtocol::fromByteArray(const QByteArray& data)
{
    return (d_ptr->fromByteArray(data));
}


QByteArray SAXMLProtocol::toByteArray() const
{
    return (toString().toUtf8());
}


QString SAXMLProtocol::defaultGroupName()
{
    return (DEFAULT_GROUP_NAME);
}


bool SAXMLProtocol::isHasGroup(const QString& groupName) const
{
    return (d_ptr->isHasGroup(groupName));
}


bool SAXMLProtocol::isHasKey(const QString& groupName, const QString& keyName) const
{
    return (d_ptr->isHasKey(groupName, keyName));
}


QVariant SAXMLProtocol::getValue(const QString& groupName, const QString& keyName, const QVariant& defaultVal) const
{
    return (d_ptr->mPropGroup.getProperty(groupName, keyName, defaultVal));
}


QVariant SAXMLProtocol::getDefaultGroupValue(const QString& keyName, const QVariant& defaultVal) const
{
    return (getValue(defaultGroupName(), keyName, defaultVal));
}

/**
 * @brief 转换为SAPropertiesGroup
 * @return
 */
SAPropertiesGroup SAXMLProtocol::toPropGroup() const
{
    return d_ptr->mPropGroup;
}

/**
 * @brief 从SAPropertiesGroup转换为xml协议
 * @param props
 */
void SAXMLProtocol::fromPropGroup(const SAPropertiesGroup &props)
{
    d_ptr->mPropGroup = props;
}


/**
 * @brief 获取错误信息
 * @return 在@sa setProtocolData 返回false时调用
 */
QString SAXMLProtocol::getErrorString() const
{
    return (d_ptr->mErrorMsg);
}


SAXMLProtocolParserPtr makeXMLProtocolParserPtr()
{
    return (std::make_shared<SAXMLProtocol>());
}
