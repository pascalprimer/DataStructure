/********************************************************************************
** Form generated from reading UI file 'queryticket.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYTICKET_H
#define UI_QUERYTICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QueryTicket
{
public:
    QLabel *label;
    QPushButton *quitBtn;
    QLineEdit *trainEdit;
    QPushButton *queryBtn;
    QDateTimeEdit *dateEdit1;
    QLineEdit *placeEdit1;
    QLabel *label_6;
    QLineEdit *placeEdit2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QDateTimeEdit *dateEdit2;
    QLineEdit *levelEdit;
    QLabel *label_5;
    QLineEdit *numEdit;
    QLabel *label_7;

    void setupUi(QDialog *QueryTicket)
    {
        if (QueryTicket->objectName().isEmpty())
            QueryTicket->setObjectName(QStringLiteral("QueryTicket"));
        QueryTicket->resize(452, 395);
        label = new QLabel(QueryTicket);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 30, 101, 41));
        quitBtn = new QPushButton(QueryTicket);
        quitBtn->setObjectName(QStringLiteral("quitBtn"));
        quitBtn->setGeometry(QRect(250, 320, 99, 31));
        trainEdit = new QLineEdit(QueryTicket);
        trainEdit->setObjectName(QStringLiteral("trainEdit"));
        trainEdit->setGeometry(QRect(210, 40, 151, 27));
        queryBtn = new QPushButton(QueryTicket);
        queryBtn->setObjectName(QStringLiteral("queryBtn"));
        queryBtn->setGeometry(QRect(70, 320, 101, 31));
        dateEdit1 = new QDateTimeEdit(QueryTicket);
        dateEdit1->setObjectName(QStringLiteral("dateEdit1"));
        dateEdit1->setGeometry(QRect(210, 160, 151, 27));
        placeEdit1 = new QLineEdit(QueryTicket);
        placeEdit1->setObjectName(QStringLiteral("placeEdit1"));
        placeEdit1->setGeometry(QRect(210, 80, 151, 27));
        label_6 = new QLabel(QueryTicket);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 70, 51, 41));
        placeEdit2 = new QLineEdit(QueryTicket);
        placeEdit2->setObjectName(QStringLiteral("placeEdit2"));
        placeEdit2->setGeometry(QRect(210, 120, 151, 27));
        label_2 = new QLabel(QueryTicket);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 110, 51, 41));
        label_3 = new QLabel(QueryTicket);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 150, 121, 41));
        label_4 = new QLabel(QueryTicket);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 190, 121, 41));
        dateEdit2 = new QDateTimeEdit(QueryTicket);
        dateEdit2->setObjectName(QStringLiteral("dateEdit2"));
        dateEdit2->setGeometry(QRect(210, 200, 151, 27));
        levelEdit = new QLineEdit(QueryTicket);
        levelEdit->setObjectName(QStringLiteral("levelEdit"));
        levelEdit->setGeometry(QRect(210, 240, 151, 27));
        label_5 = new QLabel(QueryTicket);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 230, 51, 41));
        numEdit = new QLineEdit(QueryTicket);
        numEdit->setObjectName(QStringLiteral("numEdit"));
        numEdit->setGeometry(QRect(210, 280, 151, 27));
        label_7 = new QLabel(QueryTicket);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 270, 51, 41));

        retranslateUi(QueryTicket);

        QMetaObject::connectSlotsByName(QueryTicket);
    } // setupUi

    void retranslateUi(QDialog *QueryTicket)
    {
        QueryTicket->setWindowTitle(QApplication::translate("QueryTicket", "Dialog", 0));
        label->setText(QApplication::translate("QueryTicket", "<html><head/><body><p>\350\275\246\346\254\241(\345\217\257\344\273\245\346\262\241\346\234\211)</p></body></html>", 0));
        quitBtn->setText(QApplication::translate("QueryTicket", "\351\200\200\345\207\272", 0));
        trainEdit->setText(QString());
        queryBtn->setText(QApplication::translate("QueryTicket", "\346\237\245\350\257\242", 0));
        placeEdit1->setText(QApplication::translate("QueryTicket", "\345\214\227\344\272\254", 0));
        label_6->setText(QApplication::translate("QueryTicket", "<html><head/><body><p>\350\265\267\347\202\271</p></body></html>", 0));
        placeEdit2->setText(QApplication::translate("QueryTicket", "\345\224\220\345\261\261", 0));
        label_2->setText(QApplication::translate("QueryTicket", "<html><head/><body><p>\347\273\210\347\202\271</p></body></html>", 0));
        label_3->setText(QApplication::translate("QueryTicket", "<html><head/><body><p>\346\234\200\346\227\251\346\227\266\351\227\264</p></body></html>", 0));
        label_4->setText(QApplication::translate("QueryTicket", "<html><head/><body><p>\346\234\200\346\231\232\346\227\266\351\227\264</p></body></html>", 0));
        levelEdit->setText(QApplication::translate("QueryTicket", "\344\270\200\347\255\211\345\272\247", 0));
        label_5->setText(QApplication::translate("QueryTicket", "<html><head/><body><p>\347\245\250\345\236\213</p></body></html>", 0));
        numEdit->setText(QApplication::translate("QueryTicket", "1", 0));
        label_7->setText(QApplication::translate("QueryTicket", "<html><head/><body><p>\345\274\240\346\225\260</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class QueryTicket: public Ui_QueryTicket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYTICKET_H
