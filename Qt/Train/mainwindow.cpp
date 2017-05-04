#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTimeEdit>
#include <QDebug>
#include <QDateTime>
#include <QTimer>
#include <iostream>

using sjtu::shared_ptr;

//MainWindow::MainWindow(shared_ptr<QWidget> parent) :
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow())
{
    ui -> setupUi(this);
    setWindowTitle("羊羊火车票");
    setWindowIcon(QIcon(":images/pictures/班徽.png"));

    sjtu::User user();
    /*QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss ddd");
    ui -> label -> setText(str);
*/
    /*QTimer *timer = new QTimer(this);
    //关联定时器溢出信号和相应的槽函数
    connect(timer, SIGNAL(timeout()), this, SLOT(timerUpdate()));
    timer->start(1000);*/
    //QDateTimeEdit *dateTimeEdit = new QDateTimeEdit(QDateTime::currentDateTime(), this);
    //connect(dateTimeEdit, SIGNAL(dateChanged(QDate)), this, SLOT(onDateChanged(QDate)));
}

MainWindow::~MainWindow()
{
    //delete ui;
}

/*inline void MainWindow::timerUpdate() {
    QDateTime time = QDateTime::currentDateTime();
     //设置系统时间显示格式
     QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
     //在标签上显示时间
     ui->lineEdit->setText(str);
}*/

/*void onDateChanged(const QDate &date) {
    qDebug() << "QDate : " << date;
}*/
