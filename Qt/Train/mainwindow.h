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
    //explicit MainWindow(shared_ptr<QWidget> parent = nullptr);
    ~MainWindow();

private:
    //Ui::MainWindow *ui;
    shared_ptr<Ui::MainWindow> ui;
};

#endif // MAINWINDOW_H
