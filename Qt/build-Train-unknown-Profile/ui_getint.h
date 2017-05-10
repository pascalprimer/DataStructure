/********************************************************************************
** Form generated from reading UI file 'getint.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETINT_H
#define UI_GETINT_H

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

class Ui_GetInt
{
public:
    QLineEdit *numEdit;
    QLabel *label;
    QLabel *request;
    QPushButton *enterBtn;
    QPushButton *quitBtn;

    void setupUi(QDialog *GetInt)
    {
        if (GetInt->objectName().isEmpty())
            GetInt->setObjectName(QStringLiteral("GetInt"));
        GetInt->resize(400, 270);
        numEdit = new QLineEdit(GetInt);
        numEdit->setObjectName(QStringLiteral("numEdit"));
        numEdit->setGeometry(QRect(190, 120, 113, 27));
        label = new QLabel(GetInt);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 120, 111, 31));
        request = new QLabel(GetInt);
        request->setObjectName(QStringLiteral("request"));
        request->setGeometry(QRect(80, 60, 221, 31));
        enterBtn = new QPushButton(GetInt);
        enterBtn->setObjectName(QStringLiteral("enterBtn"));
        enterBtn->setGeometry(QRect(70, 190, 99, 27));
        quitBtn = new QPushButton(GetInt);
        quitBtn->setObjectName(QStringLiteral("quitBtn"));
        quitBtn->setGeometry(QRect(210, 190, 99, 27));

        retranslateUi(GetInt);

        QMetaObject::connectSlotsByName(GetInt);
    } // setupUi

    void retranslateUi(QDialog *GetInt)
    {
        GetInt->setWindowTitle(QApplication::translate("GetInt", "Dialog", 0));
        numEdit->setText(QApplication::translate("GetInt", "0", 0));
        label->setText(QApplication::translate("GetInt", "<html><head/><body><p>\350\257\267\350\276\223\345\205\245\346\225\260\351\207\217</p></body></html>", 0));
        request->setText(QApplication::translate("GetInt", "<html><head/><body><p><br/></p></body></html>", 0));
        enterBtn->setText(QApplication::translate("GetInt", "\347\241\256\350\256\244", 0));
        quitBtn->setText(QApplication::translate("GetInt", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class GetInt: public Ui_GetInt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETINT_H
