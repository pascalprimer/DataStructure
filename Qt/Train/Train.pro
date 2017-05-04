#-------------------------------------------------
#
# Project created by QtCreator 2017-05-03T01:09:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Train
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    register.cpp

HEADERS  += mainwindow.h \
    ../../src/User.hpp \
    ../../src/GeneralUser.hpp \
    ../../src/lib/vector.hpp \
    ../../src/lib/set.hpp \
    ../../src/lib/ptr.hpp \
    ../../src/lib/pair.hpp \
    ../../src/lib/map.hpp \
    ../../src/Exceptions.hpp \
    ../../src/Date.hpp \
    ../../src/File.hpp \
    ../../src/Station.hpp \
    login.h \
    register.h \
    ../../src/Train.hpp \
    ../../src/Tickets.hpp

FORMS    += mainwindow.ui \
    login.ui \
    register.ui

RESOURCES += \
    image.qrc
