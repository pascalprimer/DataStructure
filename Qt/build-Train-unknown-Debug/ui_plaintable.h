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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_PlainTable
{
public:
    QTableView *tableView;
    QLabel *label;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *enterButton;
    QLabel *label_2;
    QLineEdit *userEdit;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QPushButton *quitButton;

    void setupUi(QDialog *PlainTable)
    {
        if (PlainTable->objectName().isEmpty())
            PlainTable->setObjectName(QStringLiteral("PlainTable"));
        PlainTable->resize(825, 573);
        tableView = new QTableView(PlainTable);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(70, 200, 691, 281));
        label = new QLabel(PlainTable);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 30, 201, 51));
        radioButton = new QRadioButton(PlainTable);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(150, 150, 117, 22));
        radioButton_2 = new QRadioButton(PlainTable);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(260, 150, 117, 22));
        radioButton_3 = new QRadioButton(PlainTable);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(370, 150, 117, 22));
        enterButton = new QPushButton(PlainTable);
        enterButton->setObjectName(QStringLiteral("enterButton"));
        enterButton->setGeometry(QRect(250, 520, 99, 27));
        label_2 = new QLabel(PlainTable);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 100, 111, 31));
        userEdit = new QLineEdit(PlainTable);
        userEdit->setObjectName(QStringLiteral("userEdit"));
        userEdit->setGeometry(QRect(370, 100, 181, 31));
        radioButton_4 = new QRadioButton(PlainTable);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(470, 150, 117, 22));
        radioButton_5 = new QRadioButton(PlainTable);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(580, 150, 117, 22));
        quitButton = new QPushButton(PlainTable);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(480, 520, 99, 27));

        retranslateUi(PlainTable);

        QMetaObject::connectSlotsByName(PlainTable);
    } // setupUi

    void retranslateUi(QDialog *PlainTable)
    {
        PlainTable->setWindowTitle(QApplication::translate("PlainTable", "Dialog", 0));
        label->setText(QApplication::translate("PlainTable", "<html><head/><body><p><span style=\" font-size:20pt;\">\346\227\245\345\277\227</span></p></body></html>", 0));
        radioButton->setText(QApplication::translate("PlainTable", "\345\205\250\351\203\250\346\227\245\345\277\227", 0));
        radioButton_2->setText(QApplication::translate("PlainTable", "\344\271\260\347\245\250\346\227\245\345\277\227", 0));
        radioButton_3->setText(QApplication::translate("PlainTable", "\351\200\200\347\245\250\346\227\245\345\277\227", 0));
        enterButton->setText(QApplication::translate("PlainTable", "\347\241\256\350\256\244\346\237\245\350\257\242", 0));
        label_2->setText(QApplication::translate("PlainTable", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\237\245\350\257\242\347\224\250\346\210\267ID</span></p></body></html>", 0));
        radioButton_4->setText(QApplication::translate("PlainTable", "\347\245\250\345\212\241\346\227\245\345\277\227", 0));
        radioButton_5->setText(QApplication::translate("PlainTable", "\344\275\231\351\242\235\346\227\245\345\277\227", 0));
        quitButton->setText(QApplication::translate("PlainTable", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class PlainTable: public Ui_PlainTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAINTABLE_H
