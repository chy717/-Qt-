/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *basicInformation_pB;
    QSpacerItem *verticalSpacer;
    QPushButton *userManage_pB;
    QSpacerItem *verticalSpacer_2;
    QPushButton *roomManage_pB;
    QSpacerItem *verticalSpacer_3;
    QPushButton *tenantManage_pB;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(918, 746);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{\n"
"border-image: url(:/\346\234\252\346\240\207\351\242\230-2.jpg);\n"
"}\n"
"#MainWindow *{\n"
"border-image: url();\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        basicInformation_pB = new QPushButton(centralWidget);
        basicInformation_pB->setObjectName(QStringLiteral("basicInformation_pB"));
        basicInformation_pB->setMinimumSize(QSize(139, 110));
        basicInformation_pB->setMaximumSize(QSize(189, 110));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        basicInformation_pB->setFont(font);
        basicInformation_pB->setStyleSheet(QStringLiteral("QPushButton { background-color: rgba(129, 207, 209, 50%);  color: rgb(255, 255, 255); }"));

        verticalLayout->addWidget(basicInformation_pB);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        userManage_pB = new QPushButton(centralWidget);
        userManage_pB->setObjectName(QStringLiteral("userManage_pB"));
        userManage_pB->setMinimumSize(QSize(139, 110));
        userManage_pB->setMaximumSize(QSize(189, 110));
        userManage_pB->setFont(font);
        userManage_pB->setStyleSheet(QStringLiteral("QPushButton { background-color: rgba(129, 207, 209, 50%);  color: rgb(255, 255, 255); }"));

        verticalLayout->addWidget(userManage_pB);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        roomManage_pB = new QPushButton(centralWidget);
        roomManage_pB->setObjectName(QStringLiteral("roomManage_pB"));
        roomManage_pB->setMinimumSize(QSize(139, 110));
        roomManage_pB->setMaximumSize(QSize(189, 110));
        roomManage_pB->setFont(font);
        roomManage_pB->setStyleSheet(QStringLiteral("QPushButton { background-color: rgba(129, 207, 209, 50%);  color: rgb(255, 255, 255); }"));

        verticalLayout->addWidget(roomManage_pB);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        tenantManage_pB = new QPushButton(centralWidget);
        tenantManage_pB->setObjectName(QStringLiteral("tenantManage_pB"));
        tenantManage_pB->setMinimumSize(QSize(139, 110));
        tenantManage_pB->setMaximumSize(QSize(189, 110));
        tenantManage_pB->setFont(font);
        tenantManage_pB->setStyleSheet(QStringLiteral("QPushButton { background-color: rgba(129, 207, 209, 50%);  color: rgb(255, 255, 255); }"));

        verticalLayout->addWidget(tenantManage_pB);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(145, 110));
        pushButton->setMaximumSize(QSize(189, 110));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(554, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 918, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        basicInformation_pB->setText(QApplication::translate("MainWindow", "\345\237\272\347\241\200\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        userManage_pB->setText(QApplication::translate("MainWindow", "\344\274\232\345\221\230\347\224\250\346\210\267\347\256\241\347\220\206", Q_NULLPTR));
        roomManage_pB->setText(QApplication::translate("MainWindow", "\345\256\242\346\210\277\347\256\241\347\220\206", Q_NULLPTR));
        tenantManage_pB->setText(QApplication::translate("MainWindow", "\346\210\277\345\256\242\347\256\241\347\220\206", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\346\266\210\350\264\271\347\256\241\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
