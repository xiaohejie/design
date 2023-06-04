#-------------------------------------------------
# 
# 文本文件导入插件
# 此插件必须加载SAPluginInterface.h，所有插件的类都需要重载SAPluginInterface.h里定义的接口
# 此插件有两种，一种是静态插,一种是动态插,静态插件需在pro加上CONFIG += plugin，静态插件会放置在sa的plugin的dataImport文件夹下的static目录
# 动态插件不需要加上CONFIG += plugin，只需编译出dll即可，放置在sa的plugin的dataImport文件夹下
# 对于动态plugin,需要有导出函数,dataImport对应SADataImportFactory.h,全局就此一个导出函??用户需要给其添加实??#
#-------------------------------------------------

message("------------插件--DsfFileImport(自定义文件导入示例)-------------------")
message(Qt version: $$[QT_VERSION])
message(Qt is installed in $$[QT_INSTALL_PREFIX])
win32-msvc*:QMAKE_CXXFLAGS += /wd"4819" #忽略warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TEMPLATE      = lib
CONFIG       += C++11

include($$PWD/../../signALib/signALib.pri)
#sa signACommonUI support
include($$PWD/../../signACommonUI/signACommonUIWith3thLib.pri)


DEFINES += SA_COMMON_PLUGIN_LIB_MAKE#创建插件必须添加此宏

include(../../sa_common.pri)
DESTDIR = $$SA_PLUGIN_LIBDIR

TARGET = DsfFileImport


HEADERS += \
    DsfFileImport.h\ 
    DsfFileImportFactory.h


SOURCES += \
    DsfFileImport.cpp 




