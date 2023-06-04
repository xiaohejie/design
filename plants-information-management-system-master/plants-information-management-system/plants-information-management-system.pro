QT       += core gui sql serialport
QT       += core gui  network
QT       += charts
QT       += webenginewidgets

DEFINES += QT_MESSAGELOGCONTEXT

QT+=axcontainer
qtHaveModule(printsupport): QT += printsupport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET      = plants-information-management-system
TEMPLATE    = app
MOC_DIR     = temp/moc
RCC_DIR     = temp/rcc
UI_DIR      = temp/ui
OBJECTS_DIR = temp/obj
DESTDIR     = $$PWD/../bin

SOURCES     += main.cpp \
    browser.cpp \
    browserwindow.cpp \
    displaydata.cpp \
    downloadmanagerwidget.cpp \
    downloadwidget.cpp \
    drilldownchart.cpp \
    drilldownslice.cpp \
    faultdiagnosis.cpp \
    flowerclass.cpp \
    flowergrowth.cpp \
    flowershow.cpp \
    folwernumform.cpp \
    frmlunarcalendarwidget.cpp \
    global.cpp \
    humidity.cpp \
    loginwindow.cpp \
    lunarcalendarinfo.cpp \
    lunarcalendaritem.cpp \
    lunarcalendarwidget.cpp \
    mainwindow.cpp \
    registerwindow.cpp \
    selectwidget.cpp \
    sqldataread.cpp \
    tabwidget.cpp \
    tempature.cpp \
    webpage.cpp \
    webpopupwindow.cpp \
    webview.cpp \
    whetherwindow.cpp \
    widget.cpp
SOURCES     += iconhelper.cpp
SOURCES     += appinit.cpp
SOURCES     += uidemo18.cpp

HEADERS     += iconhelper.h \
    browser.h \
    browserwindow.h \
    displaydata.h \
    downloadmanagerwidget.h \
    downloadwidget.h \
    drilldownchart.h \
    drilldownslice.h \
    faultdiagnosis.h \
    flowergrowth.h \
    flowersclass.h \
    flowershow.h \
    folwernumform.h \
    frmlunarcalendarwidget.h \
    global.h \
    humidity.h \
    loginwindow.h \
    lunarcalendarinfo.h \
    lunarcalendaritem.h \
    lunarcalendarwidget.h \
    mainwindow.h \
    registerwindow.h \
    selectwidget.h \
    sqldataread.h \
    tabwidget.h \
    tempature.h \
    webpage.h \
    webpopupwindow.h \
    webview.h \
    whetherwindow.h \
    widget.h
HEADERS     += appinit.h
HEADERS     += uidemo18.h

FORMS       += uidemo18.ui \
    certificateerrordialog.ui \
    displaydata.ui \
    downloadmanagerwidget.ui \
    downloadwidget.ui \
    faultdiagnosis.ui \
    flowergrowth.ui \
    flowershow.ui \
    folwernumform.ui \
    frmlunarcalendarwidget.ui \
    humidity.ui \
    loginwindow.ui \
    mainwindow.ui \
    passworddialog.ui \
    registerwindow.ui \
    selectwidget.ui \
    sqldataread.ui \
    tempature.ui \
    whetherwindow.ui \
    widget.ui

RESOURCES   += main.qrc \
    data/simplebrowser.qrc
CONFIG      += qt warn_off
INCLUDEPATH += $$PWD
msvc {
    QMAKE_CFLAGS += /utf-8
    QMAKE_CXXFLAGS += /utf-8
}

