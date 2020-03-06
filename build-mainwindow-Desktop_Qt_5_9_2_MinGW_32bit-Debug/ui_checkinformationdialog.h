/********************************************************************************
** Form generated from reading UI file 'checkinformationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKINFORMATIONDIALOG_H
#define UI_CHECKINFORMATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CheckinformationDialog
{
public:
    QLineEdit *bookpeopleEdit;
    QLabel *bookpeoplelabel;
    QLabel *booktypelabel;
    QComboBox *booktypecomboBox;
    QLabel *bookidlabel;
    QLineEdit *bookidEdit;
    QLabel *telephonelabel;
    QLineEdit *telephoneEdit;
    QLabel *bookstatelabel;
    QComboBox *bookstatecomboBox;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *CheckinformationDialog)
    {
        if (CheckinformationDialog->objectName().isEmpty())
            CheckinformationDialog->setObjectName(QStringLiteral("CheckinformationDialog"));
        CheckinformationDialog->resize(692, 498);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        CheckinformationDialog->setFont(font);
        CheckinformationDialog->setStyleSheet(QLatin1String("#CheckinformationDialog{\n"
"border-image: url(:/mainbackground.jpg);\n"
"}\n"
"#CheckinformationDialog *{\n"
"border-image: url();\n"
"}"));
        bookpeopleEdit = new QLineEdit(CheckinformationDialog);
        bookpeopleEdit->setObjectName(QStringLiteral("bookpeopleEdit"));
        bookpeopleEdit->setGeometry(QRect(280, 50, 281, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        bookpeopleEdit->setFont(font1);
        bookpeopleEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));
        bookpeoplelabel = new QLabel(CheckinformationDialog);
        bookpeoplelabel->setObjectName(QStringLiteral("bookpeoplelabel"));
        bookpeoplelabel->setGeometry(QRect(140, 50, 71, 21));
        bookpeoplelabel->setFont(font1);
        booktypelabel = new QLabel(CheckinformationDialog);
        booktypelabel->setObjectName(QStringLiteral("booktypelabel"));
        booktypelabel->setGeometry(QRect(140, 105, 81, 31));
        booktypelabel->setFont(font1);
        booktypecomboBox = new QComboBox(CheckinformationDialog);
        booktypecomboBox->setObjectName(QStringLiteral("booktypecomboBox"));
        booktypecomboBox->setGeometry(QRect(280, 105, 281, 31));
        booktypecomboBox->setFont(font1);
        booktypecomboBox->setStyleSheet(QStringLiteral("background-color: rgba(195, 213, 223, 50%);"));
        bookidlabel = new QLabel(CheckinformationDialog);
        bookidlabel->setObjectName(QStringLiteral("bookidlabel"));
        bookidlabel->setGeometry(QRect(140, 160, 81, 31));
        bookidlabel->setFont(font1);
        bookidEdit = new QLineEdit(CheckinformationDialog);
        bookidEdit->setObjectName(QStringLiteral("bookidEdit"));
        bookidEdit->setGeometry(QRect(280, 160, 281, 31));
        bookidEdit->setFont(font1);
        bookidEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));
        telephonelabel = new QLabel(CheckinformationDialog);
        telephonelabel->setObjectName(QStringLiteral("telephonelabel"));
        telephonelabel->setGeometry(QRect(140, 215, 81, 31));
        telephonelabel->setFont(font1);
        telephoneEdit = new QLineEdit(CheckinformationDialog);
        telephoneEdit->setObjectName(QStringLiteral("telephoneEdit"));
        telephoneEdit->setGeometry(QRect(280, 215, 281, 31));
        telephoneEdit->setFont(font1);
        telephoneEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));
        bookstatelabel = new QLabel(CheckinformationDialog);
        bookstatelabel->setObjectName(QStringLiteral("bookstatelabel"));
        bookstatelabel->setGeometry(QRect(140, 270, 81, 31));
        bookstatelabel->setFont(font1);
        bookstatecomboBox = new QComboBox(CheckinformationDialog);
        bookstatecomboBox->setObjectName(QStringLiteral("bookstatecomboBox"));
        bookstatecomboBox->setGeometry(QRect(280, 270, 281, 31));
        bookstatecomboBox->setFont(font1);
        bookstatecomboBox->setStyleSheet(QStringLiteral("background-color: rgba(195, 213, 223, 50%);"));
        okButton = new QPushButton(CheckinformationDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(170, 420, 93, 28));
        okButton->setFont(font1);
        okButton->setStyleSheet(QLatin1String("QPushButton { background-color: rgba(195, 213, 223, 70%); \n"
"color: black; }"));
        cancelButton = new QPushButton(CheckinformationDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(430, 420, 93, 28));
        cancelButton->setFont(font1);
        cancelButton->setStyleSheet(QLatin1String("QPushButton { background-color: rgba(195, 213, 223, 70%); \n"
"color: black; }"));
        lineEdit = new QLineEdit(CheckinformationDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(280, 325, 281, 31));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 70%);"));
        label = new QLabel(CheckinformationDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 325, 81, 31));
        label->setFont(font1);

        retranslateUi(CheckinformationDialog);

        QMetaObject::connectSlotsByName(CheckinformationDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckinformationDialog)
    {
        CheckinformationDialog->setWindowTitle(QApplication::translate("CheckinformationDialog", "Dialog", Q_NULLPTR));
        bookpeoplelabel->setText(QApplication::translate("CheckinformationDialog", "\345\256\242\346\210\267\345\220\215", Q_NULLPTR));
        booktypelabel->setText(QApplication::translate("CheckinformationDialog", "\350\257\201\344\273\266\347\261\273\345\236\213", Q_NULLPTR));
        booktypecomboBox->clear();
        booktypecomboBox->insertItems(0, QStringList()
         << QApplication::translate("CheckinformationDialog", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR)
         << QApplication::translate("CheckinformationDialog", "\346\210\267\345\217\243\346\234\254", Q_NULLPTR)
         << QApplication::translate("CheckinformationDialog", "\351\251\276\347\205\247", Q_NULLPTR)
         << QApplication::translate("CheckinformationDialog", "\346\212\244\347\205\247", Q_NULLPTR)
        );
        bookidlabel->setText(QApplication::translate("CheckinformationDialog", "\350\257\201\344\273\266\345\217\267", Q_NULLPTR));
        telephonelabel->setText(QApplication::translate("CheckinformationDialog", "\347\224\265\350\257\235", Q_NULLPTR));
        bookstatelabel->setText(QApplication::translate("CheckinformationDialog", "\351\242\204\345\256\232\347\212\266\346\200\201", Q_NULLPTR));
        bookstatecomboBox->clear();
        bookstatecomboBox->insertItems(0, QStringList()
         << QApplication::translate("CheckinformationDialog", "\351\242\204\345\256\232", Q_NULLPTR)
         << QApplication::translate("CheckinformationDialog", "\345\205\245\344\275\217", Q_NULLPTR)
        );
        okButton->setText(QApplication::translate("CheckinformationDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("CheckinformationDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("CheckinformationDialog", "\345\205\245\344\275\217\345\244\251\346\225\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CheckinformationDialog: public Ui_CheckinformationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKINFORMATIONDIALOG_H
