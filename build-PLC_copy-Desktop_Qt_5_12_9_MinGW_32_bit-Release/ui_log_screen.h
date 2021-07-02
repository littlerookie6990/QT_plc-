/********************************************************************************
** Form generated from reading UI file 'log_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_SCREEN_H
#define UI_LOG_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_log_screen
{
public:
    QLineEdit *lineEdit_user;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QLabel *label_3;
    QPushButton *btn_log;
    QPushButton *btn_cancel;

    void setupUi(QWidget *log_screen)
    {
        if (log_screen->objectName().isEmpty())
            log_screen->setObjectName(QString::fromUtf8("log_screen"));
        log_screen->resize(800, 600);
        lineEdit_user = new QLineEdit(log_screen);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(370, 430, 191, 31));
        lineEdit_user->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);\n"
"background-color: rgb(234, 246, 255);"));
        label_2 = new QLabel(log_screen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 440, 41, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        lineEdit_password = new QLineEdit(log_screen);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(370, 470, 191, 31));
        lineEdit_password->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);\n"
"background-color: rgb(234, 246, 255);"));
        label_3 = new QLabel(log_screen);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 480, 54, 12));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        btn_log = new QPushButton(log_screen);
        btn_log->setObjectName(QString::fromUtf8("btn_log"));
        btn_log->setGeometry(QRect(340, 530, 80, 31));
        btn_log->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);\n"
"background-color: rgb(234, 246, 255);"));
        btn_log->setFlat(false);
        btn_cancel = new QPushButton(log_screen);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(470, 530, 80, 31));
        btn_cancel->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);\n"
"background-color: rgb(234, 246, 255);"));
        btn_cancel->setFlat(false);

        retranslateUi(log_screen);

        QMetaObject::connectSlotsByName(log_screen);
    } // setupUi

    void retranslateUi(QWidget *log_screen)
    {
        log_screen->setWindowTitle(QApplication::translate("log_screen", "Form", nullptr));
        label_2->setText(QApplication::translate("log_screen", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QApplication::translate("log_screen", "\345\257\206\347\240\201", nullptr));
        btn_log->setText(QApplication::translate("log_screen", "\347\231\273\345\275\225", nullptr));
        btn_cancel->setText(QApplication::translate("log_screen", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class log_screen: public Ui_log_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_SCREEN_H
