#include "../../src/Log.hpp"
#include "plaintable.h"
#include "ui_plaintable.h"
#include <QStandardItemModel>
#include <QButtonGroup>
#include <QRadioButton>

PlainTable::PlainTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlainTable)
{
    QButtonGroup *button = new QButtonGroup();
    QRadioButton *all = new QRadioButton("所有");
    QRadioButton *none = new QRadioButton("没有");
    button -> addButton(all, 0);
    button -> addButton(none, 1);
    //connect(button, SIGNAL(buttonClicked(int)), )
    ui->setupUi(this);
}

PlainTable::~PlainTable()
{
    delete ui;
}

inline void PlainTable::set_user(shared_ptr<User> _user) {
    user = _user;
}

inline void PlainTable::get_type() {

}

inline void PlainTable::output_log(const string &user_id) {
    ui -> label -> setText(tr("日志"));
    QStandardItemModel *model = new QStandardItemModel();
    model -> setColumnCount(1);
    model -> setHeaderData(0, Qt::Horizontal, tr("Log"));
    ui -> tableView -> setModel(model);
    ui -> tableView -> setSelectionBehavior(QAbstractItemView::SelectRows);
    ui -> tableView -> setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui -> tableView -> setSortingEnabled(true);

    /*for (int i = 0; i < ticket -> size(); ++i) {
        model -> setItem(i, 0, new QStandardItem(QString::fromStdString((*ticket)[i].query_id())));
        model -> setItem(i, 1, new QStandardItem(QString::fromStdString((*ticket)[i].query_train_date().print())));
        model -> setItem(i, 2, new QStandardItem(QString::fromStdString((*ticket)[i].query_departure_date().print())));
        model -> setItem(i, 3, new QStandardItem(QString::fromStdString((*ticket)[i].query_start_station())));
        model -> setItem(i, 4, new QStandardItem(QString::fromStdString((*ticket)[i].query_finish_station())));
        model -> setItem(i, 5, new QStandardItem(QString::fromStdString((*ticket)[i].query_level())));
        model -> setItem(i, 6, new QStandardItem(QString::number((*ticket)[i].query_number())));
        model -> setItem(i, 7, new QStandardItem(QString::number((*ticket)[i].query_price())));
        //model -> setItem(i, 7, new QStandardItem(*ticket)[i]);
    }*/
}
