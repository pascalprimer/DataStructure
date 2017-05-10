#ifndef PLAINTABLE_H
#define PLAINTABLE_H

#include <QDialog>
#include "../../src/lib/ptr.hpp"
#include "../../src/User.hpp"

using namespace sjtu;

namespace Ui {
class PlainTable;
}

class PlainTable : public QDialog
{
    Q_OBJECT

public:
    explicit PlainTable(QWidget *parent = 0);
    ~PlainTable();
    inline void set_user(shared_ptr<User> _user);
    inline void output_log(const string &user_id);
    inline void get_type();

private:
    Ui::PlainTable *ui;
    shared_ptr<User> user;
};

#endif // PLAINTABLE_H
