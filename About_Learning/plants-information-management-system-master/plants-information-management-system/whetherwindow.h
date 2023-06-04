#ifndef WHETHERWINDOW_H
#define WHETHERWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonArray>

QT_BEGIN_NAMESPACE
namespace Ui { class WhetherWindow; }
QT_END_NAMESPACE

class WhetherWindow : public QMainWindow
{
    Q_OBJECT

public:
    WhetherWindow(QWidget *parent = nullptr);
    ~WhetherWindow();

private slots:
    void read_data(QNetworkReply *reply);
    void start_query();



private:
    Ui::WhetherWindow *ui;
    QNetworkAccessManager manager;
};
#endif // WHETHERWINDOW_H
