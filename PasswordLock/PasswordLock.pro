#-------------------------------------------------
#
# Project created by QtCreator 2022-06-27T15:59:15
#
#-------------------------------------------------

QT       += core gui sql network charts serialport network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PasswordLock
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    displaydata.cpp \
    faultdiagnosis.cpp \
    humidity.cpp \
        main.cpp \
        mainwindow.cpp \
    selectfunction.cpp \
        signup.cpp \
    client.cpp \
    function.cpp \
    mysqlquerymodel.cpp \
    formdb.cpp \
    tempature.cpp

HEADERS += \
    displaydata.h \
    faultdiagnosis.h \
    humidity.h \
        mainwindow.h \
    selectfunction.h \
        signup.h \
    client.h \
    function.h \
    mysqlquerymodel.h \
    formdb.h \
    tempature.h

FORMS += \
    displaydata.ui \
    faultdiagnosis.ui \
    humidity.ui \
        mainwindow.ui \
    selectfunction.ui \
        signup.ui \
    client.ui \
    function.ui \
    formdb.ui \
    tempature.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
