/********************************************************************************
** Form generated from reading UI file 'useroperation.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEROPERATION_H
#define UI_USEROPERATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UserOperation
{
public:
    QPushButton *chargeButton;
    QPushButton *pwdButton;
    QPushButton *nameButton;
    QPushButton *logButton;
    QPushButton *codeButton;
    QPushButton *ticketButton;
    QPushButton *historyButton;

    void setupUi(QDialog *UserOperation)
    {
        if (UserOperation->objectName().isEmpty())
            UserOperation->setObjectName(QStringLiteral("UserOperation"));
        UserOperation->resize(379, 305);
        chargeButton = new QPushButton(UserOperation);
        chargeButton->setObjectName(QStringLiteral("chargeButton"));
        chargeButton->setGeometry(QRect(60, 50, 99, 27));
        pwdButton = new QPushButton(UserOperation);
        pwdButton->setObjectName(QStringLiteral("pwdButton"));
        pwdButton->setGeometry(QRect(60, 100, 99, 27));
        nameButton = new QPushButton(UserOperation);
        nameButton->setObjectName(QStringLiteral("nameButton"));
        nameButton->setGeometry(QRect(60, 150, 99, 27));
        logButton = new QPushButton(UserOperation);
        logButton->setObjectName(QStringLiteral("logButton"));
        logButton->setGeometry(QRect(60, 200, 99, 27));
        codeButton = new QPushButton(UserOperation);
        codeButton->setObjectName(QStringLiteral("codeButton"));
        codeButton->setGeometry(QRect(210, 50, 99, 27));
        ticketButton = new QPushButton(UserOperation);
        ticketButton->setObjectName(QStringLiteral("ticketButton"));
        ticketButton->setGeometry(QRect(210, 100, 99, 27));
        historyButton = new QPushButton(UserOperation);
        historyButton->setObjectName(QStringLiteral("historyButton"));
        historyButton->setGeometry(QRect(210, 150, 99, 27));

        retranslateUi(UserOperation);

        QMetaObject::connectSlotsByName(UserOperation);
    } // setupUi

    void retranslateUi(QDialog *UserOperation)
    {
        UserOperation->setWindowTitle(QApplication::translate("UserOperation", "Dialog", 0));
        chargeButton->setText(QApplication::translate("UserOperation", "\345\205\205\345\200\274", 0));
        pwdButton->setText(QApplication::translate("UserOperation", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        nameButton->setText(QApplication::translate("UserOperation", "\344\277\256\346\224\271\347\224\250\346\210\267\345\220\215", 0));
        logButton->setText(QApplication::translate("UserOperation", "\346\237\245\347\234\213log", 0));
        codeButton->setText(QApplication::translate("UserOperation", "\344\277\256\346\224\271\351\252\214\350\257\201\347\240\201", 0));
        ticketButton->setText(QApplication::translate("UserOperation", "\346\210\221\347\232\204\347\201\253\350\275\246\347\245\250", 0));
        historyButton->setText(QApplication::translate("UserOperation", "\345\216\206\345\217\262\350\256\260\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class UserOperation: public Ui_UserOperation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEROPERATION_H
