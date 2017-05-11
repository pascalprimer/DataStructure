/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *loginBtn;
    QLineEdit *usrLineEdit;
    QLabel *label_2;
    QLineEdit *pwdLineEdit;
    QLabel *label;
    QPushButton *logoutBtn;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(355, 230);
        loginBtn = new QPushButton(Login);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(60, 170, 99, 27));
        usrLineEdit = new QLineEdit(Login);
        usrLineEdit->setObjectName(QStringLiteral("usrLineEdit"));
        usrLineEdit->setGeometry(QRect(180, 60, 113, 27));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 110, 91, 31));
        pwdLineEdit = new QLineEdit(Login);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(180, 110, 113, 27));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 51, 41));
        logoutBtn = new QPushButton(Login);
        logoutBtn->setObjectName(QStringLiteral("logoutBtn"));
        logoutBtn->setGeometry(QRect(200, 170, 99, 27));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", 0));
        loginBtn->setText(QApplication::translate("Login", "\347\231\273\345\275\225", 0));
        label_2->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\257\206\347\240\201</span></p></body></html>", 0));
        label->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\224\250\346\210\267ID</span></p></body></html>", 0));
        logoutBtn->setText(QApplication::translate("Login", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
