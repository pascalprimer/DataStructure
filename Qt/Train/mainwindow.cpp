#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "register.h"
#include "queryticket.h"
#include <QDateTimeEdit>
#include <QDebug>
#include <QDateTime>
#include <QTimer>
#include <QMessageBox>
#include <iostream>
#include <QString>

using namespace sjtu;

//MainWindow::MainWindow(shared_ptr<QWidget> parent) :
void MainWindow::set_user(shared_ptr<User> _user) {
    user = _user;
}

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow())
{
    ui -> setupUi(this);
    setWindowTitle("羊羊火车票");
    setWindowIcon(QIcon(":images/pictures/班徽.png"));
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

void MainWindow::on_login_button_clicked()
{
    Login login;
    login.set_user(this -> user);
    login.exec();
    if (user -> check_login()) {
        ui -> now_user -> setText(QString::fromStdString(user -> query_now_id()));
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    user -> logout();
    QMessageBox::information(nullptr, "Notice", "登出");
    ui -> now_user -> setText(tr("未登录"));
}

void MainWindow::on_regigster_button_clicked()
{
    Register reg;
    reg.set_user(this -> user);
    reg.exec();
}

void MainWindow::on_queryTicket_clicked()
{
    QueryTicket que;
    que.set_user(this -> user);
}
