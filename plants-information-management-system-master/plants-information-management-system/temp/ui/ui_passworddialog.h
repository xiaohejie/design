/********************************************************************************
** Form generated from reading UI file 'passworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDDIALOG_H
#define UI_PASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_PasswordDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *m_infoLabel;
    QLineEdit *m_userNameLineEdit;
    QDialogButtonBox *buttonBox;
    QLabel *m_iconLabel;
    QLabel *passwordLabel;
    QLabel *userLabel;
    QLineEdit *m_passwordLineEdit;

    void setupUi(QDialog *PasswordDialog)
    {
        if (PasswordDialog->objectName().isEmpty())
            PasswordDialog->setObjectName(QString::fromUtf8("PasswordDialog"));
        PasswordDialog->resize(191, 148);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        PasswordDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(PasswordDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_infoLabel = new QLabel(PasswordDialog);
        m_infoLabel->setObjectName(QString::fromUtf8("m_infoLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_infoLabel->sizePolicy().hasHeightForWidth());
        m_infoLabel->setSizePolicy(sizePolicy);
        m_infoLabel->setStyleSheet(QString::fromUtf8("font: 20 14pt \"Times New Roman\";"));
        m_infoLabel->setWordWrap(true);

        gridLayout->addWidget(m_infoLabel, 0, 1, 1, 1);

        m_userNameLineEdit = new QLineEdit(PasswordDialog);
        m_userNameLineEdit->setObjectName(QString::fromUtf8("m_userNameLineEdit"));
        m_userNameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
" \n"
"	border:2px solid#7b7b7b;\n"
"	border-radius:8px;\n"
"	background-color:#fffef0\n"
"}\n"
""));

        gridLayout->addWidget(m_userNameLineEdit, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(PasswordDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"Times New Roman\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

        m_iconLabel = new QLabel(PasswordDialog);
        m_iconLabel->setObjectName(QString::fromUtf8("m_iconLabel"));
        m_iconLabel->setStyleSheet(QString::fromUtf8("font: 20 14pt \"Times New Roman\";"));
        m_iconLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_iconLabel, 0, 0, 1, 1);

        passwordLabel = new QLabel(PasswordDialog);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setStyleSheet(QString::fromUtf8("font: 20 12pt \"Times New Roman\";"));

        gridLayout->addWidget(passwordLabel, 4, 0, 1, 1);

        userLabel = new QLabel(PasswordDialog);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        userLabel->setStyleSheet(QString::fromUtf8("font: 20 12pt \"Times New Roman\";"));

        gridLayout->addWidget(userLabel, 2, 0, 1, 1);

        m_passwordLineEdit = new QLineEdit(PasswordDialog);
        m_passwordLineEdit->setObjectName(QString::fromUtf8("m_passwordLineEdit"));
        m_passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
" \n"
"	border:2px solid#7b7b7b;\n"
"	border-radius:8px;\n"
"	background-color:#fffef0\n"
"}\n"
""));
        m_passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(m_passwordLineEdit, 4, 1, 1, 1);

        m_userNameLineEdit->raise();
        buttonBox->raise();
        m_iconLabel->raise();
        m_infoLabel->raise();
        userLabel->raise();
        passwordLabel->raise();
        m_passwordLineEdit->raise();

        retranslateUi(PasswordDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PasswordDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PasswordDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswordDialog)
    {
        PasswordDialog->setWindowTitle(QCoreApplication::translate("PasswordDialog", "Authentication Required", nullptr));
        m_infoLabel->setText(QCoreApplication::translate("PasswordDialog", "Info", nullptr));
        m_iconLabel->setText(QCoreApplication::translate("PasswordDialog", "Icon", nullptr));
        passwordLabel->setText(QCoreApplication::translate("PasswordDialog", "Password:", nullptr));
        userLabel->setText(QCoreApplication::translate("PasswordDialog", "Username:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasswordDialog: public Ui_PasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDDIALOG_H
