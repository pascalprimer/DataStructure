#ifndef TICKETTABLE_H
#define TICKETTABLE_H

#include <QDialog>
#include <QButtonGroup>
#include <QRadioButton>
#include <QHBoxLayout>
#include "../../src/lib/ptr.hpp"
#include "../../src/User.hpp"
#include "../../src/GeneralUser.hpp"

using namespace sjtu;

namespace Ui {
class TicketTable;
}

class TicketTable : public QDialog
{
    Q_OBJECT

public:
    explicit TicketTable(QWidget *parent = 0);
    ~TicketTable();
    void set_user(shared_ptr<User> _user);
    void output_ticket(const string &user_id);

private slots:
    void on_quitButton_clicked();

    void on_enterButton_clicked();

private:
    Ui::TicketTable *ui;
    shared_ptr<User> user;
};

#endif // TICKETTABLE_H

