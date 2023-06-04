/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_newname;
    QLineEdit *lineEdit_newpass;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_surepass;
    QLabel *label_6;
    QPushButton *btn_sureadd;
    QPushButton *btn_return;

    void setupUi(QWidget *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName(QString::fromUtf8("Signup"));
        Signup->resize(780, 520);
        Signup->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        label = new QLabel(Signup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 261, 571));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/girl1.png);"));
        label_2 = new QLabel(Signup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 50, 241, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 20pt \"Arial Black\";"));
        label_3 = new QLabel(Signup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 90, 401, 71));
        label_3->setStyleSheet(QString::fromUtf8("font: 87 20pt \"Arial Black\";"));
        lineEdit_newname = new QLineEdit(Signup);
        lineEdit_newname->setObjectName(QString::fromUtf8("lineEdit_newname"));
        lineEdit_newname->setGeometry(QRect(380, 210, 281, 31));
        lineEdit_newpass = new QLineEdit(Signup);
        lineEdit_newpass->setObjectName(QString::fromUtf8("lineEdit_newpass"));
        lineEdit_newpass->setGeometry(QRect(380, 280, 281, 31));
        lineEdit_newpass->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(Signup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 190, 121, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        label_5 = new QLabel(Signup);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 260, 141, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        lineEdit_surepass = new QLineEdit(Signup);
        lineEdit_surepass->setObjectName(QString::fromUtf8("lineEdit_surepass"));
        lineEdit_surepass->setGeometry(QRect(380, 340, 281, 31));
        lineEdit_surepass->setEchoMode(QLineEdit::Password);
        label_6 = new QLabel(Signup);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(380, 320, 191, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        btn_sureadd = new QPushButton(Signup);
        btn_sureadd->setObjectName(QString::fromUtf8("btn_sureadd"));
        btn_sureadd->setGeometry(QRect(380, 400, 281, 41));
        btn_sureadd->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 123, 255);\n"
"color: rgb(255, 255, 255);"));
        btn_return = new QPushButton(Signup);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));
        btn_return->setGeometry(QRect(390, 450, 271, 31));
        btn_return->setStyleSheet(QString::fromUtf8("color: rgb(29, 123, 255);\n"
"font: 25 9pt \"DIN Next LT Pro Light\";"));
        btn_return->setFlat(true);
        label_5->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        lineEdit_newname->raise();
        lineEdit_newpass->raise();
        label_4->raise();
        lineEdit_surepass->raise();
        label_6->raise();
        btn_sureadd->raise();
        btn_return->raise();

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QWidget *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Signup", "Hello", nullptr));
        label_3->setText(QCoreApplication::translate("Signup", "welcome to us\357\274\201", nullptr));
        label_4->setText(QCoreApplication::translate("Signup", "Username\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Signup", "Password\357\274\232", nullptr));
        lineEdit_surepass->setText(QString());
        label_6->setText(QCoreApplication::translate("Signup", "Ensure your password\357\274\232", nullptr));
        btn_sureadd->setText(QCoreApplication::translate("Signup", "Sure", nullptr));
        btn_return->setText(QCoreApplication::translate("Signup", "Click there to Return login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
