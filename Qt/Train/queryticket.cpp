#include "queryticket.h"
#include "ui_queryticket.h"
#include "../../src/Exceptions.hpp"
#include <QString>
#include <iostream>
#include <QMessageBox>

void QueryTicket::set_user(shared_ptr<User> _user) {
    user = _user;
}

QueryTicket::QueryTicket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QueryTicket)
{
    ui->setupUi(this);
}

QueryTicket::~QueryTicket()
{
    delete ui;
}
/*
void Login::on_loginBtn_clicked()
{
    string user_id = (ui -> usrLineEdit -> text()).toStdString();
    string user_pwd = (ui -> pwdLineEdit -> text()).toStdString();
    try {
        user -> login(user_id, user_pwd);
    }
    catch (const sjtu::Exception &exp) {
        QMessageBox::information(nullptr, "Warning", QString::fromStdString(exp.detail));
        return;
    }
    QMessageBox::information(nullptr, "Notice", "登录成功");
}

void Login::on_logoutBtn_clicked()
{
    close();
}
*/
