#include "tickettable.h"
#include "ui_tickettable.h"
#include "../../src/Log.hpp"
#include "../../src/GeneralUser.hpp"
#include "../../src/lib/ptr.hpp"
#include "../../src/lib/vector.hpp"
#include "../../src/Tickets.hpp"
#include <QStandardItemModel>
#include <QMessageBox>

TicketTable::TicketTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TicketTable)
{
    ui->setupUi(this);
}

TicketTable::~TicketTable()
{
    delete ui;
}

void TicketTable::set_user(shared_ptr<User> _user) {
    user = _user;
}

void TicketTable::output_ticket(const string &user_id) {
    try {
        shared_ptr<vector<Tickets> > ticket = user -> query_my_tickets(user_id);
        QStandardItemModel *model = new QStandardItemModel();
        model -> setColumnCount(8);
        model -> setHeaderData(0, Qt::Horizontal, tr("车次"));
        model -> setHeaderData(1, Qt::Horizontal, tr("发车时间"));
        model -> setHeaderData(2, Qt::Horizontal, tr("起点"));
        model -> setHeaderData(3, Qt::Horizontal, tr("终点"));
        model -> setHeaderData(4, Qt::Horizontal, tr("出站时间"));
        model -> setHeaderData(5, Qt::Horizontal, tr("票型"));
        model -> setHeaderData(6, Qt::Horizontal, tr("单价"));
        model -> setHeaderData(7, Qt::Horizontal, tr("张数"));

        ui -> tableView -> setModel(model);
        ui -> tableView -> setSelectionBehavior(QAbstractItemView::SelectRows);
        ui -> tableView -> setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui -> tableView -> setSortingEnabled(true);
        ui->tableView->setStyleSheet("QTableView {\
                                                            font:12px;\
            border:1px solid #a0a0a0;\
            border-top:0;\
                                                        }");

        int size = ticket -> size();
        for (int i = 0; i < size; ++i) {
            model -> setItem(i, 0, new QStandardItem(QString::fromStdString((*ticket)[i].query_id())));
            model -> setItem(i, 1, new QStandardItem(QString::fromStdString((*ticket)[i].query_train_date().print())));
            model -> setItem(i, 2, new QStandardItem(QString::fromStdString((*ticket)[i].query_start_station())));
            model -> setItem(i, 3, new QStandardItem(QString::fromStdString((*ticket)[i].query_finish_station())));
            model -> setItem(i, 4, new QStandardItem(QString::fromStdString((*ticket)[i].query_departure_date().print())));
            model -> setItem(i, 5, new QStandardItem(QString::fromStdString((*ticket)[i].query_level())));
            model -> setItem(i, 6, new QStandardItem(QString::fromStdString(sjtu::double_to_string(((*ticket)[i].query_price())))));
            model -> setItem(i, 7, new QStandardItem(QString::number((*ticket)[i].query_number())));
            //model -> setItem(i, 0, new QStandardItem(QString::fromStdString((*log)[i])));
            //model -> item(i,0) -> setTextAlignment(Qt::AlignCenter);
        }
        ui -> tableView -> resizeColumnsToContents();
    }
    catch (const Exception &exc) {
        QMessageBox::information(nullptr, "Warning", QString::fromStdString(exc.detail));
        return;
    }
}

void TicketTable::on_quitButton_clicked()
{
    close();
}

void TicketTable::on_enterButton_clicked()
{
    string str = ui -> userEdit ->text().toStdString();
    output_ticket(str);
}
