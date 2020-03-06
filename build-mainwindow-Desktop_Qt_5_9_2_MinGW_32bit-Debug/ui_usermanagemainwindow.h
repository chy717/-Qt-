/********************************************************************************
** Form generated from reading UI file 'usermanagemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMANAGEMAINWINDOW_H
#define UI_USERMANAGEMAINWINDOW_H

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
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserManageMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *withdraw_pB;
    QPushButton *submit_pB;
    QPushButton *delete_pB;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *IDsearchlineEdit;
    QPushButton *search_pB;
    QPushButton *alllist_pB;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_5;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QTableView *tableView_3;
    QSpacerItem *horizontalSpacer_7;
    QGridLayout *gridLayout_3;
    QPushButton *searchpushButton;
    QPushButton *submitpushButton;
    QLineEdit *userIDlineEdit;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *userpwdlineEdit;
    QPushButton *Fhui_pushButton;
    QPushButton *Tjiao_pushButton;
    QPushButton *Cxiao_pushButton;
    QPushButton *Schu_pushButton;
    QPushButton *Xzeng_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserManageMainWindow)
    {
        if (UserManageMainWindow->objectName().isEmpty())
            UserManageMainWindow->setObjectName(QStringLiteral("UserManageMainWindow"));
        UserManageMainWindow->resize(861, 649);
        UserManageMainWindow->setStyleSheet(QLatin1String("#UserManageMainWindow{\n"
"border-image: url(:/mainbackground.jpg);\n"
"}\n"
"#UserManageMainWindow *{\n"
"border-image: url();\n"
"}"));
        centralwidget = new QWidget(UserManageMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        toolBox->setFont(font);
        toolBox->setStyleSheet(QLatin1String("QWidget{ background: transparent;}\n"
"QToolBox::tab {\n"
"background-color: rgb(25,61,95);\n"
"border-radius: 5px;\n"
"color: darkgray;\n"
"}\n"
"QToolBox::tab:selected {\n"
"color: white;\n"
"}"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 839, 506));
        page->setFont(font);
        gridLayout_5 = new QGridLayout(page);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane { \n"
"border-top: rgba(240,240,240,0%); \n"
"border-left: rgba(240,240,240,0%); \n"
"background-color: rgba(25, 61, 95, 0%); \n"
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
"QTabBar::tab::!selected{background-color:rgb(104,160,177);}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setFont(font);
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
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

        verticalLayout_3->addWidget(tableView);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        withdraw_pB = new QPushButton(tab);
        withdraw_pB->setObjectName(QStringLiteral("withdraw_pB"));
        withdraw_pB->setMinimumSize(QSize(172, 28));
        withdraw_pB->setMaximumSize(QSize(172, 28));
        withdraw_pB->setFont(font);

        horizontalLayout->addWidget(withdraw_pB);

        submit_pB = new QPushButton(tab);
        submit_pB->setObjectName(QStringLiteral("submit_pB"));
        submit_pB->setMinimumSize(QSize(172, 28));
        submit_pB->setMaximumSize(QSize(172, 28));
        submit_pB->setFont(font);

        horizontalLayout->addWidget(submit_pB);

        delete_pB = new QPushButton(tab);
        delete_pB->setObjectName(QStringLiteral("delete_pB"));
        delete_pB->setMinimumSize(QSize(171, 28));
        delete_pB->setMaximumSize(QSize(171, 28));
        delete_pB->setFont(font);

        horizontalLayout->addWidget(delete_pB);


        gridLayout_2->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(76, 31));
        label->setMaximumSize(QSize(76, 31));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        IDsearchlineEdit = new QLineEdit(tab);
        IDsearchlineEdit->setObjectName(QStringLiteral("IDsearchlineEdit"));
        IDsearchlineEdit->setMinimumSize(QSize(246, 21));
        IDsearchlineEdit->setMaximumSize(QSize(246, 21));
        IDsearchlineEdit->setFont(font);

        horizontalLayout_2->addWidget(IDsearchlineEdit);

        search_pB = new QPushButton(tab);
        search_pB->setObjectName(QStringLiteral("search_pB"));
        search_pB->setMinimumSize(QSize(93, 28));
        search_pB->setMaximumSize(QSize(93, 28));
        search_pB->setFont(font);

        horizontalLayout_2->addWidget(search_pB);

        alllist_pB = new QPushButton(tab);
        alllist_pB->setObjectName(QStringLiteral("alllist_pB"));
        alllist_pB->setMinimumSize(QSize(93, 28));
        alllist_pB->setMaximumSize(QSize(93, 28));
        alllist_pB->setFont(font);

        horizontalLayout_2->addWidget(alllist_pB);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        gridLayout_6->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_7 = new QGridLayout(tab_2);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(72, 15));
        label_4->setMaximumSize(QSize(72, 15));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(72, 15));
        label_5->setMaximumSize(QSize(72, 15));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(72, 15));
        label_6->setMaximumSize(QSize(72, 15));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(72, 15));
        label_8->setMaximumSize(QSize(72, 15));
        label_8->setFont(font);

        verticalLayout->addWidget(label_8);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(72, 15));
        label_7->setMaximumSize(QSize(72, 15));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(72, 15));
        label_9->setMaximumSize(QSize(72, 15));
        label_9->setFont(font);

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(72, 15));
        label_10->setMaximumSize(QSize(72, 15));
        label_10->setFont(font);

        verticalLayout->addWidget(label_10);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(279, 21));
        lineEdit->setFont(font);

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(279, 21));
        lineEdit_2->setFont(font);

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(279, 21));
        lineEdit_3->setFont(font);

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(tab_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(279, 21));
        lineEdit_4->setFont(font);

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(tab_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(279, 21));
        lineEdit_5->setFont(font);

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(tab_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setMinimumSize(QSize(279, 21));
        lineEdit_6->setFont(font);

        verticalLayout_2->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(tab_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(279, 21));
        lineEdit_7->setFont(font);

        verticalLayout_2->addWidget(lineEdit_7);


        horizontalLayout_3->addLayout(verticalLayout_2);

        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(81, 28));
        pushButton_2->setFont(font);

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        gridLayout_7->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_5->addWidget(tabWidget, 0, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("\344\274\232\345\221\230\347\256\241\347\220\206"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 839, 506));
        page_2->setFont(font);
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        tableView_3 = new QTableView(page_2);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setMinimumSize(QSize(401, 0));
        tableView_3->setFont(font);
        tableView_3->setStyleSheet(QString::fromUtf8("QTableView QTableCornerButton::section {\n"
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

        horizontalLayout_4->addWidget(tableView_3);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        searchpushButton = new QPushButton(page_2);
        searchpushButton->setObjectName(QStringLiteral("searchpushButton"));
        searchpushButton->setMinimumSize(QSize(93, 28));
        searchpushButton->setMaximumSize(QSize(93, 28));
        searchpushButton->setFont(font);

        gridLayout_3->addWidget(searchpushButton, 0, 2, 1, 1);

        submitpushButton = new QPushButton(page_2);
        submitpushButton->setObjectName(QStringLiteral("submitpushButton"));
        submitpushButton->setMinimumSize(QSize(93, 28));
        submitpushButton->setMaximumSize(QSize(93, 28));
        submitpushButton->setFont(font);

        gridLayout_3->addWidget(submitpushButton, 1, 2, 1, 1);

        userIDlineEdit = new QLineEdit(page_2);
        userIDlineEdit->setObjectName(QStringLiteral("userIDlineEdit"));
        userIDlineEdit->setMinimumSize(QSize(113, 31));
        userIDlineEdit->setMaximumSize(QSize(113, 31));
        userIDlineEdit->setFont(font);

        gridLayout_3->addWidget(userIDlineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(72, 31));
        label_3->setMaximumSize(QSize(72, 31));
        label_3->setFont(font);

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(72, 31));
        label_2->setMaximumSize(QSize(72, 31));
        label_2->setFont(font);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        userpwdlineEdit = new QLineEdit(page_2);
        userpwdlineEdit->setObjectName(QStringLiteral("userpwdlineEdit"));
        userpwdlineEdit->setMinimumSize(QSize(113, 31));
        userpwdlineEdit->setMaximumSize(QSize(113, 31));
        userpwdlineEdit->setFont(font);

        gridLayout_3->addWidget(userpwdlineEdit, 1, 1, 1, 1);

        Fhui_pushButton = new QPushButton(page_2);
        Fhui_pushButton->setObjectName(QStringLiteral("Fhui_pushButton"));
        Fhui_pushButton->setFont(font);

        gridLayout_3->addWidget(Fhui_pushButton, 2, 2, 1, 1);

        Tjiao_pushButton = new QPushButton(page_2);
        Tjiao_pushButton->setObjectName(QStringLiteral("Tjiao_pushButton"));
        Tjiao_pushButton->setFont(font);

        gridLayout_3->addWidget(Tjiao_pushButton, 2, 0, 1, 1);

        Cxiao_pushButton = new QPushButton(page_2);
        Cxiao_pushButton->setObjectName(QStringLiteral("Cxiao_pushButton"));
        Cxiao_pushButton->setFont(font);

        gridLayout_3->addWidget(Cxiao_pushButton, 2, 1, 1, 1);

        Schu_pushButton = new QPushButton(page_2);
        Schu_pushButton->setObjectName(QStringLiteral("Schu_pushButton"));
        Schu_pushButton->setFont(font);

        gridLayout_3->addWidget(Schu_pushButton, 3, 1, 1, 1);

        Xzeng_pushButton = new QPushButton(page_2);
        Xzeng_pushButton->setObjectName(QStringLiteral("Xzeng_pushButton"));
        Xzeng_pushButton->setFont(font);

        gridLayout_3->addWidget(Xzeng_pushButton, 4, 1, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_3);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        toolBox->addItem(page_2, QString::fromUtf8("\347\224\250\346\210\267\347\256\241\347\220\206"));

        gridLayout->addWidget(toolBox, 0, 0, 1, 1);

        UserManageMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserManageMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 861, 26));
        UserManageMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UserManageMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UserManageMainWindow->setStatusBar(statusbar);

        retranslateUi(UserManageMainWindow);

        toolBox->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserManageMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserManageMainWindow)
    {
        UserManageMainWindow->setWindowTitle(QApplication::translate("UserManageMainWindow", "MainWindow", Q_NULLPTR));
        withdraw_pB->setText(QApplication::translate("UserManageMainWindow", "\346\222\244\345\233\236\344\277\256\346\224\271", Q_NULLPTR));
        submit_pB->setText(QApplication::translate("UserManageMainWindow", "\346\217\220\344\272\244\344\277\256\346\224\271", Q_NULLPTR));
        delete_pB->setText(QApplication::translate("UserManageMainWindow", "\345\210\240\351\231\244\346\255\244\350\241\214", Q_NULLPTR));
        label->setText(QApplication::translate("UserManageMainWindow", "\350\276\223\345\205\245ID\345\217\267\357\274\232", Q_NULLPTR));
        search_pB->setText(QApplication::translate("UserManageMainWindow", "\346\237\245\346\211\276", Q_NULLPTR));
        alllist_pB->setText(QApplication::translate("UserManageMainWindow", "\350\277\224\345\233\236\345\205\250\350\241\250", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("UserManageMainWindow", "\346\237\245\350\257\242\344\274\232\345\221\230", Q_NULLPTR));
        label_4->setText(QApplication::translate("UserManageMainWindow", "  \347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("UserManageMainWindow", "  \345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("UserManageMainWindow", "  \346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("UserManageMainWindow", "  \347\224\265\350\257\235\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("UserManageMainWindow", "  \345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("UserManageMainWindow", "  \345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("UserManageMainWindow", "  VIP\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("UserManageMainWindow", "\346\217\220\344\272\244", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("UserManageMainWindow", "\346\226\260\345\273\272\344\274\232\345\221\230", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("UserManageMainWindow", "\344\274\232\345\221\230\347\256\241\347\220\206", Q_NULLPTR));
        searchpushButton->setText(QApplication::translate("UserManageMainWindow", "\346\237\245\346\211\276", Q_NULLPTR));
        submitpushButton->setText(QApplication::translate("UserManageMainWindow", "\344\277\256\346\224\271", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserManageMainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserManageMainWindow", "\350\276\223\345\205\245ID\345\217\267\357\274\232", Q_NULLPTR));
        Fhui_pushButton->setText(QApplication::translate("UserManageMainWindow", "\350\277\224\345\233\236\345\205\250\350\241\250", Q_NULLPTR));
        Tjiao_pushButton->setText(QApplication::translate("UserManageMainWindow", "\346\217\220\344\272\244\344\277\256\346\224\271", Q_NULLPTR));
        Cxiao_pushButton->setText(QApplication::translate("UserManageMainWindow", "\346\222\244\351\224\200\344\277\256\346\224\271", Q_NULLPTR));
        Schu_pushButton->setText(QApplication::translate("UserManageMainWindow", "\345\210\240\351\231\244\346\255\244\350\241\214", Q_NULLPTR));
        Xzeng_pushButton->setText(QApplication::translate("UserManageMainWindow", "\346\226\260\345\242\236\345\221\230\345\267\245", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("UserManageMainWindow", "\347\224\250\346\210\267\347\256\241\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserManageMainWindow: public Ui_UserManageMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMANAGEMAINWINDOW_H
