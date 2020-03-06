/********************************************************************************
** Form generated from reading UI file 'basicinformationmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICINFORMATIONMAINWINDOW_H
#define UI_BASICINFORMATIONMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicInformationMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QTabWidget *querybtn_3;
    QWidget *atb;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton_10;
    QSpacerItem *verticalSpacer_8;
    QPushButton *pushButton_4;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_3;
    QPushButton *addbtn;
    QPushButton *querybtn;
    QPushButton *deletebtn;
    QPushButton *returnbtn;
    QPushButton *savebtn;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_num;
    QLineEdit *lineEdit_type;
    QLabel *label_2;
    QLabel *label;
    QWidget *tab;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tableView_commodity;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_6;
    QLineEdit *commodity_no;
    QLineEdit *commodity_type;
    QLineEdit *commodity_name;
    QLabel *label_5;
    QLineEdit *commodity_price;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QGridLayout *gridLayout_7;
    QSpacerItem *verticalSpacer_5;
    QPushButton *deletebtn_2;
    QPushButton *querybtn_2;
    QPushButton *addbtn_2;
    QPushButton *pushButton_2;
    QPushButton *fanhui_pushButton;
    QWidget *tab_2;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_9;
    QLineEdit *floor_edit;
    QPushButton *pushbtn_addfloor;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BasicInformationMainWindow)
    {
        if (BasicInformationMainWindow->objectName().isEmpty())
            BasicInformationMainWindow->setObjectName(QStringLiteral("BasicInformationMainWindow"));
        BasicInformationMainWindow->resize(1046, 670);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        BasicInformationMainWindow->setFont(font);
        BasicInformationMainWindow->setStyleSheet(QLatin1String("#BasicInformationMainWindow{\n"
"border-image: url(:/mainbackground.jpg);\n"
"}\n"
"#BasicInformationMainWindow *{\n"
"border-image: url();\n"
"}"));
        centralwidget = new QWidget(BasicInformationMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setFont(font);
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        querybtn_3 = new QTabWidget(centralwidget);
        querybtn_3->setObjectName(QStringLiteral("querybtn_3"));
        querybtn_3->setEnabled(true);
        querybtn_3->setSizeIncrement(QSize(0, 5));
        querybtn_3->setFont(font);
        querybtn_3->setStyleSheet(QLatin1String("QTabWidget::pane { \n"
"border-top: rgba(240,240,240,0%); \n"
"border-left: rgba(240,240,240,0%); \n"
"background-color: rgba(240, 240, 240, 0%); \n"
"left:5px; \n"
"right:5px; \n"
"bottom:5px; \n"
"} \n"
"QTabBar::tab{\n"
"border-top-left-radius: 12px;\n"
"border-top-right-radius: 12px;\n"
"border-bottom-right-radius: 12px;\n"
"border-bottom-left-radius: 12px; \n"
"min-width:150px;\n"
"min-height:30px;\n"
"color: rgb(255,255,255);	\n"
"margin: 10px, 20px, 10px, 10px;\n"
" }\n"
" \n"
"QTabBar::tab::selected{background-color:rgb(25, 61, 95);}\n"
"QTabBar::tab::!selected{background-color:rgb(104,160,177);}\n"
""));
        querybtn_3->setTabPosition(QTabWidget::North);
        querybtn_3->setTabShape(QTabWidget::Rounded);
        atb = new QWidget();
        atb->setObjectName(QStringLiteral("atb"));
        gridLayout_5 = new QGridLayout(atb);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableView = new QTableView(atb);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMinimumSize(QSize(462, 0));
        tableView->setFont(font);
        tableView->setStyleSheet(QString::fromUtf8("QTableView QTableCornerButton::section {\n"
"   /*  background: red;\n"
"    border: 2px outset red;*/\n"
"    color: red;\n"
"    background-color: rgba(129, 207, 209, 30%);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:1px;\n"
"    border-color: rgba(129, 207, 209, 30%);\n"
" }\n"
"QTableView {\n"
"    color: black;                                       /*\350\241\250\346\240\274\345\206\205\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    gridline-color: black;                              /*\350\241\250\346\240\274\345\206\205\346\241\206\351\242\234\350\211\262*/\n"
"    background-color: rgba(108, 108, 108, 0%);               /*\350\241\250\346\240\274\345\206\205\350\203\214\346\231\257\350\211\262*/\n"
"    alternate-background-color: rgb(64, 64, 64);\n"
"    selection-color: black;                             /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    selection-background-color: rgb(195, 213, 223);       "
                        " /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\350\203\214\346\231\257\350\211\262*/\n"
"    border: 2px groove gray;\n"
"    border-radius: 0px;\n"
"    padding: 2px 4px;\n"
"}\n"
"QHeaderView {\n"
"    color: black;\n"
"    background-color: rgba(195, 213, 223, 0%);/*\350\256\276\347\275\256\350\241\250\345\244\264\347\251\272\347\231\275\345\214\272\345\237\237\350\203\214\346\231\257\350\211\262*/\n"
"    border: 0px solid rgb(144, 144, 144);\n"
"    border:0px solid rgb(191,191,191);\n"
"    border-left-color: rgba(255, 255, 255, 0);\n"
"    border-top-color: rgba(255, 255, 255, 0);\n"
"    border-radius:0px;\n"
"    min-height:29px;\n"
"}\n"
"QHeaderView::section {\n"
"    color: black;\n"
"    background-color: rgba(129, 207, 209, 30%);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:1px;\n"
"    border-color: rgba(129, 207, 209, 30%);\n"
"} "));

        horizontalLayout_2->addWidget(tableView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_10 = new QPushButton(atb);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setMaximumSize(QSize(93, 16777215));
        pushButton_10->setStyleSheet(QStringLiteral("background-color: rgba(240, 240, 240,0%);"));

        gridLayout->addWidget(pushButton_10, 2, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(atb);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(93, 16777215));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgba(240, 240, 240,0%);"));

        gridLayout->addWidget(pushButton_4, 0, 2, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_3, 0, 0, 1, 1);

        addbtn = new QPushButton(atb);
        addbtn->setObjectName(QStringLiteral("addbtn"));
        addbtn->setMinimumSize(QSize(153, 31));
        addbtn->setMaximumSize(QSize(153, 31));
        addbtn->setFont(font);
        addbtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(129, 207, 209); border-radius: 3px; color: rgb(255, 255, 255); }"));

        gridLayout_3->addWidget(addbtn, 5, 0, 1, 1);

        querybtn = new QPushButton(atb);
        querybtn->setObjectName(QStringLiteral("querybtn"));
        querybtn->setEnabled(true);
        querybtn->setMinimumSize(QSize(153, 31));
        querybtn->setMaximumSize(QSize(153, 16777215));
        querybtn->setFont(font);
        querybtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(129, 207, 209); border-radius: 3px; color: rgb(255, 255, 255); }"));

        gridLayout_3->addWidget(querybtn, 3, 0, 1, 1);

        deletebtn = new QPushButton(atb);
        deletebtn->setObjectName(QStringLiteral("deletebtn"));
        deletebtn->setMinimumSize(QSize(153, 31));
        deletebtn->setMaximumSize(QSize(153, 16777215));
        deletebtn->setFont(font);
        deletebtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(129, 207, 209); border-radius: 3px; color: rgb(255, 255, 255); }"));

        gridLayout_3->addWidget(deletebtn, 4, 0, 1, 1);

        returnbtn = new QPushButton(atb);
        returnbtn->setObjectName(QStringLiteral("returnbtn"));
        returnbtn->setMinimumSize(QSize(153, 31));
        returnbtn->setMaximumSize(QSize(153, 16777215));
        returnbtn->setFont(font);
        returnbtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(129, 207, 209); border-radius: 3px; color: rgb(255, 255, 255); }"));

        gridLayout_3->addWidget(returnbtn, 2, 0, 1, 1);

        savebtn = new QPushButton(atb);
        savebtn->setObjectName(QStringLiteral("savebtn"));
        savebtn->setEnabled(true);
        savebtn->setMinimumSize(QSize(153, 31));
        savebtn->setMaximumSize(QSize(153, 16777215));
        savebtn->setFont(font);
        savebtn->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(129, 207, 209); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"\n"
"\n"
""));

        gridLayout_3->addWidget(savebtn, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_4, 6, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEdit_num = new QLineEdit(atb);
        lineEdit_num->setObjectName(QStringLiteral("lineEdit_num"));
        lineEdit_num->setMaximumSize(QSize(250, 16777215));
        lineEdit_num->setFont(font);
        lineEdit_num->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        gridLayout_2->addWidget(lineEdit_num, 0, 1, 1, 1);

        lineEdit_type = new QLineEdit(atb);
        lineEdit_type->setObjectName(QStringLiteral("lineEdit_type"));
        lineEdit_type->setMaximumSize(QSize(250, 16777215));
        lineEdit_type->setFont(font);
        lineEdit_type->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        gridLayout_2->addWidget(lineEdit_type, 1, 1, 1, 1);

        label_2 = new QLabel(atb);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(60, 16777215));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(215, 228,221);"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(atb);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(45, 16777215));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: rgb(215, 228,221);"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        querybtn_3->addTab(atb, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_8 = new QGridLayout(tab);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tableView_commodity = new QTableView(tab);
        tableView_commodity->setObjectName(QStringLiteral("tableView_commodity"));
        tableView_commodity->setMinimumSize(QSize(629, 0));
        tableView_commodity->setFont(font);
        tableView_commodity->setStyleSheet(QString::fromUtf8("QTableView QTableCornerButton::section {\n"
"   /*  background: red;\n"
"    border: 2px outset red;*/\n"
"    color: red;\n"
"    background-color: rgba(129, 207, 209, 30%);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:1px;\n"
"    border-color: rgba(129, 207, 209, 30%);\n"
" }\n"
"QTableView {\n"
"    color: black;                                       /*\350\241\250\346\240\274\345\206\205\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    gridline-color: black;                              /*\350\241\250\346\240\274\345\206\205\346\241\206\351\242\234\350\211\262*/\n"
"    background-color: rgba(108, 108, 108, 0%);               /*\350\241\250\346\240\274\345\206\205\350\203\214\346\231\257\350\211\262*/\n"
"    alternate-background-color: rgb(64, 64, 64);\n"
"    selection-color: black;                             /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    selection-background-color: rgb(195, 213, 223);       "
                        " /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\350\203\214\346\231\257\350\211\262*/\n"
"    border: 2px groove gray;\n"
"    border-radius: 0px;\n"
"    padding: 2px 4px;\n"
"}\n"
"QHeaderView {\n"
"    color: black;\n"
"    background-color: rgba(195, 213, 223, 0%);/*\350\256\276\347\275\256\350\241\250\345\244\264\347\251\272\347\231\275\345\214\272\345\237\237\350\203\214\346\231\257\350\211\262*/\n"
"    border: 0px solid rgb(144, 144, 144);\n"
"    border:0px solid rgb(191,191,191);\n"
"    border-left-color: rgba(255, 255, 255, 0);\n"
"    border-top-color: rgba(255, 255, 255, 0);\n"
"    border-radius:0px;\n"
"    min-height:29px;\n"
"}\n"
"QHeaderView::section {\n"
"    color: black;\n"
"    background-color: rgba(129, 207, 209, 30%);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:1px;\n"
"    border-color: rgba(129, 207, 209, 30%);\n"
"} "));

        horizontalLayout_3->addWidget(tableView_commodity);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        commodity_no = new QLineEdit(tab);
        commodity_no->setObjectName(QStringLiteral("commodity_no"));
        commodity_no->setMaximumSize(QSize(236, 16777215));
        commodity_no->setFont(font);
        commodity_no->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        gridLayout_6->addWidget(commodity_no, 0, 1, 1, 1);

        commodity_type = new QLineEdit(tab);
        commodity_type->setObjectName(QStringLiteral("commodity_type"));
        commodity_type->setMaximumSize(QSize(236, 16777215));
        commodity_type->setFont(font);
        commodity_type->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        gridLayout_6->addWidget(commodity_type, 2, 1, 1, 1);

        commodity_name = new QLineEdit(tab);
        commodity_name->setObjectName(QStringLiteral("commodity_name"));
        commodity_name->setMaximumSize(QSize(236, 16777215));
        commodity_name->setFont(font);
        commodity_name->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        gridLayout_6->addWidget(commodity_name, 1, 1, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(60, 16777215));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(215, 228,221);"));

        gridLayout_6->addWidget(label_5, 2, 0, 1, 1);

        commodity_price = new QLineEdit(tab);
        commodity_price->setObjectName(QStringLiteral("commodity_price"));
        commodity_price->setMaximumSize(QSize(236, 16777215));
        commodity_price->setFont(font);
        commodity_price->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        gridLayout_6->addWidget(commodity_price, 3, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(60, 16777215));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(215, 228,221);"));

        gridLayout_6->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(60, 16777215));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(215, 228,221);"));

        gridLayout_6->addWidget(label_3, 0, 0, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(60, 16777215));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("background-color: rgb(215, 228,221);"));

        gridLayout_6->addWidget(label_6, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_6);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_7->addItem(verticalSpacer_5, 0, 0, 1, 1);

        deletebtn_2 = new QPushButton(tab);
        deletebtn_2->setObjectName(QStringLiteral("deletebtn_2"));
        deletebtn_2->setMaximumSize(QSize(148, 16777215));
        deletebtn_2->setFont(font);
        deletebtn_2->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(25,61,95);  color: rgb(255, 255, 255); }"));

        gridLayout_7->addWidget(deletebtn_2, 2, 1, 1, 1);

        querybtn_2 = new QPushButton(tab);
        querybtn_2->setObjectName(QStringLiteral("querybtn_2"));
        querybtn_2->setMaximumSize(QSize(148, 16777215));
        querybtn_2->setFont(font);
        querybtn_2->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(25,61,95);  color: rgb(255, 255, 255); }\n"
""));

        gridLayout_7->addWidget(querybtn_2, 1, 0, 1, 1);

        addbtn_2 = new QPushButton(tab);
        addbtn_2->setObjectName(QStringLiteral("addbtn_2"));
        addbtn_2->setMaximumSize(QSize(148, 16777215));
        addbtn_2->setFont(font);
        addbtn_2->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(25,61,95);  color: rgb(255, 255, 255); }"));

        gridLayout_7->addWidget(addbtn_2, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(148, 16777215));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(25,61,95);  color: rgb(255, 255, 255); }"));

        gridLayout_7->addWidget(pushButton_2, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_7);

        fanhui_pushButton = new QPushButton(tab);
        fanhui_pushButton->setObjectName(QStringLiteral("fanhui_pushButton"));
        fanhui_pushButton->setFont(font);

        verticalLayout->addWidget(fanhui_pushButton);


        horizontalLayout_3->addLayout(verticalLayout);


        gridLayout_8->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        querybtn_3->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_10 = new QGridLayout(tab_2);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setMinimumSize(QSize(589, 0));
        tableView_2->setFont(font);
        tableView_2->setStyleSheet(QString::fromUtf8("QTableView QTableCornerButton::section {\n"
"   /*  background: red;\n"
"    border: 2px outset red;*/\n"
"    color: red;\n"
"    background-color: rgba(129, 207, 209, 30%);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:1px;\n"
"    border-color: rgba(129, 207, 209, 30%);\n"
" }\n"
"QTableView {\n"
"    color: black;                                       /*\350\241\250\346\240\274\345\206\205\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    gridline-color: black;                              /*\350\241\250\346\240\274\345\206\205\346\241\206\351\242\234\350\211\262*/\n"
"    background-color: rgba(108, 108, 108, 0%);               /*\350\241\250\346\240\274\345\206\205\350\203\214\346\231\257\350\211\262*/\n"
"    alternate-background-color: rgb(64, 64, 64);\n"
"    selection-color: black;                             /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    selection-background-color: rgb(195, 213, 223);       "
                        " /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\350\203\214\346\231\257\350\211\262*/\n"
"    border: 2px groove gray;\n"
"    border-radius: 0px;\n"
"    padding: 2px 4px;\n"
"}\n"
"QHeaderView {\n"
"    color: black;\n"
"    background-color: rgba(195, 213, 223, 0%);/*\350\256\276\347\275\256\350\241\250\345\244\264\347\251\272\347\231\275\345\214\272\345\237\237\350\203\214\346\231\257\350\211\262*/\n"
"    border: 0px solid rgb(144, 144, 144);\n"
"    border:0px solid rgb(191,191,191);\n"
"    border-left-color: rgba(255, 255, 255, 0);\n"
"    border-top-color: rgba(255, 255, 255, 0);\n"
"    border-radius:0px;\n"
"    min-height:29px;\n"
"}\n"
"QHeaderView::section {\n"
"    color: black;\n"
"    background-color: rgba(129, 207, 209, 30%);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:1px;\n"
"    border-color: rgba(129, 207, 209, 30%);\n"
"} "));

        horizontalLayout_4->addWidget(tableView_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        floor_edit = new QLineEdit(tab_2);
        floor_edit->setObjectName(QStringLiteral("floor_edit"));
        floor_edit->setMaximumSize(QSize(121, 16777215));
        floor_edit->setFont(font);
        floor_edit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        gridLayout_9->addWidget(floor_edit, 1, 0, 1, 1);

        pushbtn_addfloor = new QPushButton(tab_2);
        pushbtn_addfloor->setObjectName(QStringLiteral("pushbtn_addfloor"));
        pushbtn_addfloor->setMaximumSize(QSize(121, 16777215));
        pushbtn_addfloor->setFont(font);
        pushbtn_addfloor->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(104, 160, 177);  color: rgb(255, 255, 255); }"));

        gridLayout_9->addWidget(pushbtn_addfloor, 5, 0, 1, 1);

        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(121, 16777215));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(104, 160, 177);  color: rgb(255, 255, 255); }"));

        gridLayout_9->addWidget(pushButton, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(121, 16777215));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(104, 160, 177);  color: rgb(255, 255, 255); }"));

        gridLayout_9->addWidget(pushButton_3, 4, 0, 1, 1);

        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(113, 16777215));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton { \n"
"background-color: rgba(215, 228,221,0%);  \n"
"color: black; }"));

        gridLayout_9->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setFont(font);

        gridLayout_9->addWidget(pushButton_6, 3, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_9);


        gridLayout_10->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        querybtn_3->addTab(tab_2, QString());

        gridLayout_4->addWidget(querybtn_3, 0, 0, 1, 1);

        BasicInformationMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BasicInformationMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1046, 26));
        BasicInformationMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(BasicInformationMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        BasicInformationMainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(querybtn_3, tableView);

        retranslateUi(BasicInformationMainWindow);

        querybtn_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BasicInformationMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BasicInformationMainWindow)
    {
        BasicInformationMainWindow->setWindowTitle(QApplication::translate("BasicInformationMainWindow", "MainWindow", Q_NULLPTR));
        pushButton_10->setText(QString());
        pushButton_4->setText(QString());
        addbtn->setText(QApplication::translate("BasicInformationMainWindow", "\346\267\273\345\212\240", Q_NULLPTR));
        querybtn->setText(QApplication::translate("BasicInformationMainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        deletebtn->setText(QApplication::translate("BasicInformationMainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        returnbtn->setText(QApplication::translate("BasicInformationMainWindow", "\350\277\224\345\233\236\345\205\250\350\241\250", Q_NULLPTR));
        savebtn->setText(QApplication::translate("BasicInformationMainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        label_2->setText(QApplication::translate("BasicInformationMainWindow", "\346\210\277\351\227\264\347\261\273\345\236\213", Q_NULLPTR));
        label->setText(QApplication::translate("BasicInformationMainWindow", "\346\210\277\351\227\264\345\217\267", Q_NULLPTR));
        querybtn_3->setTabText(querybtn_3->indexOf(atb), QApplication::translate("BasicInformationMainWindow", "\345\256\242\346\210\277\347\256\241\347\220\206", Q_NULLPTR));
        label_5->setText(QApplication::translate("BasicInformationMainWindow", "\345\225\206\345\223\201\347\261\273\345\210\253", Q_NULLPTR));
        label_4->setText(QApplication::translate("BasicInformationMainWindow", "\345\225\206\345\223\201\345\220\215\347\247\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("BasicInformationMainWindow", "\345\225\206\345\223\201\344\273\243\347\240\201", Q_NULLPTR));
        label_6->setText(QApplication::translate("BasicInformationMainWindow", "   \344\273\267\346\240\274", Q_NULLPTR));
        deletebtn_2->setText(QApplication::translate("BasicInformationMainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        querybtn_2->setText(QApplication::translate("BasicInformationMainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        addbtn_2->setText(QApplication::translate("BasicInformationMainWindow", "\345\242\236\345\212\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("BasicInformationMainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        fanhui_pushButton->setText(QApplication::translate("BasicInformationMainWindow", "\350\277\224\345\233\236\345\205\250\350\241\250", Q_NULLPTR));
        querybtn_3->setTabText(querybtn_3->indexOf(tab), QApplication::translate("BasicInformationMainWindow", "\345\225\206\345\223\201\347\256\241\347\220\206", Q_NULLPTR));
        pushbtn_addfloor->setText(QApplication::translate("BasicInformationMainWindow", "\345\242\236\345\212\240", Q_NULLPTR));
        pushButton->setText(QApplication::translate("BasicInformationMainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("BasicInformationMainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("BasicInformationMainWindow", "\346\245\274\345\261\202", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("BasicInformationMainWindow", "\350\277\224\345\233\236\345\205\250\350\241\250", Q_NULLPTR));
        querybtn_3->setTabText(querybtn_3->indexOf(tab_2), QApplication::translate("BasicInformationMainWindow", "\346\245\274\345\261\202\347\256\241\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BasicInformationMainWindow: public Ui_BasicInformationMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICINFORMATIONMAINWINDOW_H
