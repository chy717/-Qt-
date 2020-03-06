/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_3;
    QLineEdit *usrlineEdit;
    QLineEdit *pwdlineEdit;
    QPushButton *exitpushButton;
    QPushButton *loginpushButton;
    QLabel *label;
    QLabel *label_2;
    QWidget *tab_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *UusrlineEdit;
    QLineEdit *UpwdlineEdit;
    QPushButton *UloginpushButton;
    QPushButton *UexitpushButton;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QStringLiteral("loginDialog"));
        loginDialog->resize(447, 340);
        loginDialog->setStyleSheet(QLatin1String("#loginDialog{\n"
"border-image: url(:/mainbackground.jpg);\n"
"}\n"
"#loginDialog *{\n"
"border-image: url();\n"
"}"));
        tabWidget = new QTabWidget(loginDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 441, 331));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane { \n"
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
"min-width:100px;\n"
"min-height:25px;\n"
"color: rgb(255,255,255);	\n"
"margin: 10px, 20px, 10px, 10px;\n"
" }\n"
" \n"
"QTabBar::tab::selected{background-color:rgb(104,160,177);}\n"
"QTabBar::tab::!selected{background-color:rgb(129, 207, 209);}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 10, 91, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));
        usrlineEdit = new QLineEdit(tab);
        usrlineEdit->setObjectName(QStringLiteral("usrlineEdit"));
        usrlineEdit->setGeometry(QRect(120, 60, 181, 21));
        usrlineEdit->setFont(font);
        usrlineEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));
        pwdlineEdit = new QLineEdit(tab);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(120, 130, 181, 21));
        pwdlineEdit->setFont(font);
        pwdlineEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));
        exitpushButton = new QPushButton(tab);
        exitpushButton->setObjectName(QStringLiteral("exitpushButton"));
        exitpushButton->setGeometry(QRect(220, 190, 93, 28));
        exitpushButton->setFont(font);
        exitpushButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgba(25, 61, 95, 70%); color: rgb(255, 255, 255); }"));
        loginpushButton = new QPushButton(tab);
        loginpushButton->setObjectName(QStringLiteral("loginpushButton"));
        loginpushButton->setGeometry(QRect(100, 190, 93, 28));
        loginpushButton->setFont(font);
        loginpushButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgba(25, 61, 95, 70%); color: rgb(255, 255, 255); }"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 57, 21));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color:rgb(195, 213, 223);"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 130, 41, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background-color:rgb(195, 213, 223);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 60, 61, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("background-color:rgb(195, 213, 223);"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 130, 41, 21));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("background-color:rgb(195, 213, 223);"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 20, 81, 21));
        label_6->setFont(font);
        UusrlineEdit = new QLineEdit(tab_2);
        UusrlineEdit->setObjectName(QStringLiteral("UusrlineEdit"));
        UusrlineEdit->setGeometry(QRect(120, 60, 181, 21));
        UusrlineEdit->setFont(font);
        UusrlineEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));
        UpwdlineEdit = new QLineEdit(tab_2);
        UpwdlineEdit->setObjectName(QStringLiteral("UpwdlineEdit"));
        UpwdlineEdit->setGeometry(QRect(120, 130, 181, 21));
        UpwdlineEdit->setFont(font);
        UpwdlineEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));
        UloginpushButton = new QPushButton(tab_2);
        UloginpushButton->setObjectName(QStringLiteral("UloginpushButton"));
        UloginpushButton->setGeometry(QRect(110, 200, 93, 28));
        UloginpushButton->setFont(font);
        UloginpushButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgba(25, 61, 95, 70%); color: rgb(255, 255, 255); }"));
        UexitpushButton = new QPushButton(tab_2);
        UexitpushButton->setObjectName(QStringLiteral("UexitpushButton"));
        UexitpushButton->setGeometry(QRect(220, 200, 93, 28));
        UexitpushButton->setFont(font);
        UexitpushButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgba(25, 61, 95, 70%); color: rgb(255, 255, 255); }"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(loginDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QApplication::translate("loginDialog", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("loginDialog", "  \345\221\230\345\267\245\347\231\273\345\275\225", Q_NULLPTR));
        exitpushButton->setText(QApplication::translate("loginDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        loginpushButton->setText(QApplication::translate("loginDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("loginDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("loginDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("loginDialog", "\345\221\230\345\267\245\347\231\273\345\275\225", Q_NULLPTR));
        label_4->setText(QApplication::translate("loginDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("loginDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("loginDialog", "\347\224\250\346\210\267\347\231\273\345\275\225", Q_NULLPTR));
        UloginpushButton->setText(QApplication::translate("loginDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        UexitpushButton->setText(QApplication::translate("loginDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("loginDialog", "\347\224\250\346\210\267\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
