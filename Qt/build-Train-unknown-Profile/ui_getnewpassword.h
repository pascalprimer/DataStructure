/********************************************************************************
** Form generated from reading UI file 'getnewpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETNEWPASSWORD_H
#define UI_GETNEWPASSWORD_H

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

class Ui_GetNewPassword
{
public:
    QLineEdit *oldPwdEdit;
    QPushButton *getpwd;
    QLabel *label;
    QLineEdit *pwd2Edit;
    QLineEdit *pwd1Edit;
    QLabel *label_3;
    QPushButton *quitBtn;
    QLabel *label_2;

    void setupUi(QDialog *GetNewPassword)
    {
        if (GetNewPassword->objectName().isEmpty())
            GetNewPassword->setObjectName(QStringLiteral("GetNewPassword"));
        GetNewPassword->resize(400, 275);
        oldPwdEdit = new QLineEdit(GetNewPassword);
        oldPwdEdit->setObjectName(QStringLiteral("oldPwdEdit"));
        oldPwdEdit->setGeometry(QRect(190, 50, 151, 27));
        getpwd = new QPushButton(GetNewPassword);
        getpwd->setObjectName(QStringLiteral("getpwd"));
        getpwd->setGeometry(QRect(60, 210, 101, 31));
        label = new QLabel(GetNewPassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 40, 51, 41));
        pwd2Edit = new QLineEdit(GetNewPassword);
        pwd2Edit->setObjectName(QStringLiteral("pwd2Edit"));
        pwd2Edit->setGeometry(QRect(190, 150, 151, 27));
        pwd1Edit = new QLineEdit(GetNewPassword);
        pwd1Edit->setObjectName(QStringLiteral("pwd1Edit"));
        pwd1Edit->setGeometry(QRect(190, 100, 151, 27));
        label_3 = new QLabel(GetNewPassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 150, 101, 31));
        quitBtn = new QPushButton(GetNewPassword);
        quitBtn->setObjectName(QStringLiteral("quitBtn"));
        quitBtn->setGeometry(QRect(220, 210, 99, 31));
        label_2 = new QLabel(GetNewPassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 100, 101, 31));

        retranslateUi(GetNewPassword);

        QMetaObject::connectSlotsByName(GetNewPassword);
    } // setupUi

    void retranslateUi(QDialog *GetNewPassword)
    {
        GetNewPassword->setWindowTitle(QApplication::translate("GetNewPassword", "Dialog", 0));
        getpwd->setText(QApplication::translate("GetNewPassword", "\347\241\256\345\256\232", 0));
        label->setText(QApplication::translate("GetNewPassword", "<html><head/><body><p>\346\227\247\345\257\206\347\240\201</p></body></html>", 0));
        pwd2Edit->setText(QString());
        pwd1Edit->setText(QApplication::translate("GetNewPassword", "\351\225\277\345\272\246\345\234\2506\345\210\26015\344\271\213\351\227\264", 0));
        label_3->setText(QApplication::translate("GetNewPassword", "<html><head/><body><p>\351\207\215\345\244\215\345\257\206\347\240\201</p></body></html>", 0));
        quitBtn->setText(QApplication::translate("GetNewPassword", "\351\200\200\345\207\272", 0));
        label_2->setText(QApplication::translate("GetNewPassword", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\226\260\345\257\206\347\240\201</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class GetNewPassword: public Ui_GetNewPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETNEWPASSWORD_H
