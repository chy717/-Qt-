/********************************************************************************
** Form generated from reading UI file 'usermodifymainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMODIFYMAINWINDOW_H
#define UI_USERMODIFYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserModifyMainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *idlineEdit;
    QLineEdit *pwdlineEdit;
    QLineEdit *tpwdlineEdit;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserModifyMainWindow)
    {
        if (UserModifyMainWindow->objectName().isEmpty())
            UserModifyMainWindow->setObjectName(QStringLiteral("UserModifyMainWindow"));
        UserModifyMainWindow->resize(540, 369);
        UserModifyMainWindow->setStyleSheet(QLatin1String("#UserModifyMainWindow{\n"
"border-image: url(:/mainbackground.jpg);\n"
"}\n"
"#UserModifyMainWindow *{\n"
"border-image: url();\n"
"}"));
        centralwidget = new QWidget(UserModifyMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 30, 101, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(170, 50, 201, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        idlineEdit = new QLineEdit(verticalLayoutWidget);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));
        idlineEdit->setFont(font);
        idlineEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        verticalLayout->addWidget(idlineEdit);

        pwdlineEdit = new QLineEdit(verticalLayoutWidget);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setFont(font);
        pwdlineEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        verticalLayout->addWidget(pwdlineEdit);

        tpwdlineEdit = new QLineEdit(verticalLayoutWidget);
        tpwdlineEdit->setObjectName(QStringLiteral("tpwdlineEdit"));
        tpwdlineEdit->setFont(font);
        tpwdlineEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));

        verticalLayout->addWidget(tpwdlineEdit);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 230, 101, 28));
        pushButton->setMaximumSize(QSize(111, 16777215));
        pushButton->setFont(font);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(80, 50, 101, 161));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(72, 15));
        label_2->setMaximumSize(QSize(72, 15));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(72, 15));
        label_3->setMaximumSize(QSize(72, 15));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(72, 15));
        label_4->setMaximumSize(QSize(72, 15));
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        UserModifyMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserModifyMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 540, 26));
        UserModifyMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UserModifyMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UserModifyMainWindow->setStatusBar(statusbar);

        retranslateUi(UserModifyMainWindow);

        QMetaObject::connectSlotsByName(UserModifyMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserModifyMainWindow)
    {
        UserModifyMainWindow->setWindowTitle(QApplication::translate("UserModifyMainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("UserModifyMainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257\344\277\256\346\224\271", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UserModifyMainWindow", "\346\217\220\344\272\244\344\277\256\346\224\271", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserModifyMainWindow", "    ID  \357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserModifyMainWindow", "\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("UserModifyMainWindow", "\345\206\215\346\254\241\350\276\223\345\205\245\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserModifyMainWindow: public Ui_UserModifyMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMODIFYMAINWINDOW_H
