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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_modbus_tcp
{
public:
    QFrame *frame;
    QLabel *label_8;
    QPushButton *btn_connect_2;
    QPushButton *btn_close_2;
    QLabel *label_4;
    QLineEdit *lineEdit_salv_id_2;
    QLineEdit *lineEdit_port_2;
    QLineEdit *lineEdit_ip_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_status_2;
    QLabel *label_14;
    QFrame *frame_2;
    QLabel *label_7;
    QLabel *label_status;
    QPushButton *btn_close;
    QLineEdit *lineEdit_port;
    QLineEdit *lineEdit_ip;
    QPushButton *btn_connect;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_salv_id;
    QLabel *label_13;

    void setupUi(QDialog *Dialog_modbus_tcp)
    {
        if (Dialog_modbus_tcp->objectName().isEmpty())
            Dialog_modbus_tcp->setObjectName(QString::fromUtf8("Dialog_modbus_tcp"));
        Dialog_modbus_tcp->resize(600, 370);
        Dialog_modbus_tcp->setStyleSheet(QString::fromUtf8("QDialog{   border-image: url(:/z/back3.jpg)}"));
        frame = new QFrame(Dialog_modbus_tcp);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(344, -57, 251, 351));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setItalic(true);
        frame->setFont(font);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 63, 91, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(20);
        font1.setItalic(true);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        btn_connect_2 = new QPushButton(frame);
        btn_connect_2->setObjectName(QString::fromUtf8("btn_connect_2"));
        btn_connect_2->setGeometry(QRect(10, 221, 100, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(12);
        font2.setItalic(true);
        btn_connect_2->setFont(font2);
        btn_connect_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        btn_close_2 = new QPushButton(frame);
        btn_close_2->setObjectName(QString::fromUtf8("btn_close_2"));
        btn_close_2->setGeometry(QRect(144, 221, 100, 40));
        btn_close_2->setFont(font2);
        btn_close_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 190, 48, 16));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_salv_id_2 = new QLineEdit(frame);
        lineEdit_salv_id_2->setObjectName(QString::fromUtf8("lineEdit_salv_id_2"));
        lineEdit_salv_id_2->setGeometry(QRect(110, 190, 133, 22));
        lineEdit_salv_id_2->setFont(font2);
        lineEdit_port_2 = new QLineEdit(frame);
        lineEdit_port_2->setObjectName(QString::fromUtf8("lineEdit_port_2"));
        lineEdit_port_2->setGeometry(QRect(110, 160, 133, 22));
        lineEdit_port_2->setFont(font2);
        lineEdit_ip_2 = new QLineEdit(frame);
        lineEdit_ip_2->setObjectName(QString::fromUtf8("lineEdit_ip_2"));
        lineEdit_ip_2->setGeometry(QRect(110, 130, 133, 22));
        lineEdit_ip_2->setFont(font2);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 160, 31, 16));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 130, 16, 16));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_status_2 = new QLabel(frame);
        label_status_2->setObjectName(QString::fromUtf8("label_status_2"));
        label_status_2->setGeometry(QRect(100, 282, 51, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(14);
        font3.setItalic(true);
        label_status_2->setFont(font3);
        label_status_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);"));
        label_status_2->setPixmap(QPixmap(QString::fromUtf8(":/z/link1.png")));
        label_14 = new QLabel(frame);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 290, 71, 21));
        label_14->setFont(font2);
        frame_2 = new QFrame(Dialog_modbus_tcp);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(5, -57, 251, 351));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 70, 91, 24));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_status = new QLabel(frame_2);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(90, 282, 51, 41));
        label_status->setFont(font3);
        label_status->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);"));
        label_status->setPixmap(QPixmap(QString::fromUtf8(":/z/link1.png")));
        btn_close = new QPushButton(frame_2);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(144, 221, 100, 40));
        btn_close->setFont(font2);
        btn_close->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        lineEdit_port = new QLineEdit(frame_2);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));
        lineEdit_port->setGeometry(QRect(110, 160, 133, 22));
        lineEdit_port->setFont(font2);
        lineEdit_ip = new QLineEdit(frame_2);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));
        lineEdit_ip->setGeometry(QRect(110, 130, 133, 22));
        lineEdit_ip->setFont(font2);
        btn_connect = new QPushButton(frame_2);
        btn_connect->setObjectName(QString::fromUtf8("btn_connect"));
        btn_connect->setGeometry(QRect(5, 221, 100, 40));
        btn_connect->setFont(font2);
        btn_connect->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 130, 16, 16));
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 160, 41, 16));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(6, 190, 48, 16));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_salv_id = new QLineEdit(frame_2);
        lineEdit_salv_id->setObjectName(QString::fromUtf8("lineEdit_salv_id"));
        lineEdit_salv_id->setGeometry(QRect(110, 190, 133, 22));
        lineEdit_salv_id->setFont(font2);
        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 290, 71, 21));
        label_13->setFont(font2);

        retranslateUi(Dialog_modbus_tcp);

        QMetaObject::connectSlotsByName(Dialog_modbus_tcp);
    } // setupUi

    void retranslateUi(QDialog *Dialog_modbus_tcp)
    {
        Dialog_modbus_tcp->setWindowTitle(QApplication::translate("Dialog_modbus_tcp", "Dialog", nullptr));
        label_8->setText(QApplication::translate("Dialog_modbus_tcp", "\346\211\223\347\273\223\346\234\272", nullptr));
        btn_connect_2->setText(QApplication::translate("Dialog_modbus_tcp", "connect", nullptr));
        btn_close_2->setText(QApplication::translate("Dialog_modbus_tcp", "close", nullptr));
        label_4->setText(QApplication::translate("Dialog_modbus_tcp", "slave_id", nullptr));
        lineEdit_salv_id_2->setStyleSheet(QApplication::translate("Dialog_modbus_tcp", "color: rgb(0, 0, 0);", nullptr));
        lineEdit_salv_id_2->setText(QApplication::translate("Dialog_modbus_tcp", "1", nullptr));
        lineEdit_port_2->setStyleSheet(QApplication::translate("Dialog_modbus_tcp", "color: rgb(0, 0, 0);", nullptr));
        lineEdit_port_2->setText(QApplication::translate("Dialog_modbus_tcp", "502", nullptr));
        lineEdit_ip_2->setStyleSheet(QApplication::translate("Dialog_modbus_tcp", "color: rgb(0, 0, 0);", nullptr));
        lineEdit_ip_2->setText(QApplication::translate("Dialog_modbus_tcp", "192.168.111", nullptr));
        label_5->setText(QApplication::translate("Dialog_modbus_tcp", "port", nullptr));
        label_6->setText(QApplication::translate("Dialog_modbus_tcp", "IP", nullptr));
        label_status_2->setText(QString());
        label_14->setText(QApplication::translate("Dialog_modbus_tcp", "\350\277\236\346\216\245\347\212\266\346\200\201", nullptr));
        label_7->setText(QApplication::translate("Dialog_modbus_tcp", "\346\215\242\347\255\222\346\234\272", nullptr));
        label_status->setText(QString());
        btn_close->setText(QApplication::translate("Dialog_modbus_tcp", "close", nullptr));
        lineEdit_port->setStyleSheet(QApplication::translate("Dialog_modbus_tcp", "color: rgb(0, 0, 0);", nullptr));
        lineEdit_port->setText(QApplication::translate("Dialog_modbus_tcp", "502", nullptr));
        lineEdit_ip->setStyleSheet(QApplication::translate("Dialog_modbus_tcp", "color: rgb(0, 0, 0);", nullptr));
        lineEdit_ip->setText(QApplication::translate("Dialog_modbus_tcp", "192.168.1.112", nullptr));
        btn_connect->setText(QApplication::translate("Dialog_modbus_tcp", "connect", nullptr));
        label->setText(QApplication::translate("Dialog_modbus_tcp", "IP", nullptr));
        label_2->setText(QApplication::translate("Dialog_modbus_tcp", "port", nullptr));
        label_3->setText(QApplication::translate("Dialog_modbus_tcp", "slave_id", nullptr));
        lineEdit_salv_id->setStyleSheet(QApplication::translate("Dialog_modbus_tcp", "color: rgb(0, 0, 0);", nullptr));
        lineEdit_salv_id->setText(QApplication::translate("Dialog_modbus_tcp", "2", nullptr));
        label_13->setText(QApplication::translate("Dialog_modbus_tcp", "\350\277\236\346\216\245\347\212\266\346\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_modbus_tcp: public Ui_Dialog_modbus_tcp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MODBUS_TCP_H
