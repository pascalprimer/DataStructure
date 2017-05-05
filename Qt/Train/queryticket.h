#ifndef QUERYTICKET_H
#define QUERYTICKET_H

#include <QDialog>
#include "../../src/User.hpp"

namespace Ui {
class QueryTicket;
}

class QueryTicket : public QDialog
{
    Q_OBJECT

public:
    explicit QueryTicket(QWidget *parent = 0);
    void set_user(shared_ptr<User> _user);
    ~QueryTicket();

private:
    Ui::QueryTicket *ui;
    shared_ptr<User> user;
};
