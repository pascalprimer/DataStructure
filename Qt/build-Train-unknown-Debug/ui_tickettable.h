/********************************************************************************
** Form generated from reading UI file 'tickettable.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETTABLE_H
#define UI_TICKETTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_TicketTable
{
public:
    QLineEdit *userEdit;
    QLabel *label;
    QTableView *tableView;
    QPushButton *quitButton;
    QPushButton *enterButton;
    QLabel *label_2;

    void setupUi(QDialog *TicketTable)
    {
        if (TicketTable->objectName().isEmpty())
            TicketTable->setObjectName(QStringLiteral("TicketTable"));
        TicketTable->resize(810, 548);
        userEdit = new QLineEdit(TicketTable);
        userEdit->setObjectName(QStringLiteral("userEdit"));
        userEdit->setGeometry(QRect(400, 100, 181, 31));
        label = new QLabel(TicketTable);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 30, 201, 51));
        tableView = new QTableView(TicketTable);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 160, 691, 281));
        quitButton = new QPushButton(TicketTable);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(460, 480, 99, 27));
        enterButton = new QPushButton(TicketTable);
        enterButton->setObjectName(QStringLiteral("enterButton"));
        enterButton->setGeometry(QRect(230, 480, 99, 27));
        label_2 = new QLabel(TicketTable);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 100, 111, 31));

        retranslateUi(TicketTable);

        QMetaObject::connectSlotsByName(TicketTable);
    } // setupUi

    void retranslateUi(QDialog *TicketTable)
    {
        TicketTable->setWindowTitle(QApplication::translate("TicketTable", "Dialog", 0));
        label->setText(QApplication::translate("TicketTable", "<html><head/><body><p><span style=\" font-size:20pt;\">\347\201\253\350\275\246\347\245\250</span></p></body></html>", 0));
        quitButton->setText(QApplication::translate("TicketTable", "\351\200\200\345\207\272", 0));
        enterButton->setText(QApplication::translate("TicketTable", "\347\241\256\350\256\244\346\237\245\350\257\242", 0));
        label_2->setText(QApplication::translate("TicketTable", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\237\245\350\257\242\347\224\250\346\210\267ID</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class TicketTable: public Ui_TicketTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETTABLE_H
