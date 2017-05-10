/********************************************************************************
** Form generated from reading UI file 'getstring.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETSTRING_H
#define UI_GETSTRING_H

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

class Ui_GetString
{
public:
    QPushButton *enterBtn;
    QLabel *label;
    QPushButton *quitBtn;
    QLineEdit *stringEdit;

    void setupUi(QDialog *GetString)
    {
        if (GetString->objectName().isEmpty())
            GetString->setObjectName(QStringLiteral("GetString"));
        GetString->resize(400, 211);
        enterBtn = new QPushButton(GetString);
        enterBtn->setObjectName(QStringLiteral("enterBtn"));
        enterBtn->setGeometry(QRect(70, 130, 99, 27));
        label = new QLabel(GetString);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 70, 111, 31));
        quitBtn = new QPushButton(GetString);
        quitBtn->setObjectName(QStringLiteral("quitBtn"));
        quitBtn->setGeometry(QRect(210, 130, 99, 27));
        stringEdit = new QLineEdit(GetString);
        stringEdit->setObjectName(QStringLiteral("stringEdit"));
        stringEdit->setGeometry(QRect(200, 70, 113, 27));

        retranslateUi(GetString);

        QMetaObject::connectSlotsByName(GetString);
    } // setupUi

    void retranslateUi(QDialog *GetString)
    {
        GetString->setWindowTitle(QApplication::translate("GetString", "Dialog", 0));
        enterBtn->setText(QApplication::translate("GetString", "\347\241\256\350\256\244", 0));
        label->setText(QApplication::translate("GetString", "<html><head/><body><p>\350\257\267\350\276\223\345\205\245</p></body></html>", 0));
        quitBtn->setText(QApplication::translate("GetString", "\351\200\200\345\207\272", 0));
        stringEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GetString: public Ui_GetString {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETSTRING_H
