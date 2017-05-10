/********************************************************************************
** Form generated from reading UI file 'plaintable.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAINTABLE_H
#define UI_PLAINTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_PlainTable
{
public:
    QTableView *tableView;
    QLabel *label;

    void setupUi(QDialog *PlainTable)
    {
        if (PlainTable->objectName().isEmpty())
            PlainTable->setObjectName(QStringLiteral("PlainTable"));
        PlainTable->resize(575, 442);
        tableView = new QTableView(PlainTable);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(70, 140, 441, 281));
        label = new QLabel(PlainTable);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 20, 201, 31));

        retranslateUi(PlainTable);

        QMetaObject::connectSlotsByName(PlainTable);
    } // setupUi

    void retranslateUi(QDialog *PlainTable)
    {
        PlainTable->setWindowTitle(QApplication::translate("PlainTable", "Dialog", 0));
        label->setText(QApplication::translate("PlainTable", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\227\245\345\277\227</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class PlainTable: public Ui_PlainTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAINTABLE_H
