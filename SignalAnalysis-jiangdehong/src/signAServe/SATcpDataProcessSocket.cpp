#include "SATcpDataProcessSocket.h"
#include "SAServeHandleFun.h"
#include "SAServerDefine.h"
#include "SAXMLProtocol.h"

class SATcpDataProcessSocketPrivate
{
    SA_IMPL_PUBLIC(SATcpDataProcessSocket)
public:
    SATcpDataProcessSocketPrivate(SATcpDataProcessSocket *p);
};

SATcpDataProcessSocketPrivate::SATcpDataProcessSocketPrivate(SATcpDataProcessSocket *p) : q_ptr(p)
{
}


SATcpDataProcessSocket::SATcpDataProcessSocket(QObject *par) : SATcpSocket(par)
{
    qRegisterMetaType<QVector<QPointF> >();
    qRegisterMetaType<SAPropertiesGroup >();
}


SATcpDataProcessSocket::~SATcpDataProcessSocket()
{
}


/**
 * @brief 处理xml协议
 * @param header
 * @param xml
 * @return
 */
bool SATcpDataProcessSocket::dealXmlProtocol(const SAProtocolHeader& header, const SAXMLProtocol& xml)
{
    if (SATcpSocket::dealXmlProtocol(header, xml)) {
        return (true);
    }
    //SATcpClient::dealXmlProtocol返回false说明有没有处理的协议
    switch (header.protocolFunID)
    {
    case SA::ProtocolFunReply2DPointsDescribe:
        dealReply2DPointsDescribe(header, xml);
        break;

    default:
        break;
    }
    return (false);
}


/**
 * @brief SATcpDataProcessClient::dealReply2DPointsDescribe
 * @param header
 * @param xml
 * @return
 */
bool SATcpDataProcessSocket::dealReply2DPointsDescribe(const SAProtocolHeader& header,
    const SAXMLProtocol& xml)
{
    qDebug() <<"rec 2DPointsDescribe Reply";
    emit receive2DPointsDescribe(xml.toPropGroup(),header.sequenceID,header.extendValue);
    return (true);
}


/**
 * @brief 请求2维数据的统计描述
 * @param arrs 待计算的点序列
 * @param key 标致，返回的reply中会带着此key，用于区别请求的回复
 * @param sortcount 返回排序的前后n个值
 */
bool SATcpDataProcessSocket::request2DPointsDescribe(const QVector<QPointF>& arrs, int sequenceID, int sortcount)
{
    return (SA::request_2d_points_describe_xml(this, arrs, sequenceID, sortcount));
}
