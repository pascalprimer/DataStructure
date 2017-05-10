/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QPushButton *registerBtn;
    QLineEdit *usrLineEdit;
    QPushButton *quitBtn;
    QLineEdit *pwdLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *pwd2LineEdit;
    QLabel *label_3;
    QCheckBox *checkBox;
    QLineEdit *codeLineEdit;
    QLabel *label_4;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(415, 333);
        registerBtn = new QPushButton(Register);
        registerBtn->setObjectName(QStringLiteral("registerBtn"));
        registerBtn->setGeometry(QRect(80, 260, 101, 31));
        usrLineEdit = new QLineEdit(Register);
        usrLineEdit->setObjectName(QStringLiteral("usrLineEdit"));
        usrLineEdit->setGeometry(QRect(220, 40, 151, 27));
        quitBtn = new QPushButton(Register);
        quitBtn->setObjectName(QStringLiteral("quitBtn"));
        quitBtn->setGeometry(QRect(250, 260, 99, 31));
        pwdLineEdit = new QLineEdit(Register);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(220, 90, 151, 27));
        label = new QLabel(Register);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 30, 51, 41));
        label_2 = new QLabel(Register);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 90, 91, 31));
        pwd2LineEdit = new QLineEdit(Register);
        pwd2LineEdit->setObjectName(QStringLiteral("pwd2LineEdit"));
        pwd2LineEdit->setGeometry(QRect(220, 140, 151, 27));
        label_3 = new QLabel(Register);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 140, 91, 31));
        checkBox = new QCheckBox(Register);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(180, 180, 121, 22));
        codeLineEdit = new QLineEdit(Register);
        codeLineEdit->setObjectName(QStringLiteral("codeLineEdit"));
        codeLineEdit->setGeometry(QRect(220, 210, 151, 27));
        label_4 = new QLabel(Register);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 210, 91, 31));
        registerBtn->raise();
        quitBtn->raise();
        pwdLineEdit->raise();
        label->raise();
        label_2->raise();
        usrLineEdit->raise();
        pwd2LineEdit->raise();
        label_3->raise();
        checkBox->raise();
        codeLineEdit->raise();
        label_4->raise();

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", 0));
        registerBtn->setText(QApplication::translate("Register", "\346\263\250\345\206\214", 0));
        quitBtn->setText(QApplication::translate("Register", "\351\200\200\345\207\272", 0));
        pwdLineEdit->setText(QApplication::translate("Register", "\351\225\277\345\272\246\345\234\2506\345\210\26015\344\271\213\351\227\264", 0));
        label->setText(QApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\224\250\346\210\267\345\220\215</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\257\206\347\240\201</span></p></body></html>", 0));
        pwd2LineEdit->setText(QApplication::translate("Register", "\351\207\215\345\244\215\344\270\200\346\254\241", 0));
        label_3->setText(QApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:12pt;\">\351\252\214\350\257\201\345\257\206\347\240\201</span></p></body></html>", 0));
        checkBox->setText(QApplication::translate("Register", "\347\256\241\347\220\206\345\221\230\346\263\250\345\206\214", 0));
        label_4->setText(QApplication::translate("Register", "<html><head/><body><p>\345\205\254\345\217\270\351\252\214\350\257\201\347\240\201</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
