/********************************************************************************
** Form generated from reading UI file 'consumptionmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSUMPTIONMAINWINDOW_H
#define UI_CONSUMPTIONMAINWINDOW_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsumptionMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_roomno;
    QLabel *label;
    QPushButton *savebtn;
    QSpacerItem *verticalSpacer;
    QPushButton *querybtn;
    QPushButton *returnbtn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ConsumptionMainWindow)
    {
        if (ConsumptionMainWindow->objectName().isEmpty())
            ConsumptionMainWindow->setObjectName(QStringLiteral("ConsumptionMainWindow"));
        ConsumptionMainWindow->resize(1036, 758);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ConsumptionMainWindow->setFont(font);
        ConsumptionMainWindow->setStyleSheet(QLatin1String("#ConsumptionMainWindow{\n"
"border-image: url(:/mainbackground.jpg);\n"
"}\n"
"#ConsumptionMainWindow *{\n"
"border-image: url();\n"
"}"));
        centralwidget = new QWidget(ConsumptionMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setFont(font);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMinimumSize(QSize(491, 571));
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

        horizontalLayout->addWidget(tableView);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit_roomno = new QLineEdit(centralwidget);
        lineEdit_roomno->setObjectName(QStringLiteral("lineEdit_roomno"));
        lineEdit_roomno->setMinimumSize(QSize(137, 21));
        lineEdit_roomno->setMaximumSize(QSize(137, 21));
        lineEdit_roomno->setFont(font);
        lineEdit_roomno->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        gridLayout->addWidget(lineEdit_roomno, 0, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(45, 21));
        label->setMaximumSize(QSize(45, 21));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        savebtn = new QPushButton(centralwidget);
        savebtn->setObjectName(QStringLiteral("savebtn"));
        savebtn->setMinimumSize(QSize(137, 28));
        savebtn->setMaximumSize(QSize(137, 28));
        savebtn->setFont(font);
        savebtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgba(129, 207, 209, 50%);  color: rgb(255, 255, 255);}"));

        gridLayout->addWidget(savebtn, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        querybtn = new QPushButton(centralwidget);
        querybtn->setObjectName(QStringLiteral("querybtn"));
        querybtn->setMinimumSize(QSize(137, 28));
        querybtn->setMaximumSize(QSize(137, 28));
        querybtn->setFont(font);

        gridLayout->addWidget(querybtn, 2, 1, 1, 1);

        returnbtn = new QPushButton(centralwidget);
        returnbtn->setObjectName(QStringLiteral("returnbtn"));
        returnbtn->setMinimumSize(QSize(137, 28));
        returnbtn->setMaximumSize(QSize(137, 28));
        returnbtn->setFont(font);

        gridLayout->addWidget(returnbtn, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(horizontalLayout, 1, 1, 2, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 2, 3, 1, 1);

        ConsumptionMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ConsumptionMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1036, 26));
        ConsumptionMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ConsumptionMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ConsumptionMainWindow->setStatusBar(statusbar);

        retranslateUi(ConsumptionMainWindow);

        QMetaObject::connectSlotsByName(ConsumptionMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ConsumptionMainWindow)
    {
        ConsumptionMainWindow->setWindowTitle(QApplication::translate("ConsumptionMainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("ConsumptionMainWindow", "\346\210\277\351\227\264\345\217\267", Q_NULLPTR));
        savebtn->setText(QApplication::translate("ConsumptionMainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        querybtn->setText(QApplication::translate("ConsumptionMainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        returnbtn->setText(QApplication::translate("ConsumptionMainWindow", "\350\277\224\345\233\236\345\205\250\350\241\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConsumptionMainWindow: public Ui_ConsumptionMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSUMPTIONMAINWINDOW_H
