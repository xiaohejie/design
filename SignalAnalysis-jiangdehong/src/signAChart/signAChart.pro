#-------------------------------------------------
#
# Project created by czy 2016-11-04
# sa chart api lib
#
#-------------------------------------------------

message("------------SA 绘图库 signAChart-------------------")
message(Qt version: $$[QT_VERSION])
message(Qt is installed in $$[QT_INSTALL_PREFIX])
win32-msvc*:QMAKE_CXXFLAGS += /wd"4819" #忽略warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = signAChart
TEMPLATE = lib
CONFIG += dll

include(../sa_common.pri)
DESTDIR = $$SA_LIBDIR

CONFIG += c++11



include($$PWD/../3rdParty/qwt/qwt_set.pri)


DEFINES += SA_CHART_MAKE #定义此变量后将会构建DEFINES += USE_QWT#定义绘图引擎使用qwt
#DEFINES += USE_QT_CHART#定义绘图引擎使用qt chart

HEADERS += \
    SAChartGlobals.h \
    SAPlotCanvas.h \
    SASeries.h \
    QwtPlotItemDataModel.h \
    QwtPlotItemTreeModel.h \
    SAChart3D.h \
    SAMarkSymbol.h \
    SAPlotMarker.h \
    SAXYDataTracker.h \
    SAYDataTracker.h \
    SAChart.h \
    SA2DGraph.h \
    SAPlotZoomer.h \
    SASelectRegionShapeItem.h \
    SAAbstractPlotEditor.h \
    SAAbstractRegionSelectEditor.h \
    SARectRegionSelectEditor.h \
    SAEllipseRegionSelectEditor.h \
    SAPolygonRegionSelectEditor.h \
    SACrossTracker.h \
    SAQwtSerialize.h

SOURCES += \
    QwtPlotItemDataModel.cpp \
    QwtPlotItemTreeModel.cpp \
    SAChart3D.cpp \
    SAMarkSymbol.cpp \
    SAPlotCanvas.cpp \
    SAPlotMarker.cpp \
    SAXYDataTracker.cpp \
    SAYDataTracker.cpp \
    SAChart.cpp \
    SA2DGraph.cpp \
    SAPlotZoomer.cpp \
    SASelectRegionShapeItem.cpp \
    SAAbstractPlotEditor.cpp \
    SAAbstractRegionSelectEditor.cpp \
    SARectRegionSelectEditor.cpp \
    SAEllipseRegionSelectEditor.cpp \
    SAPolygonRegionSelectEditor.cpp \
    SACrossTracker.cpp \
    SAQwtSerialize.cpp

OTHER_FILES += readme.md
