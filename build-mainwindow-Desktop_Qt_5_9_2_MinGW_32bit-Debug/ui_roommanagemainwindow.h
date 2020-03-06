/********************************************************************************
** Form generated from reading UI file 'roommanagemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMMANAGEMAINWINDOW_H
#define UI_ROOMMANAGEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomManageMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QSpacerItem *verticalSpacer;
    QTableView *ordertableView;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *queryEmptyRoomButton;
    QPushButton *orderRoomButton;
    QPushButton *cancelupdateButton;
    QPushButton *liveinButton;
    QLineEdit *searchOrderEdit;
    QPushButton *searchOrderButton;
    QPushButton *beginupdateButton;
    QPushButton *cancelchangeButton;
    QPushButton *checkupdateButton;
    QPushButton *deletcheckinButton;
    QPushButton *orderToliveButton;
    QPushButton *checkoutButton;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *RoomManageMainWindow)
    {
        if (RoomManageMainWindow->objectName().isEmpty())
            RoomManageMainWindow->setObjectName(QStringLiteral("RoomManageMainWindow"));
        RoomManageMainWindow->resize(1042, 694);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        RoomManageMainWindow->setFont(font);
        RoomManageMainWindow->setStyleSheet(QLatin1String("#RoomManageMainWindow{\n"
"border-image: url(:/mainbackground.jpg);\n"
"}\n"
"#RoomManageMainWindow *{\n"
"border-image: url();\n"
"}"));
        centralwidget = new QWidget(RoomManageMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setFont(font);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(41, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMinimumSize(QSize(629, 271));
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
"	font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
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

        verticalLayout_2->addWidget(tableView);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer);

        ordertableView = new QTableView(centralwidget);
        ordertableView->setObjectName(QStringLiteral("ordertableView"));
        ordertableView->setMinimumSize(QSize(629, 251));
        ordertableView->setFont(font);
        ordertableView->setStyleSheet(QString::fromUtf8("QTableView QTableCornerButton::section {\n"
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
"	font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
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

        verticalLayout_2->addWidget(ordertableView);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        queryEmptyRoomButton = new QPushButton(centralwidget);
        queryEmptyRoomButton->setObjectName(QStringLiteral("queryEmptyRoomButton"));
        queryEmptyRoomButton->setMinimumSize(QSize(229, 29));
        queryEmptyRoomButton->setMaximumSize(QSize(229, 29));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        queryEmptyRoomButton->setFont(font1);
        queryEmptyRoomButton->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(104, 160, 177); \n"
"color: rgb(255, 255, 255); }"));

        verticalLayout->addWidget(queryEmptyRoomButton);

        orderRoomButton = new QPushButton(centralwidget);
        orderRoomButton->setObjectName(QStringLiteral("orderRoomButton"));
        orderRoomButton->setMinimumSize(QSize(229, 28));
        orderRoomButton->setMaximumSize(QSize(229, 28));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        orderRoomButton->setFont(font2);
        orderRoomButton->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(104, 160, 177); \n"
"color: rgb(255, 255, 255); }"));

        verticalLayout->addWidget(orderRoomButton);

        cancelupdateButton = new QPushButton(centralwidget);
        cancelupdateButton->setObjectName(QStringLiteral("cancelupdateButton"));
        cancelupdateButton->setEnabled(false);
        cancelupdateButton->setMinimumSize(QSize(229, 28));
        cancelupdateButton->setMaximumSize(QSize(229, 28));
        cancelupdateButton->setFont(font2);
        cancelupdateButton->setStyleSheet(QLatin1String("QPushButton { background-color:rgb(195, 213, 223); color: rgb(122, 136, 127);}\n"
""));

        verticalLayout->addWidget(cancelupdateButton);

        liveinButton = new QPushButton(centralwidget);
        liveinButton->setObjectName(QStringLiteral("liveinButton"));
        liveinButton->setEnabled(false);
        liveinButton->setMinimumSize(QSize(229, 28));
        liveinButton->setMaximumSize(QSize(229, 28));
        liveinButton->setFont(font2);
        liveinButton->setStyleSheet(QStringLiteral("QPushButton { background-color:rgb(195, 213, 223); color: rgb(122, 136, 127);}"));

        verticalLayout->addWidget(liveinButton);

        searchOrderEdit = new QLineEdit(centralwidget);
        searchOrderEdit->setObjectName(QStringLiteral("searchOrderEdit"));
        searchOrderEdit->setMinimumSize(QSize(229, 25));
        searchOrderEdit->setMaximumSize(QSize(229, 25));
        searchOrderEdit->setFont(font2);
        searchOrderEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        verticalLayout->addWidget(searchOrderEdit);

        searchOrderButton = new QPushButton(centralwidget);
        searchOrderButton->setObjectName(QStringLiteral("searchOrderButton"));
        searchOrderButton->setMinimumSize(QSize(229, 28));
        searchOrderButton->setMaximumSize(QSize(229, 28));
        searchOrderButton->setFont(font2);
        searchOrderButton->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(104, 160, 177); \n"
"color: rgb(255, 255, 255); }"));

        verticalLayout->addWidget(searchOrderButton);

        beginupdateButton = new QPushButton(centralwidget);
        beginupdateButton->setObjectName(QStringLiteral("beginupdateButton"));
        beginupdateButton->setEnabled(false);
        beginupdateButton->setMinimumSize(QSize(229, 28));
        beginupdateButton->setMaximumSize(QSize(229, 28));
        beginupdateButton->setFont(font2);
        beginupdateButton->setStyleSheet(QStringLiteral("QPushButton { background-color:rgb(195, 213, 223); color: rgb(122, 136, 127);}"));

        verticalLayout->addWidget(beginupdateButton);

        cancelchangeButton = new QPushButton(centralwidget);
        cancelchangeButton->setObjectName(QStringLiteral("cancelchangeButton"));
        cancelchangeButton->setEnabled(false);
        cancelchangeButton->setMinimumSize(QSize(229, 28));
        cancelchangeButton->setMaximumSize(QSize(229, 28));
        cancelchangeButton->setFont(font2);
        cancelchangeButton->setStyleSheet(QStringLiteral("QPushButton { background-color:rgb(195, 213, 223); color: rgb(122, 136, 127);}"));

        verticalLayout->addWidget(cancelchangeButton);

        checkupdateButton = new QPushButton(centralwidget);
        checkupdateButton->setObjectName(QStringLiteral("checkupdateButton"));
        checkupdateButton->setEnabled(false);
        checkupdateButton->setMinimumSize(QSize(229, 28));
        checkupdateButton->setMaximumSize(QSize(229, 28));
        checkupdateButton->setFont(font2);
        checkupdateButton->setStyleSheet(QStringLiteral("QPushButton { background-color:rgb(195, 213, 223); color: rgb(122, 136, 127);}"));

        verticalLayout->addWidget(checkupdateButton);

        deletcheckinButton = new QPushButton(centralwidget);
        deletcheckinButton->setObjectName(QStringLiteral("deletcheckinButton"));
        deletcheckinButton->setEnabled(false);
        deletcheckinButton->setMinimumSize(QSize(229, 28));
        deletcheckinButton->setMaximumSize(QSize(229, 28));
        deletcheckinButton->setFont(font2);
        deletcheckinButton->setStyleSheet(QStringLiteral("QPushButton { background-color:rgb(195, 213, 223); color: rgb(122, 136, 127);}"));

        verticalLayout->addWidget(deletcheckinButton);

        orderToliveButton = new QPushButton(centralwidget);
        orderToliveButton->setObjectName(QStringLiteral("orderToliveButton"));
        orderToliveButton->setEnabled(false);
        orderToliveButton->setMinimumSize(QSize(229, 28));
        orderToliveButton->setMaximumSize(QSize(229, 28));
        orderToliveButton->setFont(font2);
        orderToliveButton->setStyleSheet(QStringLiteral("QPushButton { background-color:rgb(195, 213, 223); color: rgb(122, 136, 127);}"));

        verticalLayout->addWidget(orderToliveButton);

        checkoutButton = new QPushButton(centralwidget);
        checkoutButton->setObjectName(QStringLiteral("checkoutButton"));
        checkoutButton->setMinimumSize(QSize(229, 28));
        checkoutButton->setMaximumSize(QSize(229, 28));
        checkoutButton->setFont(font2);
        checkoutButton->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(104, 160, 177); \n"
"color: rgb(255, 255, 255); }"));

        verticalLayout->addWidget(checkoutButton);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(229, 28));
        pushButton->setMaximumSize(QSize(229, 28));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(104, 160, 177); \n"
"color: rgb(255, 255, 255); }"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(41, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        RoomManageMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RoomManageMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1042, 26));
        RoomManageMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RoomManageMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RoomManageMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(RoomManageMainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        RoomManageMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(RoomManageMainWindow);

        QMetaObject::connectSlotsByName(RoomManageMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RoomManageMainWindow)
    {
        RoomManageMainWindow->setWindowTitle(QApplication::translate("RoomManageMainWindow", "MainWindow", Q_NULLPTR));
        queryEmptyRoomButton->setText(QApplication::translate("RoomManageMainWindow", "\346\237\245\350\257\242\347\251\272\346\210\277", Q_NULLPTR));
        orderRoomButton->setText(QApplication::translate("RoomManageMainWindow", "\346\267\273\345\212\240\351\242\204\345\256\232\344\277\241\346\201\257", Q_NULLPTR));
        cancelupdateButton->setText(QApplication::translate("RoomManageMainWindow", "\345\217\226\346\266\210\347\231\273\350\256\260\347\232\204\344\277\241\346\201\257", Q_NULLPTR));
        liveinButton->setText(QApplication::translate("RoomManageMainWindow", "\347\241\256\350\256\244\347\231\273\350\256\260\344\277\241\346\201\257", Q_NULLPTR));
        searchOrderButton->setText(QApplication::translate("RoomManageMainWindow", "\346\220\234\347\264\242\350\257\245\345\256\242\346\210\267\346\210\277\351\227\264", Q_NULLPTR));
        beginupdateButton->setText(QApplication::translate("RoomManageMainWindow", "\346\233\264\346\224\271\344\277\241\346\201\257", Q_NULLPTR));
        cancelchangeButton->setText(QApplication::translate("RoomManageMainWindow", "\345\217\226\346\266\210\346\233\264\346\224\271\347\232\204\344\277\241\346\201\257", Q_NULLPTR));
        checkupdateButton->setText(QApplication::translate("RoomManageMainWindow", "\347\241\256\350\256\244\346\233\264\346\224\271\344\277\241\346\201\257", Q_NULLPTR));
        deletcheckinButton->setText(QApplication::translate("RoomManageMainWindow", "\345\210\240\351\231\244\350\257\245\351\242\204\345\256\232\344\277\241\346\201\257", Q_NULLPTR));
        orderToliveButton->setText(QApplication::translate("RoomManageMainWindow", "\347\241\256\350\256\244\350\275\254\345\205\245\344\275\217", Q_NULLPTR));
        checkoutButton->setText(QApplication::translate("RoomManageMainWindow", "\351\200\200\346\210\277", Q_NULLPTR));
        pushButton->setText(QApplication::translate("RoomManageMainWindow", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("RoomManageMainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RoomManageMainWindow: public Ui_RoomManageMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMMANAGEMAINWINDOW_H
