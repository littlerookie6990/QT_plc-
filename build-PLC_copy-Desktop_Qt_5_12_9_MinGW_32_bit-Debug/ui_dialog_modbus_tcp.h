/********************************************************************************
** Form generated from reading UI file 'dialog_modbus_tcp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MODBUS_TCP_H
#define UI_DIALOG_MODBUS_TCP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_modbus_tcp
{
public:
    QLabel *label_2;
    QLabel *label_status;
    QLineEdit *lineEdit_ip;
    QPushButton *btn_connect;
    QLabel *label_4;
    QLineEdit *lineEdit_port;
    QLabel *label;
    QPushButton *btn_close;
    QLineEdit *lineEdit_salv_id;
    QLabel *label_3;

    void setupUi(QDialog *Dialog_modbus_tcp)
    {
        if (Dialog_modbus_tcp->objectName().isEmpty())
            Dialog_modbus_tcp->setObjectName(QString::fromUtf8("Dialog_modbus_tcp"));
        Dialog_modbus_tcp->resize(262, 303);
        label_2 = new QLabel(Dialog_modbus_tcp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(53, 110, 31, 20));
        label_status = new QLabel(Dialog_modbus_tcp);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(70, 230, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("AcadEref"));
        font.setPointSize(20);
        label_status->setFont(font);
        lineEdit_ip = new QLineEdit(Dialog_modbus_tcp);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));
        lineEdit_ip->setGeometry(QRect(94, 79, 113, 21));
        btn_connect = new QPushButton(Dialog_modbus_tcp);
        btn_connect->setObjectName(QString::fromUtf8("btn_connect"));
        btn_connect->setGeometry(QRect(50, 190, 80, 31));
        label_4 = new QLabel(Dialog_modbus_tcp);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 30, 131, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift SemiLight SemiConde"));
        font1.setPointSize(20);
        label_4->setFont(font1);
        lineEdit_port = new QLineEdit(Dialog_modbus_tcp);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));
        lineEdit_port->setGeometry(QRect(94, 110, 51, 21));
        label = new QLabel(Dialog_modbus_tcp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 80, 20, 20));
        btn_close = new QPushButton(Dialog_modbus_tcp);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(160, 190, 80, 31));
        lineEdit_salv_id = new QLineEdit(Dialog_modbus_tcp);
        lineEdit_salv_id->setObjectName(QString::fromUtf8("lineEdit_salv_id"));
        lineEdit_salv_id->setGeometry(QRect(91, 140, 31, 21));
        label_3 = new QLabel(Dialog_modbus_tcp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 140, 51, 20));

        retranslateUi(Dialog_modbus_tcp);

        QMetaObject::connectSlotsByName(Dialog_modbus_tcp);
    } // setupUi

    void retranslateUi(QDialog *Dialog_modbus_tcp)
    {
        Dialog_modbus_tcp->setWindowTitle(QApplication::translate("Dialog_modbus_tcp", "Dialog", nullptr));
        label_2->setText(QApplication::translate("Dialog_modbus_tcp", "port", nullptr));
        label_status->setText(QApplication::translate("Dialog_modbus_tcp", "\345\267\262\347\273\217\346\226\255\345\274\200", nullptr));
        btn_connect->setText(QApplication::translate("Dialog_modbus_tcp", "connect", nullptr));
        label_4->setText(QApplication::translate("Dialog_modbus_tcp", "modbus_tcp", nullptr));
        lineEdit_port->setText(QString());
        label->setText(QApplication::translate("Dialog_modbus_tcp", "IP", nullptr));
        btn_close->setText(QApplication::translate("Dialog_modbus_tcp", "close", nullptr));
        lineEdit_salv_id->setText(QString());
        label_3->setText(QApplication::translate("Dialog_modbus_tcp", "slave_id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_modbus_tcp: public Ui_Dialog_modbus_tcp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MODBUS_TCP_H
