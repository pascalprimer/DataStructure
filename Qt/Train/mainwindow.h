#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include "../../src/lib/ptr.hpp"
#include "../../src/GeneralUser.hpp"
#include "../../src/User.hpp"

using namespace sjtu;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void set_user(shared_ptr<User> _user);
    //explicit MainWindow(shared_ptr<QWidget> parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_button_clicked();

    void on_pushButton_2_clicked();

    void on_regigster_button_clicked();

private:
    shared_ptr<User> user;
    Ui::MainWindow *ui;
    //shared_ptr<Ui::MainWindow> ui;
};

#endif // MAINWINDOW_H
