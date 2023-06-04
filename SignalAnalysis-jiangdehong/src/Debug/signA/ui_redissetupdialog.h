/********************************************************************************
** Form generated from reading UI file 'redissetupdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDISSETUPDIALOG_H
#define UI_REDISSETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RedisSetUpDialog
{
public:
    QCheckBox *IsOPenRedisCheckBox;
    QLineEdit *hostEdit;
    QLineEdit *portEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *redisButton;
    QPushButton *InitButton;
    QComboBox *algorithmComboBox;

    void setupUi(QDialog *RedisSetUpDialog)
    {
        if (RedisSetUpDialog->objectName().isEmpty())
            RedisSetUpDialog->setObjectName(QString::fromUtf8("RedisSetUpDialog"));
        RedisSetUpDialog->resize(493, 378);
        IsOPenRedisCheckBox = new QCheckBox(RedisSetUpDialog);
        IsOPenRedisCheckBox->setObjectName(QString::fromUtf8("IsOPenRedisCheckBox"));
        IsOPenRedisCheckBox->setGeometry(QRect(80, 30, 151, 81));
        hostEdit = new QLineEdit(RedisSetUpDialog);
        hostEdit->setObjectName(QString::fromUtf8("hostEdit"));
        hostEdit->setGeometry(QRect(100, 120, 151, 31));
        portEdit = new QLineEdit(RedisSetUpDialog);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));
        portEdit->setGeometry(QRect(100, 180, 151, 31));
        label = new QLabel(RedisSetUpDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 130, 54, 12));
        label_2 = new QLabel(RedisSetUpDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 190, 54, 12));
        redisButton = new QPushButton(RedisSetUpDialog);
        redisButton->setObjectName(QString::fromUtf8("redisButton"));
        redisButton->setGeometry(QRect(250, 249, 91, 31));
        InitButton = new QPushButton(RedisSetUpDialog);
        InitButton->setObjectName(QString::fromUtf8("InitButton"));
        InitButton->setGeometry(QRect(80, 250, 81, 31));
        algorithmComboBox = new QComboBox(RedisSetUpDialog);
        algorithmComboBox->setObjectName(QString::fromUtf8("algorithmComboBox"));
        algorithmComboBox->setGeometry(QRect(210, 60, 141, 22));

        retranslateUi(RedisSetUpDialog);

        QMetaObject::connectSlotsByName(RedisSetUpDialog);
    } // setupUi

    void retranslateUi(QDialog *RedisSetUpDialog)
    {
        RedisSetUpDialog->setWindowTitle(QCoreApplication::translate("RedisSetUpDialog", "\350\277\236\346\216\245\350\277\234\347\250\213\346\225\260\346\215\256\345\272\223", nullptr));
        IsOPenRedisCheckBox->setText(QCoreApplication::translate("RedisSetUpDialog", "CheckBox", nullptr));
        label->setText(QCoreApplication::translate("RedisSetUpDialog", "Host", nullptr));
        label_2->setText(QCoreApplication::translate("RedisSetUpDialog", "port", nullptr));
        redisButton->setText(QCoreApplication::translate("RedisSetUpDialog", "\350\277\236\346\216\245", nullptr));
        InitButton->setText(QCoreApplication::translate("RedisSetUpDialog", "\351\207\215\347\275\256\346\225\260\346\215\256\345\272\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RedisSetUpDialog: public Ui_RedisSetUpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDISSETUPDIALOG_H
