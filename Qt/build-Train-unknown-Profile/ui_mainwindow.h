/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableView *tableView;
    QPushButton *login_button;
    QPushButton *regigster_button;
    QPushButton *pushButton_2;
    QLabel *now_user;
    QPushButton *queryTicket;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(765, 446);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(150, 60, 551, 251));
        login_button = new QPushButton(centralWidget);
        login_button->setObjectName(QStringLiteral("login_button"));
        login_button->setGeometry(QRect(360, 340, 99, 27));
        regigster_button = new QPushButton(centralWidget);
        regigster_button->setObjectName(QStringLiteral("regigster_button"));
        regigster_button->setGeometry(QRect(200, 340, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 340, 99, 27));
        now_user = new QLabel(centralWidget);
        now_user->setObjectName(QStringLiteral("now_user"));
        now_user->setGeometry(QRect(520, 20, 221, 31));
        queryTicket = new QPushButton(centralWidget);
        queryTicket->setObjectName(QStringLiteral("queryTicket"));
        queryTicket->setGeometry(QRect(30, 100, 99, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 765, 31));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        login_button->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", 0));
        regigster_button->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\347\231\273\345\207\272", 0));
        now_user->setText(QApplication::translate("MainWindow", "\346\234\252\347\231\273\345\275\225", 0));
        queryTicket->setText(QApplication::translate("MainWindow", "\347\201\253\350\275\246\347\245\250\346\237\245\350\257\242", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\350\275\275\345\205\245\346\226\207\344\273\266", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
