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
    QLabel *label_people;

    void setupUi(QWidget *log_screen)
    {
        if (log_screen->objectName().isEmpty())
            log_screen->setObjectName(QString::fromUtf8("log_screen"));
        log_screen->resize(460, 545);
        lineEdit_user = new QLineEdit(log_screen);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(160, 340, 191, 31));
        label_2 = new QLabel(log_screen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 350, 54, 12));
        lineEdit_password = new QLineEdit(log_screen);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(160, 380, 191, 31));
        label_3 = new QLabel(log_screen);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 390, 54, 12));
        btn_log = new QPushButton(log_screen);
        btn_log->setObjectName(QString::fromUtf8("btn_log"));
        btn_log->setGeometry(QRect(130, 440, 80, 31));
        btn_log->setFlat(false);
        btn_cancel = new QPushButton(log_screen);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(260, 440, 80, 31));
        btn_cancel->setFlat(false);
        label_people = new QLabel(log_screen);
        label_people->setObjectName(QString::fromUtf8("label_people"));
        label_people->setGeometry(QRect(120, 110, 221, 201));
        label_people->setScaledContents(true);

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
        label_people->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class log_screen: public Ui_log_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_SCREEN_H
