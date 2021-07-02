/********************************************************************************
** Form generated from reading UI file 'dialog_modbus_rtu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MODBUS_RTU_H
#define UI_DIALOG_MODBUS_RTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Modbus_Rtu
{
public:
    QLabel *label_4;
    QWidget *widget_2;
    QPushButton *btn_close_rtu;
    QPushButton *btn_connect_rtu;
    QLabel *label_braud_rtu;
    QComboBox *comboBox_braudrate;
    QLabel *label_portname;
    QComboBox *comboBox_portname;
    QLabel *label_status_rtu;
    QLabel *label;
    QLineEdit *lineEdit_sklave_id_Rtu;
    QLabel *label_link_style_rtu;

    void setupUi(QDialog *Dialog_Modbus_Rtu)
    {
        if (Dialog_Modbus_Rtu->objectName().isEmpty())
            Dialog_Modbus_Rtu->setObjectName(QString::fromUtf8("Dialog_Modbus_Rtu"));
        Dialog_Modbus_Rtu->setEnabled(true);
        Dialog_Modbus_Rtu->resize(244, 338);
        label_4 = new QLabel(Dialog_Modbus_Rtu);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 30, 131, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift SemiLight SemiConde"));
        font.setPointSize(20);
        label_4->setFont(font);
        widget_2 = new QWidget(Dialog_Modbus_Rtu);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(50, 80, 171, 271));
        btn_close_rtu = new QPushButton(widget_2);
        btn_close_rtu->setObjectName(QString::fromUtf8("btn_close_rtu"));
        btn_close_rtu->setGeometry(QRect(90, 210, 75, 31));
        btn_connect_rtu = new QPushButton(widget_2);
        btn_connect_rtu->setObjectName(QString::fromUtf8("btn_connect_rtu"));
        btn_connect_rtu->setGeometry(QRect(10, 210, 75, 31));
        label_braud_rtu = new QLabel(widget_2);
        label_braud_rtu->setObjectName(QString::fromUtf8("label_braud_rtu"));
        label_braud_rtu->setGeometry(QRect(30, 130, 31, 16));
        comboBox_braudrate = new QComboBox(widget_2);
        comboBox_braudrate->addItem(QString());
        comboBox_braudrate->addItem(QString());
        comboBox_braudrate->addItem(QString());
        comboBox_braudrate->addItem(QString());
        comboBox_braudrate->addItem(QString());
        comboBox_braudrate->addItem(QString());
        comboBox_braudrate->addItem(QString());
        comboBox_braudrate->addItem(QString());
        comboBox_braudrate->addItem(QString());
        comboBox_braudrate->setObjectName(QString::fromUtf8("comboBox_braudrate"));
        comboBox_braudrate->setGeometry(QRect(70, 130, 65, 22));
        label_portname = new QLabel(widget_2);
        label_portname->setObjectName(QString::fromUtf8("label_portname"));
        label_portname->setGeometry(QRect(30, 80, 31, 20));
        comboBox_portname = new QComboBox(widget_2);
        comboBox_portname->addItem(QString());
        comboBox_portname->addItem(QString());
        comboBox_portname->addItem(QString());
        comboBox_portname->addItem(QString());
        comboBox_portname->addItem(QString());
        comboBox_portname->addItem(QString());
        comboBox_portname->addItem(QString());
        comboBox_portname->addItem(QString());
        comboBox_portname->setObjectName(QString::fromUtf8("comboBox_portname"));
        comboBox_portname->setGeometry(QRect(71, 81, 54, 22));
        label_status_rtu = new QLabel(widget_2);
        label_status_rtu->setObjectName(QString::fromUtf8("label_status_rtu"));
        label_status_rtu->setGeometry(QRect(10, 160, 71, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AcadEref"));
        font1.setPointSize(16);
        label_status_rtu->setFont(font1);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 54, 20));
        lineEdit_sklave_id_Rtu = new QLineEdit(widget_2);
        lineEdit_sklave_id_Rtu->setObjectName(QString::fromUtf8("lineEdit_sklave_id_Rtu"));
        lineEdit_sklave_id_Rtu->setGeometry(QRect(70, 40, 41, 20));
        label_link_style_rtu = new QLabel(widget_2);
        label_link_style_rtu->setObjectName(QString::fromUtf8("label_link_style_rtu"));
        label_link_style_rtu->setGeometry(QRect(90, 175, 54, 21));

        retranslateUi(Dialog_Modbus_Rtu);

        QMetaObject::connectSlotsByName(Dialog_Modbus_Rtu);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Modbus_Rtu)
    {
        Dialog_Modbus_Rtu->setWindowTitle(QApplication::translate("Dialog_Modbus_Rtu", "Dialog", nullptr));
        label_4->setText(QApplication::translate("Dialog_Modbus_Rtu", "modbus_RTU", nullptr));
        btn_close_rtu->setText(QApplication::translate("Dialog_Modbus_Rtu", "close", nullptr));
        btn_connect_rtu->setText(QApplication::translate("Dialog_Modbus_Rtu", "connect", nullptr));
        label_braud_rtu->setText(QApplication::translate("Dialog_Modbus_Rtu", "Braud", nullptr));
        comboBox_braudrate->setItemText(0, QApplication::translate("Dialog_Modbus_Rtu", "115200", nullptr));
        comboBox_braudrate->setItemText(1, QApplication::translate("Dialog_Modbus_Rtu", "57600", nullptr));
        comboBox_braudrate->setItemText(2, QApplication::translate("Dialog_Modbus_Rtu", "38400", nullptr));
        comboBox_braudrate->setItemText(3, QApplication::translate("Dialog_Modbus_Rtu", "19200", nullptr));
        comboBox_braudrate->setItemText(4, QApplication::translate("Dialog_Modbus_Rtu", "9600", nullptr));
        comboBox_braudrate->setItemText(5, QApplication::translate("Dialog_Modbus_Rtu", "4800", nullptr));
        comboBox_braudrate->setItemText(6, QApplication::translate("Dialog_Modbus_Rtu", "2400", nullptr));
        comboBox_braudrate->setItemText(7, QApplication::translate("Dialog_Modbus_Rtu", "1200", nullptr));
        comboBox_braudrate->setItemText(8, QString());

        label_portname->setText(QApplication::translate("Dialog_Modbus_Rtu", "Port", nullptr));
        comboBox_portname->setItemText(0, QApplication::translate("Dialog_Modbus_Rtu", "COM1", nullptr));
        comboBox_portname->setItemText(1, QApplication::translate("Dialog_Modbus_Rtu", "COM2", nullptr));
        comboBox_portname->setItemText(2, QApplication::translate("Dialog_Modbus_Rtu", "COM3", nullptr));
        comboBox_portname->setItemText(3, QApplication::translate("Dialog_Modbus_Rtu", "COM4", nullptr));
        comboBox_portname->setItemText(4, QApplication::translate("Dialog_Modbus_Rtu", "COM5", nullptr));
        comboBox_portname->setItemText(5, QApplication::translate("Dialog_Modbus_Rtu", "COM6", nullptr));
        comboBox_portname->setItemText(6, QApplication::translate("Dialog_Modbus_Rtu", "COM7", nullptr));
        comboBox_portname->setItemText(7, QApplication::translate("Dialog_Modbus_Rtu", "COM8", nullptr));

        label_status_rtu->setText(QApplication::translate("Dialog_Modbus_Rtu", "\346\234\252\350\277\236\346\216\245", nullptr));
        label->setText(QApplication::translate("Dialog_Modbus_Rtu", "slave id", nullptr));
        label_link_style_rtu->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_Modbus_Rtu: public Ui_Dialog_Modbus_Rtu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MODBUS_RTU_H
