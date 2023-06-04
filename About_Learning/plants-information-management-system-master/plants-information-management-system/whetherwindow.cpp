#include "whetherwindow.h"
#include "ui_whetherwindow.h"


#include <QMessageBox>

WhetherWindow::WhetherWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WhetherWindow)
{
    ui->setupUi(this);

    setWindowTitle("信息管理系统天气助手");
    QString city = ui->cityComboBox->currentText();


    QUrl url("http://t.weather.sojson.com/api/weather/city/101200101");

    QNetworkRequest request(url);

    manager.get(request);

    connect(&manager, &QNetworkAccessManager::finished, this, &WhetherWindow::read_data);


    connect(ui->queryBtn, &QPushButton::clicked, this, &WhetherWindow::start_query);



}

void WhetherWindow::start_query() {




    QString ip = "http://t.weather.sojson.com/api/weather/city/101200101";
    //通过获取城市输入框的当前值来选择哪个城市的URL
    QString city = ui->cityComboBox->currentText();

    if(!QString::compare(city, QString("武汉"))) ip = "http://t.weather.sojson.com/api/weather/city/101200101";
    else if(!QString::compare(city, QString("黄冈"))) ip = "http://t.weather.sojson.com/api/weather/city/101200501";
    else if(!QString::compare(city, QString("荆州"))) ip = "http://t.weather.sojson.com/api/weather/city/101200801";
    else if(!QString::compare(city, QString("宜昌"))) ip = "http://t.weather.sojson.com/api/weather/city/101200901";
    else if(!QString::compare(city, QString("恩施"))) ip = "http://t.weather.sojson.com/api/weather/city/101201001";
    else if(!QString::compare(city, QString("十堰"))) ip = "http://t.weather.sojson.com/api/weather/city/101201101";
    else if(!QString::compare(city, QString("神农架"))) ip = "http://t.weather.sojson.com/api/weather/city/101201201";
    else if(!QString::compare(city, QString("随州"))) ip = "http://t.weather.sojson.com/api/weather/city/101201301";
    else if(!QString::compare(city, QString("荆门"))) ip = "http://t.weather.sojson.com/api/weather/city/101201401";
    else if(!QString::compare(city, QString("天门"))) ip = "http://t.weather.sojson.com/api/weather/city/101201501";
    else if(!QString::compare(city, QString("仙桃"))) ip = "http://t.weather.sojson.com/api/weather/city/101201601";
    else if(!QString::compare(city, QString("潜江"))) ip = "http://t.weather.sojson.com/api/weather/city/101201701";
    else if(!QString::compare(city, QString("襄阳"))) ip = "http://t.weather.sojson.com/api/weather/city/101200201";
    else if(!QString::compare(city, QString("鄂州"))) ip = "http://t.weather.sojson.com/api/weather/city/101200301";
    else if(!QString::compare(city, QString("孝感"))) ip = "http://t.weather.sojson.com/api/weather/city/101200401";
    else if(!QString::compare(city, QString("黄石"))) ip = "http://t.weather.sojson.com/api/weather/city/101200601";
    else if(!QString::compare(city, QString("咸宁"))) ip = "http://t.weather.sojson.com/api/weather/city/101200701";
    else if(!QString::compare(city, QString("北京"))) ip = "http://t.weather.sojson.com/api/weather/city/101010100";
    else if(!QString::compare(city, QString("上海"))) ip = "http://t.weather.sojson.com/api/weather/city/101020100";
    else if(!QString::compare(city, QString("天津"))) ip = "http://t.weather.sojson.com/api/weather/city/101030100";
    else if(!QString::compare(city, QString("重庆"))) ip = "http://t.weather.sojson.com/api/weather/city/101040100";
    else if(!QString::compare(city, QString("哈尔滨"))) ip = "http://t.weather.sojson.com/api/weather/city/101050101";
    else if(!QString::compare(city, QString("长春"))) ip = "http://t.weather.sojson.com/api/weather/city/101060101";
    else if(!QString::compare(city, QString("沈阳"))) ip = "http://t.weather.sojson.com/api/weather/city/101070101";
    else if(!QString::compare(city, QString("呼和浩特"))) ip = "http://t.weather.sojson.com/api/weather/city/101080101";
    else if(!QString::compare(city, QString("石家庄"))) ip = "http://t.weather.sojson.com/api/weather/city/101090101";
    else if(!QString::compare(city, QString("太原"))) ip = "http://t.weather.sojson.com/api/weather/city/101100101";
    else if(!QString::compare(city, QString("西安"))) ip = "http://t.weather.sojson.com/api/weather/city/101110101";
    else if(!QString::compare(city, QString("济南"))) ip = "http://t.weather.sojson.com/api/weather/city/101120101";
    else if(!QString::compare(city, QString("乌鲁木齐"))) ip = "http://t.weather.sojson.com/api/weather/city/101130101";


    else if(!QString::compare(city, QString("拉萨"))) ip = "http://t.weather.sojson.com/api/weather/city/101140101";
    else if(!QString::compare(city, QString("西宁"))) ip = "http://t.weather.sojson.com/api/weather/city/101150101";
    else if(!QString::compare(city, QString("兰州"))) ip = "http://t.weather.sojson.com/api/weather/city/101160101";
    else if(!QString::compare(city, QString("银川"))) ip = "http://t.weather.sojson.com/api/weather/city/101170101";
    else if(!QString::compare(city, QString("郑州"))) ip = "http://t.weather.sojson.com/api/weather/city/101180101";
    else if(!QString::compare(city, QString("南京"))) ip = "http://t.weather.sojson.com/api/weather/city/101190101";
    else if(!QString::compare(city, QString("杭州"))) ip = "http://t.weather.sojson.com/api/weather/city/101210101";
    else if(!QString::compare(city, QString("合肥"))) ip = "http://t.weather.sojson.com/api/weather/city/101220101";
    else if(!QString::compare(city, QString("福州"))) ip = "http://t.weather.sojson.com/api/weather/city/101230101";
    else if(!QString::compare(city, QString("南昌"))) ip = "http://t.weather.sojson.com/api/weather/city/101240101";
    else if(!QString::compare(city, QString("长沙"))) ip = "http://t.weather.sojson.com/api/weather/city/101250101";
    else if(!QString::compare(city, QString("贵阳"))) ip = "http://t.weather.sojson.com/api/weather/city/101260101";



    else if(!QString::compare(city, QString("成都"))) ip = "http://t.weather.sojson.com/api/weather/city/101270101";
    else if(!QString::compare(city, QString("广州"))) ip = "http://t.weather.sojson.com/api/weather/city/101280101";
    else if(!QString::compare(city, QString("昆明"))) ip = "http://t.weather.sojson.com/api/weather/city/101290101";
    else if(!QString::compare(city, QString("南宁"))) ip = "http://t.weather.sojson.com/api/weather/city/101300101";
    else if(!QString::compare(city, QString("海口"))) ip = "http://t.weather.sojson.com/api/weather/city/101310101";
    else if(!QString::compare(city, QString("香港"))) ip = "http://t.weather.sojson.com/api/weather/city/101320101";
    else if(!QString::compare(city, QString("澳门"))) ip = "http://t.weather.sojson.com/api/weather/city/101330101";
    else if(!QString::compare(city, QString("台北县"))) ip = "http://t.weather.sojson.com/api/weather/city/101340101";


    //天气url
    QUrl url(ip);

    //创建一个请求对象
    QNetworkRequest request(url);
    manager.get(request);



}

void WhetherWindow::read_data(QNetworkReply *reply) {

    QByteArray array = reply->readAll();




    QJsonParseError error;
    QJsonDocument doc = QJsonDocument::fromJson(array, &error);

    if(error.error != QJsonParseError::NoError) {
        qDebug() << error.error;
        qDebug("json error");
        return ;
    }

    QJsonObject obj = doc.object();


    QString time = obj.value("time").toString();
    time = time.mid(5,5);

    qDebug() << time;

    //ui->updateTime->setText(time);
    QJsonObject cityobj = obj.value("cityInfo").toObject();

    QString city = cityobj.value("city").toString();

    qDebug() << city;



    QJsonObject dataobj = obj.value("data").toObject();

    QString wendu = dataobj.value("wendu").toString();

    qDebug() << wendu;
    ui->currentTemp->setText(wendu + "℃");

    QJsonArray forecast_array = dataobj.value("forecast").toArray();



            QJsonObject weatherobj = forecast_array.at(0).toObject();
            //最高温度
            QString high = weatherobj.value("high").toString();
            high = high.mid(3);
            qDebug()<<high;


            //ui->highestTemp->clear();
            ui->highestTemp->setText(high);
            //最低温度
            QString low = weatherobj.value("low").toString();
            low = low.mid(3,2);
            qDebug()<<low;
            ui->lowestTemp->setText(low + "℃");
            //温度范围
            QString range_wendu = low+"~"+high;
            qDebug()<<range_wendu;


            //日期
            QString ymd = weatherobj.value("ymd").toString();
            ymd = ymd.mid(5);
            qDebug()<<ymd;
            //星期几
            qDebug()<<weatherobj.value("week").toString();
            ui->updateTime->setText(ymd + " " + weatherobj.value("week").toString());

            //天气
            QString type = weatherobj.value("type").toString();
            qDebug()<<type;
            ui->whether->setText(type);


            //风
            QString fx = weatherobj.value("fx").toString();
            QString fl = weatherobj.value("fl").toString();
            QString wind = fx+fl;
            qDebug()<<wind;
            ui->winds->setText(wind);
            ui->windPower->setText(fl);
            ui->windVector->setText(fx);


            //空气质量
            int aqi = weatherobj.value("aqi").toInt();


            if(aqi<=50) ui->airCondition->setText("优");
            else if(aqi<=100) ui->airCondition->setText("良");
            else if(aqi<=150) ui->airCondition->setText("轻度污染");
            else if(aqi<=200) ui->airCondition->setText("中度污染");
            else if(aqi<=300) ui->airCondition->setText("重污染");
            else ui->airCondition->setText("严重污染");






            qDebug()<<aqi;








}


WhetherWindow::~WhetherWindow()
{
    delete ui;
}

