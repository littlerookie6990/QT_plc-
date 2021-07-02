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
    QLabel *label_3;
    QLabel *label_5;
    QWidget *widget_3;
    QPushButton *btn_close_rtu_2;
    QPushButton *btn_connect_rtu_2;
    QLabel *label_braud_rtu_2;
    QComboBox *comboBox_braudrate_2;
    QLabel *label_portname_2;
    QComboBox *comboBox_portname_2;
    QLabel *label_status_rtu_2;
    QLabel *label_2;
    QLineEdit *lineEdit_sklave_id_Rtu_2;
    QLabel *label_4;
    QLabel *label_6;

    void setupUi(QDialog *Dialog_Modbus_Rtu)
    {
        if (Dialog_Modbus_Rtu->objectName().isEmpty())
            Dialog_Modbus_Rtu->setObjectName(QString::fromUtf8("Dialog_Modbus_Rtu"));
        Dialog_Modbus_Rtu->setEnabled(true);
        Dialog_Modbus_Rtu->resize(594, 369);
        Dialog_Modbus_Rtu->setStyleSheet(QString::fromUtf8("QDialog{   border-image: url(:/z/back3.jpg)}"));
        widget_2 = new QWidget(Dialog_Modbus_Rtu);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(1, -74, 251, 341));
        btn_close_rtu = new QPushButton(widget_2);
        btn_close_rtu->setObjectName(QString::fromUtf8("btn_close_rtu"));
        btn_close_rtu->setGeometry(QRect(146, 236, 100, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setItalic(true);
        btn_close_rtu->setFont(font);
        btn_close_rtu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background:transparent;\n"
" color: rgb(0, 0, 0);\n"
" border-style:outset;\n"
" border:1px solid blue;\n"
" border-radius:12px\n"
"}\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgb(45, 104, 125);\n"
" border-style: inset;\n"
"}\n"
"\n"
"QPushButton:checked{ \n"
" background-color: rgb(6, 99, 130);\n"
" color: blue;\n"
"}"));
        btn_connect_rtu = new QPushButton(widget_2);
        btn_connect_rtu->setObjectName(QString::fromUtf8("btn_connect_rtu"));
        btn_connect_rtu->setGeometry(QRect(9, 236, 100, 40));
        btn_connect_rtu->setFont(font);
        btn_connect_rtu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background:transparent;\n"
" color: rgb(0, 0, 0);\n"
" border-style:outset;\n"
" border:1px solid blue;\n"
" border-radius:12px\n"
"}\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgb(45, 104, 125);\n"
" border-style: inset;\n"
"}\n"
"\n"
"QPushButton:checked{ \n"
" background-color: rgb(6, 99, 130);\n"
" color: blue;\n"
"}"));
        label_braud_rtu = new QLabel(widget_2);
        label_braud_rtu->setObjectName(QString::fromUtf8("label_braud_rtu"));
        label_braud_rtu->setGeometry(QRect(9, 208, 51, 16));
        label_braud_rtu->setFont(font);
        label_braud_rtu->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
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
        comboBox_braudrate->setGeometry(QRect(90, 208, 71, 21));
        comboBox_braudrate->setFont(font);
        label_portname = new QLabel(widget_2);
        label_portname->setObjectName(QString::fromUtf8("label_portname"));
        label_portname->setGeometry(QRect(9, 180, 41, 16));
        label_portname->setFont(font);
        label_portname->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
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
        comboBox_portname->setGeometry(QRect(90, 180, 71, 21));
        comboBox_portname->setFont(font);
        label_status_rtu = new QLabel(widget_2);
        label_status_rtu->setObjectName(QString::fromUtf8("label_status_rtu"));
        label_status_rtu->setGeometry(QRect(95, 292, 50, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(16);
        font1.setItalic(true);
        label_status_rtu->setFont(font1);
        label_status_rtu->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);"));
        label_status_rtu->setPixmap(QPixmap(QString::fromUtf8(":/z/link.png")));
        label_status_rtu->setScaledContents(true);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 152, 61, 16));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_sklave_id_Rtu = new QLineEdit(widget_2);
        lineEdit_sklave_id_Rtu->setObjectName(QString::fromUtf8("lineEdit_sklave_id_Rtu"));
        lineEdit_sklave_id_Rtu->setGeometry(QRect(90, 152, 133, 22));
        lineEdit_sklave_id_Rtu->setFont(font);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 80, 91, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(20);
        font2.setItalic(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 294, 71, 21));
        label_5->setFont(font);
        widget_3 = new QWidget(Dialog_Modbus_Rtu);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(336, -74, 251, 341));
        btn_close_rtu_2 = new QPushButton(widget_3);
        btn_close_rtu_2->setObjectName(QString::fromUtf8("btn_close_rtu_2"));
        btn_close_rtu_2->setGeometry(QRect(149, 236, 100, 40));
        btn_close_rtu_2->setFont(font);
        btn_close_rtu_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background:transparent;\n"
" color: rgb(0, 0, 0);\n"
" border-style:outset;\n"
" border:1px solid blue;\n"
" border-radius:12px\n"
"}\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgb(45, 104, 125);\n"
" border-style: inset;\n"
"}\n"
"\n"
"QPushButton:checked{ \n"
" background-color: rgb(6, 99, 130);\n"
" color: blue;\n"
"}"));
        btn_connect_rtu_2 = new QPushButton(widget_3);
        btn_connect_rtu_2->setObjectName(QString::fromUtf8("btn_connect_rtu_2"));
        btn_connect_rtu_2->setGeometry(QRect(9, 236, 100, 40));
        btn_connect_rtu_2->setFont(font);
        btn_connect_rtu_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background:transparent;\n"
" color: rgb(0, 0, 0);\n"
" border-style:outset;\n"
" border:1px solid blue;\n"
" border-radius:12px\n"
"}\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgb(45, 104, 125);\n"
" border-style: inset;\n"
"}\n"
"\n"
"QPushButton:checked{ \n"
" background-color: rgb(6, 99, 130);\n"
" color: blue;\n"
"}"));
        label_braud_rtu_2 = new QLabel(widget_3);
        label_braud_rtu_2->setObjectName(QString::fromUtf8("label_braud_rtu_2"));
        label_braud_rtu_2->setGeometry(QRect(9, 208, 51, 16));
        label_braud_rtu_2->setFont(font);
        label_braud_rtu_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        comboBox_braudrate_2 = new QComboBox(widget_3);
        comboBox_braudrate_2->addItem(QString());
        comboBox_braudrate_2->addItem(QString());
        comboBox_braudrate_2->addItem(QString());
        comboBox_braudrate_2->addItem(QString());
        comboBox_braudrate_2->addItem(QString());
        comboBox_braudrate_2->addItem(QString());
        comboBox_braudrate_2->addItem(QString());
        comboBox_braudrate_2->addItem(QString());
        comboBox_braudrate_2->addItem(QString());
        comboBox_braudrate_2->setObjectName(QString::fromUtf8("comboBox_braudrate_2"));
        comboBox_braudrate_2->setGeometry(QRect(92, 208, 71, 21));
        comboBox_braudrate_2->setFont(font);
        label_portname_2 = new QLabel(widget_3);
        label_portname_2->setObjectName(QString::fromUtf8("label_portname_2"));
        label_portname_2->setGeometry(QRect(9, 180, 41, 16));
        label_portname_2->setFont(font);
        label_portname_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        comboBox_portname_2 = new QComboBox(widget_3);
        comboBox_portname_2->addItem(QString());
        comboBox_portname_2->addItem(QString());
        comboBox_portname_2->addItem(QString());
        comboBox_portname_2->addItem(QString());
        comboBox_portname_2->addItem(QString());
        comboBox_portname_2->addItem(QString());
        comboBox_portname_2->addItem(QString());
        comboBox_portname_2->addItem(QString());
        comboBox_portname_2->setObjectName(QString::fromUtf8("comboBox_portname_2"));
        comboBox_portname_2->setGeometry(QRect(92, 180, 71, 21));
        comboBox_portname_2->setFont(font);
        label_status_rtu_2 = new QLabel(widget_3);
        label_status_rtu_2->setObjectName(QString::fromUtf8("label_status_rtu_2"));
        label_status_rtu_2->setGeometry(QRect(100, 294, 50, 30));
        label_status_rtu_2->setFont(font1);
        label_status_rtu_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);"));
        label_status_rtu_2->setPixmap(QPixmap(QString::fromUtf8(":/z/link.png")));
        label_status_rtu_2->setScaledContents(true);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(9, 152, 61, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_sklave_id_Rtu_2 = new QLineEdit(widget_3);
        lineEdit_sklave_id_Rtu_2->setObjectName(QString::fromUtf8("lineEdit_sklave_id_Rtu_2"));
        lineEdit_sklave_id_Rtu_2->setGeometry(QRect(92, 152, 133, 22));
        lineEdit_sklave_id_Rtu_2->setFont(font);
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 82, 91, 31));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 298, 71, 21));
        label_6->setFont(font);

        retranslateUi(Dialog_Modbus_Rtu);

        QMetaObject::connectSlotsByName(Dialog_Modbus_Rtu);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Modbus_Rtu)
    {
        Dialog_Modbus_Rtu->setWindowTitle(QApplication::translate("Dialog_Modbus_Rtu", "Dialog", nullptr));
        btn_close_rtu->setText(QApplication::translate("Dialog_Modbus_Rtu", "close", nullptr));
        btn_connect_rtu->setText(QApplication::translate("Dialog_Modbus_Rtu", "connect", nullptr));
        label_braud_rtu->setText(QApplication::translate("Dialog_Modbus_Rtu", "Braud", nullptr));
        comboBox_braudrate->setItemText(0, QApplication::translate("Dialog_Modbus_Rtu", "9600", nullptr));
        comboBox_braudrate->setItemText(1, QApplication::translate("Dialog_Modbus_Rtu", "115200", nullptr));
        comboBox_braudrate->setItemText(2, QApplication::translate("Dialog_Modbus_Rtu", "57600", nullptr));
        comboBox_braudrate->setItemText(3, QApplication::translate("Dialog_Modbus_Rtu", "38400", nullptr));
        comboBox_braudrate->setItemText(4, QApplication::translate("Dialog_Modbus_Rtu", "19200", nullptr));
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

        label_status_rtu->setText(QString());
        label->setText(QApplication::translate("Dialog_Modbus_Rtu", "slave id", nullptr));
        lineEdit_sklave_id_Rtu->setText(QApplication::translate("Dialog_Modbus_Rtu", "2", nullptr));
        label_3->setText(QApplication::translate("Dialog_Modbus_Rtu", "\346\215\242\347\255\222\346\234\272", nullptr));
        label_5->setText(QApplication::translate("Dialog_Modbus_Rtu", "\350\277\236\346\216\245\347\212\266\346\200\201", nullptr));
        btn_close_rtu_2->setText(QApplication::translate("Dialog_Modbus_Rtu", "close", nullptr));
        btn_connect_rtu_2->setText(QApplication::translate("Dialog_Modbus_Rtu", "connect", nullptr));
        label_braud_rtu_2->setText(QApplication::translate("Dialog_Modbus_Rtu", "Braud", nullptr));
        comboBox_braudrate_2->setItemText(0, QApplication::translate("Dialog_Modbus_Rtu", "9600", nullptr));
        comboBox_braudrate_2->setItemText(1, QApplication::translate("Dialog_Modbus_Rtu", "115200", nullptr));
        comboBox_braudrate_2->setItemText(2, QApplication::translate("Dialog_Modbus_Rtu", "57600", nullptr));
        comboBox_braudrate_2->setItemText(3, QApplication::translate("Dialog_Modbus_Rtu", "38400", nullptr));
        comboBox_braudrate_2->setItemText(4, QApplication::translate("Dialog_Modbus_Rtu", "19200", nullptr));
        comboBox_braudrate_2->setItemText(5, QApplication::translate("Dialog_Modbus_Rtu", "4800", nullptr));
        comboBox_braudrate_2->setItemText(6, QApplication::translate("Dialog_Modbus_Rtu", "2400", nullptr));
        comboBox_braudrate_2->setItemText(7, QApplication::translate("Dialog_Modbus_Rtu", "1200", nullptr));
        comboBox_braudrate_2->setItemText(8, QString());

        label_portname_2->setText(QApplication::translate("Dialog_Modbus_Rtu", "Port", nullptr));
        comboBox_portname_2->setItemText(0, QApplication::translate("Dialog_Modbus_Rtu", "COM1", nullptr));
        comboBox_portname_2->setItemText(1, QApplication::translate("Dialog_Modbus_Rtu", "COM2", nullptr));
        comboBox_portname_2->setItemText(2, QApplication::translate("Dialog_Modbus_Rtu", "COM3", nullptr));
        comboBox_portname_2->setItemText(3, QApplication::translate("Dialog_Modbus_Rtu", "COM4", nullptr));
        comboBox_portname_2->setItemText(4, QApplication::translate("Dialog_Modbus_Rtu", "COM5", nullptr));
        comboBox_portname_2->setItemText(5, QApplication::translate("Dialog_Modbus_Rtu", "COM6", nullptr));
        comboBox_portname_2->setItemText(6, QApplication::translate("Dialog_Modbus_Rtu", "COM7", nullptr));
        comboBox_portname_2->setItemText(7, QApplication::translate("Dialog_Modbus_Rtu", "COM8", nullptr));

        label_status_rtu_2->setText(QString());
        label_2->setText(QApplication::translate("Dialog_Modbus_Rtu", "slave id", nullptr));
        lineEdit_sklave_id_Rtu_2->setText(QApplication::translate("Dialog_Modbus_Rtu", "1", nullptr));
        label_4->setText(QApplication::translate("Dialog_Modbus_Rtu", "\346\211\223\347\273\223\346\234\272", nullptr));
        label_6->setText(QApplication::translate("Dialog_Modbus_Rtu", "\350\277\236\346\216\245\347\212\266\346\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Modbus_Rtu: public Ui_Dialog_Modbus_Rtu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MODBUS_RTU_H
