/********************************************************************************
** Form generated from reading UI file 'tenantmanagemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TENANTMANAGEMAINWINDOW_H
#define UI_TENANTMANAGEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TenantManageMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_refresh;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QPushButton *pushButton_26;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_roomno;
    QLineEdit *lineEdit_price;
    QLabel *label_3;
    QLineEdit *lineEdit_roomtype;
    QLabel *label_5;
    QLineEdit *lineEdit_floor;
    QLabel *label_4;
    QLineEdit *lineEdit_state;
    QLabel *label_6;
    QPushButton *pushButton_22;
    QPushButton *pushButton_27;
    QPushButton *pushButton_25;
    QTableView *tableView;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_addroom;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TenantManageMainWindow)
    {
        if (TenantManageMainWindow->objectName().isEmpty())
            TenantManageMainWindow->setObjectName(QStringLiteral("TenantManageMainWindow"));
        TenantManageMainWindow->resize(2061, 1036);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        TenantManageMainWindow->setFont(font);
        TenantManageMainWindow->setStyleSheet(QLatin1String("#TenantManageMainWindow{\n"
"border-image: url(:/mainbackground.jpg);\n"
"}\n"
"#TenantManageMainWindow *{\n"
"border-image: url();\n"
"}"));
        centralwidget = new QWidget(TenantManageMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(2150, 870, 101, 41));
        pushButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(215, 228, 221); border-radius: 3px; color: rgb(2, 0, 0); }"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 101, 51));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color: rgb(215, 228,221);\n"
"color: rgb(2, 0, 0);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 80, 181, 131));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("QPushButton { background-color: rgba(240, 240, 240,0%); border-radius: 3px; color: rgb(240, 240, 240); }"));
        pushButton_refresh = new QPushButton(centralwidget);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        pushButton_refresh->setEnabled(true);
        pushButton_refresh->setGeometry(QRect(1550, 630, 111, 41));
        pushButton_refresh->setFont(font);
        pushButton_refresh->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(215, 228, 221); border-radius: 3px; color: rgb(2, 0, 0); }"));
        pushButton_23 = new QPushButton(centralwidget);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        pushButton_23->setGeometry(QRect(140, 20, 121, 41));
        pushButton_23->setFont(font);
        pushButton_23->setStyleSheet(QStringLiteral("QPushButton { background-color:rgb(195, 213, 223); border-radius: 3px; color: rgb(122, 136, 127) }"));
        pushButton_24 = new QPushButton(centralwidget);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setGeometry(QRect(270, 20, 121, 41));
        pushButton_24->setFont(font);
        pushButton_24->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(104, 160, 177); border-radius: 3px; color: rgb(255, 255, 255); }"));
        pushButton_26 = new QPushButton(centralwidget);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        pushButton_26->setGeometry(QRect(410, 20, 131, 41));
        pushButton_26->setFont(font);
        pushButton_26->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(25, 61, 95); border-radius: 3px; color: rgb(255, 255, 255); }"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(1210, 530, 301, 241));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(16);
        formLayout->setVerticalSpacing(19);
        formLayout->setContentsMargins(13, 13, 39, 12);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("background-color: rgb(215, 228,221);\n"
"color: rgb(2, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_roomno = new QLineEdit(formLayoutWidget);
        lineEdit_roomno->setObjectName(QStringLiteral("lineEdit_roomno"));
        lineEdit_roomno->setFont(font);
        lineEdit_roomno->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_roomno);

        lineEdit_price = new QLineEdit(formLayoutWidget);
        lineEdit_price->setObjectName(QStringLiteral("lineEdit_price"));
        lineEdit_price->setFont(font);
        lineEdit_price->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_price);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("background-color: rgb(215, 228,221);\n"
"color: rgb(2, 0, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_roomtype = new QLineEdit(formLayoutWidget);
        lineEdit_roomtype->setObjectName(QStringLiteral("lineEdit_roomtype"));
        lineEdit_roomtype->setFont(font);
        lineEdit_roomtype->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_roomtype);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("background-color: rgb(215, 228,221);\n"
"color: rgb(2, 0, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEdit_floor = new QLineEdit(formLayoutWidget);
        lineEdit_floor->setObjectName(QStringLiteral("lineEdit_floor"));
        lineEdit_floor->setFont(font);
        lineEdit_floor->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_floor);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("background-color: rgb(215, 228,221);\n"
"color: rgb(2, 0, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        lineEdit_state = new QLineEdit(formLayoutWidget);
        lineEdit_state->setObjectName(QStringLiteral("lineEdit_state"));
        lineEdit_state->setFont(font);
        lineEdit_state->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_state);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("background-color: rgb(215, 228,221);\n"
"color: rgb(2, 0, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        pushButton_22 = new QPushButton(centralwidget);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(1550, 580, 112, 41));
        pushButton_22->setFont(font);
        pushButton_22->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(215, 228, 221); border-radius: 3px; color: rgb(2, 0, 0); }"));
        pushButton_27 = new QPushButton(centralwidget);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setGeometry(QRect(570, 20, 131, 41));
        pushButton_27->setFont(font);
        pushButton_27->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(129, 207, 209); border-radius: 3px; color: rgb(255, 255, 255); }"));
        pushButton_25 = new QPushButton(centralwidget);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        pushButton_25->setGeometry(QRect(1550, 530, 112, 41));
        pushButton_25->setFont(font);
        pushButton_25->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(215, 228, 221); border-radius: 3px; color: rgb(2, 0, 0); }"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(1210, 80, 481, 431));
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
        pushButton_delete = new QPushButton(centralwidget);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(1550, 680, 111, 41));
        pushButton_delete->setFont(font);
        pushButton_delete->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(215, 228, 221); border-radius: 3px; color: rgb(2, 0, 0); }"));
        pushButton_addroom = new QPushButton(centralwidget);
        pushButton_addroom->setObjectName(QStringLiteral("pushButton_addroom"));
        pushButton_addroom->setGeometry(QRect(1550, 730, 111, 41));
        pushButton_addroom->setFont(font);
        pushButton_addroom->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(215, 228, 221); border-radius: 3px; color: rgb(2, 0, 0); }"));
        TenantManageMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TenantManageMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 2061, 26));
        TenantManageMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TenantManageMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TenantManageMainWindow->setStatusBar(statusbar);

        retranslateUi(TenantManageMainWindow);

        QMetaObject::connectSlotsByName(TenantManageMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TenantManageMainWindow)
    {
        TenantManageMainWindow->setWindowTitle(QApplication::translate("TenantManageMainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TenantManageMainWindow", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", Q_NULLPTR));
        label->setText(QApplication::translate("TenantManageMainWindow", "\344\273\212\346\227\245\346\210\277\346\200\201\345\233\276", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("TenantManageMainWindow", "101\345\215\225\344\272\272\351\227\264", Q_NULLPTR));
        pushButton_refresh->setText(QApplication::translate("TenantManageMainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        pushButton_23->setText(QApplication::translate("TenantManageMainWindow", "\347\251\272\346\210\277", Q_NULLPTR));
        pushButton_24->setText(QApplication::translate("TenantManageMainWindow", "\345\267\262\351\242\204\345\256\232", Q_NULLPTR));
        pushButton_26->setText(QApplication::translate("TenantManageMainWindow", "\345\267\262\345\205\245\344\275\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("TenantManageMainWindow", "\345\256\242\346\210\277\347\274\226\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("TenantManageMainWindow", "\346\210\277\351\227\264\347\261\273\345\236\213", Q_NULLPTR));
        label_5->setText(QApplication::translate("TenantManageMainWindow", "  \346\245\274  \345\261\202  ", Q_NULLPTR));
        label_4->setText(QApplication::translate("TenantManageMainWindow", "\345\256\242\346\210\277\347\212\266\346\200\201", Q_NULLPTR));
        lineEdit_state->setText(QString());
        label_6->setText(QApplication::translate("TenantManageMainWindow", " \344\273\267    \346\240\274 ", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("TenantManageMainWindow", "\344\277\235\345\255\230\344\277\256\346\224\271", Q_NULLPTR));
        pushButton_27->setText(QApplication::translate("TenantManageMainWindow", "\350\243\205\344\277\256\346\210\277", Q_NULLPTR));
        pushButton_25->setText(QApplication::translate("TenantManageMainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("TenantManageMainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_addroom->setText(QApplication::translate("TenantManageMainWindow", "\346\267\273\345\212\240", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TenantManageMainWindow: public Ui_TenantManageMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TENANTMANAGEMAINWINDOW_H
