#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "../../src/User.hpp"
#include "../../src/lib/ptr.hpp"

using namespace sjtu;

int main(int argc, char *argv[])
{
    sjtu::User user;

    /*std::cout << user.create_user("cyy", "pascalprimer", "pascalprimer") << std::endl;
    user.login("0", "pascalprimer");
    user.logout();
    std::cout << user.check_login() << std::endl;*/

   // return 0;
    //return a.exec();

    //user.login("0", "pascalprimer");
    //std::cout << user.check_login() << std::endl;
    QApplication a(argc, argv);
    MainWindow w;
    w.set_user(shared_ptr<User>(new User(user)));
    w.show();

    return a.exec();
}
