#ifndef USEROPERATION_H
#define USEROPERATION_H

#include <QDialog>
#include "../../src/User.hpp"
#include "../../src/lib/ptr.hpp"

using namespace sjtu;

namespace Ui {
class UserOperation;
}

class UserOperation : public QDialog
{
    Q_OBJECT

public:
    explicit UserOperation(QWidget *parent = 0);
    ~UserOperation();
    void set_user(sjtu::shared_ptr<User> _user);
    inline void set_number_with_user(int number);
    inline void set_string(const string &_s1, const string &_s2, const string &_s3);
    inline void set_single_string(const string &_s1);
private slots:
    void on_chargeButton_clicked();

    void on_pwdButton_clicked();

    void on_nameButton_clicked();

private:
    Ui::UserOperation *ui;
    sjtu::shared_ptr<User> user;
    int number_with_user;
    string s1, s2, s3;
};

#endif // USEROPERATION_H
