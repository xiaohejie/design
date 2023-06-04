﻿#ifndef MAINWINDOWPRIVATE_H
#define MAINWINDOWPRIVATE_H
#define RIBBON_CONTEXT_CATEGORY_ID_CHART_SET    (10)
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <SADataFeatureWidget.h>
#include <SAMessageWidget.h>
#include <SATabValueViewerWidget.h>
#include "SAFigureSetWidget.h"
#include "SAValueManagerTreeView.h"
#include "SARibbonBar.h"
#include "SARibbonCategory.h"
#include "SARibbonPannel.h"
#include "SARibbonToolButton.h"
#include "SARibbonMenu.h"
#include "SARibbonButtonGroupWidget.h"
#include "SARibbonContextCategory.h"
#include "SARibbonQuickAccessBar.h"
#include "SARibbonGallery.h"
#include "SARibbonApplicationButton.h"
#include "SAChartDatasViewWidget.h"
#include "SAFigureLayoutWidget.h"
#include "SASetWidget.h"
#include "View/jsampleview.h"
#include "View/JSpectrumWindow.h"
#include "View/randdatawithdemo.h"
#include "View/jdynamicwidget.h"
#include "View/productdialog.h"
#include "View/jtimeaxis.h"
class MainWindow;
class MainWindowPrivate
{
public:
    enum RibbonContextCategoryID {
        TableContextCategory = 1 ///< 表格上下文id
    };
    MainWindow *Parent;
//    JSampleView *sampleView;
//    JSpectrumWindow *spectrunView; //废弃
    JDynamicWidget * dynamicSpectrum;
    QLabel *leftButtomText;
    QLabel *rightButtomText;
    QLabel *centerButtomText;
    QPixmap *schoolIcon ;
    QWidget *spacer = new QWidget();
    SARibbonPannel *schoolPannel;
    QAction *actionProduct;
    JTimeAxis *timeAxis;


    QAction *actionNew;      ///<新建项目>
    QAction *actionSet;    ///<设置项目>
    QAction *actionNewProduct;  ///添加产品
    QAction *actionOpen1;     ///<打开项目>
    QAction *actionExport;       ///< 导出通道参数
    QAction *actionImport;       ///< 导入通道参数
    QAction *actionsystemEport;       ///< 导出系统参数
    QAction *actionsystemImport;       ///< 导入系统参数
    QAction *actionStartCapture; ///< 开始采集
    QAction *actionStopCapture; ///< 停止采集
    QAction *actionSuspendCapture; ///< 暂停采集
    QAction *actionBalance; ///< 平衡
    QAction *actionCleanZero; ///< 清楚零点
    QAction *actionXYDataPicker;///<横向>
    QAction *actionYDataPicker;///<纵向>
    QAction *actionXDataPicker;///<层叠>
    QAction *actionhorizontalLarge;///横向放大
    QAction *actionhorizontalSmall;///横向缩小
    QAction *actionverticalLarge;///纵向放大
    QAction *actionverticalSmall;///纵向缩小
    QAction *actionSinglecursor;///单光标
    QAction *actionNocursor;///无光标
    QAction *actionPeakcursor;///峰值光标
    QAction *actionAutomaticscale;///自动刻度
    QAction *actionDefaultscale;///默认刻度
    QAction *actionStartPlayBack;///开始回放
    QAction *actionStopPlayBack;///暂停回放
    QAction *actionKillPlayBack;///停止回放

    QAction *actionAnalsis;

    QAction *actionOpen;
    QAction *actionClearRecentOpenFileHistroy;      ///< 清除最近打开文件记录
    QAction *actionClearRecentOpenProjectorHistroy; ///< 清除最近打开项目记录
    QAction *actionWindowCascade;
    QAction *actionWindowTile;
    QAction *actionWindowMode;
    QAction *actionTabMode;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionDataFeatureDock;
    QAction *actionOpenData;        ///打开数据文件
    QAction *actionConnectRedis;        ///打开redis对话框
    QAction *actionConnectHardWare;     ///连接硬件对话框
    QAction *actionNewTrend;
    QAction *actionClearProject;
    QAction *actionInRangDataRemove;
    QAction *actionOutRangDataRemove;
    QAction *actionSubWindowListDock;
    QAction *actionEnableChartCrossCursor;
    QAction *actionEnableChartPanner;
    QAction *actionEnableChartZoom;
//    QAction *actionYDataPicker;
    QAction *actionShowGrid;
    QAction *actionShowHGrid;
    QAction *actionShowVGrid;
    QAction *actionShowCrowdedHGrid;
    QAction *actionShowCrowdedVGrid;
    QAction *actionShowLegend;
    QAction *actionShowLegendPanel;
    QAction *actionChartZoomReset;
    QAction *actionPickCurveToData;
    QAction *actionAbout;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionValueManagerDock;
    QAction *actionMessageInfoDock;
    QAction *actionFigureSetDock;
    QAction *actionViewValueInCurrentTab;
    QAction *actionViewValueInNewTab;
    QAction *actionViewValueAppendInCurrentTab;
    QAction *actionLayerOutDock;
    QAction *actionRenameValue;
    QAction *actionSetDefalutDockPos;
    QAction *actionValueViewerDock;
    QAction *actionFigureViewer;
//    QAction *actionXYDataPicker;
    QAction *actionDeleteValue;
    QAction *actionOpenProject;
    QAction *actionSaveAs;
    QAction *actionProjectSetting;
    QAction *actionZoomInBestView;
    QAction *actionSetZoomBase;
    QAction *actionZoomIn;
    QAction *actionZoomOut;


    QActionGroup *actionGroupSelection; ///< Selection group ,管理actionStartRectSelect，actionStartEllipseSelect，actionStartPolygonSelect
    QAction *actionStartRectSelect;
    QAction *actionStartEllipseSelect;
    QAction *actionStartPolygonSelect;

    QAction *actionClearAllSelectiedRegion;

    QActionGroup *actionGroupchartRegionSelectionMode;///< Selection Mode group
    QAction *actionSingleSelection;
    QAction *actionAdditionalSelection;
    QAction *actionIntersectionSelection;
    QAction *actionSubtractionSelection;

    QAction *actionDrawScatterChart;
    QAction *actionDrawHistogramChart;
    QAction *actionDrawBarChart;
    QAction *actionDrawBoxChart;
    QAction *actionDrawIntervalChart;

    QActionGroup *actionGroupChartEditor;   ///< 图像编辑器的互斥,管理actionSelectionRegionMove，actionSelectionRegionDataMove
    QAction *actionSelectionRegionMove;     ///< 基于组群actionSelectionRegionMove
    QAction *actionSelectionRegionDataMove; ///< 基于组群actionSelectionRegionMove


    QAction *actionValueCreateDoubleVector; ///< 创建一个维double数据
    QAction *actionValueCreatePointVector;  ///< 创建一个维point数据
    QAction *actionValueCreateVariantTable; ///< 创建一个通用表格


    QAction *actionFigureEditSubPlotGeometry;///< 编辑子窗口位置


    QActionGroup *actionGroupSkins; ///< 管理皮肤的actiongroup



    QAction *actionColorMapTable;           ///< 对表格进行高亮色阶显示

    QActionGroup *actionGroupRibbonStyle;   ///< 管理ribbon的风格action的group
    QAction *actionRibbonStyleOffice3Line;  ///< ribbon的风格 - office 3行
    QAction *actionRibbonStyleWps3Line;     ///< ribbon的风格 - wps 3行
    QAction *actionRibbonStyleOffice2Line;  ///< ribbon的风格 - office 2行
    QAction *actionRibbonStyleWps2Line;     ///< ribbon的风格 - wps 2行



    SARibbonBar *menuBar;
    SARibbonToolButton *ribbonButtonStartSelection;///< 所有
    SARibbonButtonGroupWidget *ribbonRightTopBar;
    SARibbonApplicationButton *ribbonApplicationButton;
    //!Main Category Page

    SARibbonCategory *mainRibbonCategory;
    SARibbonPannel *mainCategoryFilePannel;
    SARibbonPannel *mainCategoryChartPannel;

    QMenu *menuFile;
    QMenu *menuRecentOpenFile;
    QMenu *menuRecentOpenProject;
    QMenu *menuLineChart;
    QMenu *menuBarChart;
    QMenu *menuHistogramChart;
    QMenu *menuBoxChart;
    QMenu *menuScatterChart;
    QMenu *menuSkinList;
    QMenu *menuSelection;
    QMenu *menuDataRemove;
    QMenu *menuShowCrowdedGrid;
    QMenu *menuWindowsViewSet;
    QMenu *menuRibbonStyle;///< 选择ribbon的样式

    SARibbonPannel *mainCategoryValuePannel;
    //! operate Category Page
    SARibbonCategory *operateRibbonCategory;
    SARibbonPannel *operateCategoryChartEditorPannel;
    SARibbonButtonGroupWidget *ribbonButtonGroupSelectionMode;


    SARibbonPannel *operateCategoryDataViewPannel;
    SARibbonMenu *menuZoomSet;

    //legend pannel
    SARibbonPannel *chartLegendCategoryWindowPannel;
    //
    SARibbonPannel *chartGridCategoryWindowPannel;


    //Figure Operate Category Page
    SARibbonPannel *figureOptRibbonPannel;
    //! Analysis
    SARibbonCategory *analysisRibbonCategory;
    SARibbonPannel *analysisCategoryFunctionPannel;
    SARibbonGallery *ribbonGalleryFuntions;
    //!View Category Page
    SARibbonCategory *viewRibbonCategory;
    SARibbonPannel *viewCategoryWindowPannel;
    SARibbonPannel *windowModeCategoryWindowPannel;

    //Table Operate Context Category Page 表格上下文设置页
    SARibbonContextCategory *tableRibbonContextCategory;    ///< 表格上下文标签
    SARibbonCategory *tableRibbonCategory;                  ///< 表格上下文标签
    SARibbonPannel *tableHighLightRibbonPannel;             ///< 高亮面板
    //===========================================================


    //

    SARibbonMenu *menuExport;
    SARibbonMenu *menuImport;

    SARibbonMenu *menuAnalysis;
    SARibbonMenu *menuDataManager;
    SARibbonMenu *menuChartSet;
    SARibbonMenu *menuGrid;

    SARibbonMenu *menuRegionSelect;
    SARibbonMenu *menuHelp;
    SARibbonMenu *menuEdit;
    SARibbonMenu *menuTool;

    QStatusBar *statusBar;

    QDockWidget *dockWidget_DataFeature;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    SADataFeatureWidget *dataFeatureWidget;

    QDockWidget *dockWidget_windowList;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_6;
    QListView *listView_window;

    QDockWidget *dockWidget_valueManage;
    QWidget *dockWidgetContents_3;

    QVBoxLayout *verticalLayout_3;
    SAValueManagerTreeView *treeView_valueManager;


    //dock chartDataViewer
    QDockWidget *dockWidget_chartDataViewer;
    SAChartDatasViewWidget *chartDatasViewWidget;
    //dock plotLayer
    QDockWidget *dockWidget_plotLayer;
    SAFigureLayoutWidget *figureLayoutWidget;



    QDockWidget *dockWidget_main;
    QWidget *dockWidgetContents_7;
    QVBoxLayout *verticalLayout_4;
    QMdiArea *mdiArea;

    QDockWidget *dockWidget_valueViewer;
    QWidget *dockWidgetContents_6;
    QVBoxLayout *verticalLayout_8;
    SATabValueViewerWidget *tabWidget_valueViewer;

    QDockWidget *dockWidget_message;
    QWidget *dockWidgetContents_8;
    QVBoxLayout *verticalLayout_9;
    SAMessageWidget *saMessageWidget;

    QDockWidget *dockWidget_set;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    SASetWidget *setWidget;
    //QToolBar *toolBarChartTools;
    QMenu *menuFigureWindow;                        ///< 绘图窗口菜单
    QAction *selectCurrentCursorToActiveChart;      ///< 选中当前光标所定位的图为激活图形
    QAction *sectionActionForFigureMenuDataView;    ///< FigureWindow菜单的分区action【data view】
    MainWindowPrivate(MainWindow *p);
    void init();
    void retranslateUi(MainWindow *mainWinowPtr);

private:
    void setupUi(MainWindow *mainWinowPtr);
};

#endif // MAINWINDOWPRIVATE_H
