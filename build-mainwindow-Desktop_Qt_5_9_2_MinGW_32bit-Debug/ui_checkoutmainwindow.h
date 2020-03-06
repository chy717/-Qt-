/********************************************************************************
** Form generated from reading UI file 'checkoutmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUTMAINWINDOW_H
#define UI_CHECKOUTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckOutMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CheckOutMainWindow)
    {
        if (CheckOutMainWindow->objectName().isEmpty())
            CheckOutMainWindow->setObjectName(QStringLiteral("CheckOutMainWindow"));
        CheckOutMainWindow->resize(800, 600);
        centralwidget = new QWidget(CheckOutMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 350, 93, 28));
        CheckOutMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CheckOutMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        CheckOutMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CheckOutMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CheckOutMainWindow->setStatusBar(statusbar);

        retranslateUi(CheckOutMainWindow);

        QMetaObject::connectSlotsByName(CheckOutMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CheckOutMainWindow)
    {
        CheckOutMainWindow->setWindowTitle(QApplication::translate("CheckOutMainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CheckOutMainWindow", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CheckOutMainWindow: public Ui_CheckOutMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUTMAINWINDOW_H
