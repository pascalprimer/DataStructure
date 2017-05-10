#include "useroperation.h"
#include "ui_useroperation.h"

#include <QString>
#include <iostream>
#include <QMessageBox>
#include "../../src/Exceptions.hpp"
#include "getint.h"
#include "getnewpassword.h"
#include "getstring.h"
#include <string>

using std::string;

void UserOperation::set_user(shared_ptr<User> _user) {
    user = _user;
}

UserOperation::UserOperation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserOperation)
{
    ui->setupUi(this);
}

UserOperation::~UserOperation()
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
}*/

/*void Register::on_quitBtn_clicked()
{
    close();
}

void Register::on_registerBtn_clicked()
{
    string user_name = (ui -> usrLineEdit -> text()).toStdString();
    string user_pwd = (ui -> pwdLineEdit -> text()).toStdString();
    string user_pwd2 = (ui -> pwd2LineEdit -> text()).toStdString();
    string code = (ui -> codeLineEdit -> text()).toStdString();
    string user_id;
    if (ui -> checkBox -> isChecked()) {
        try {
            user_id = user -> create_admin(user_name, user_pwd, user_pwd2, code);
        }
        catch (const sjtu::Exception &exp) {
            QMessageBox::information(nullptr, "Warning", QString::fromStdString(exp.detail));
            return;
        }
        //QMessageBox::information(nullptr, "Notice", "管理员注册");

    } else {
        try {
            user_id = user -> create_user(user_name, user_pwd, user_pwd2);
        }
        catch (const sjtu::Exception &exp) {
            QMessageBox::information(nullptr, "Warning", QString::fromStdString(exp.detail));
            return;
        }
       // QMessageBox::information(nullptr, "Notice", "普通用户注册");
    }
    QMessageBox::information(nullptr, "Notice", QString::fromStdString("注册成功！\n ID为" + user_id));
}*/

inline void UserOperation::set_number_with_user(int number)  {
//std::cout << "充值 " << number << std::endl;
    number_with_user = number;
}


void UserOperation::on_chargeButton_clicked()
{
    GetInt getint;
    getint.set_bound(31415.926);
    QDialog::connect(&getint, &GetInt::queried, this, &UserOperation::set_number_with_user);
    try {
        getint.exec();
        user -> charge(number_with_user);
        QMessageBox::information(nullptr, "Notice", "用户充值" +
                                 QString::number(number_with_user) +
                                 "成功，余额为" +
                                 QString::number(user -> query_money()));
    }
    catch (const Exception &exc) {
        QMessageBox::information(nullptr, "Warning", QString::fromStdString(exc.detail));
    }
}

inline void UserOperation::set_string(const string &_s1, const string &_s2, const string &_s3) {
    s1 = _s1;
    s2 = _s2;
    s3 = _s3;
}

void UserOperation::on_pwdButton_clicked()
{
    GetNewPassword getstring;
    QDialog::connect(&getstring, &GetNewPassword::queried, this, &UserOperation::set_string);
    try {
        getstring.exec();
        user -> modify_password(s1, s2, s3);
        QMessageBox::information(nullptr, "Notice", "修改密码成功");
    }
    catch (const Exception &exc) {
        QMessageBox::information(nullptr, "Warning", QString::fromStdString(exc.detail));
    }
}

inline void UserOperation::set_single_string(const string &_s1) {
    s1 = _s1;
}

void UserOperation::on_nameButton_clicked()
{
    GetString getstring;
    QDialog::connect(&getstring, &GetString::queried, this, &UserOperation::set_single_string);
    try {
        getstring.exec();
        user -> modify_name(s1);
        QMessageBox::information(nullptr, "Notice", "成功修改用户名为" +
                                 QString::fromStdString(user -> query_name()));
    }
    catch (const Exception &exc) {
        QMessageBox::information(nullptr, "Warning", QString::fromStdString(exc.detail));
    }
}