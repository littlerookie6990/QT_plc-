/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_Camera
{
public:
    QFrame *line;
    QPushButton *btn_cut_Image;
    QComboBox *comboBox_Device_Name;
    QLabel *label;
    QComboBox *comboBox_Ratio;
    QLineEdit *lineEdit_Up_Down_Z;
    QPushButton *btn_open_camera;
    QLineEdit *lineEdit_head_back_Y;
    QLabel *label_6;
    QLabel *label_3;
    QVideoWidget *Vedio_Area;
    QLineEdit *lineEdit_Left_Right_X;
    QLabel *label_cut_iamge_num;
    QLabel *label_5;
    QLabel *imageview;
    QLabel *label_2;
    QFrame *line_2;
    QPushButton *btn_remove_Image;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_8;

    void setupUi(QWidget *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName(QString::fromUtf8("Camera"));
        Camera->resize(634, 515);
        Camera->setStyleSheet(QString::fromUtf8("QWiDget {border-image: url(:/z/back3.jpg);}"));
        line = new QFrame(Camera);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(370, 0, 20, 511));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        btn_cut_Image = new QPushButton(Camera);
        btn_cut_Image->setObjectName(QString::fromUtf8("btn_cut_Image"));
        btn_cut_Image->setGeometry(QRect(390, 160, 80, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Alef"));
        font.setPointSize(12);
        btn_cut_Image->setFont(font);
        btn_cut_Image->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        comboBox_Device_Name = new QComboBox(Camera);
        comboBox_Device_Name->setObjectName(QString::fromUtf8("comboBox_Device_Name"));
        comboBox_Device_Name->setGeometry(QRect(70, 390, 141, 25));
        label = new QLabel(Camera);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 40, 51, 31));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        comboBox_Ratio = new QComboBox(Camera);
        comboBox_Ratio->setObjectName(QString::fromUtf8("comboBox_Ratio"));
        comboBox_Ratio->setGeometry(QRect(70, 430, 141, 25));
        lineEdit_Up_Down_Z = new QLineEdit(Camera);
        lineEdit_Up_Down_Z->setObjectName(QString::fromUtf8("lineEdit_Up_Down_Z"));
        lineEdit_Up_Down_Z->setGeometry(QRect(460, 120, 113, 25));
        btn_open_camera = new QPushButton(Camera);
        btn_open_camera->setObjectName(QString::fromUtf8("btn_open_camera"));
        btn_open_camera->setGeometry(QRect(230, 390, 91, 31));
        btn_open_camera->setFont(font);
        btn_open_camera->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        lineEdit_head_back_Y = new QLineEdit(Camera);
        lineEdit_head_back_Y->setObjectName(QString::fromUtf8("lineEdit_head_back_Y"));
        lineEdit_head_back_Y->setGeometry(QRect(460, 80, 113, 25));
        label_6 = new QLabel(Camera);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(390, 120, 51, 21));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        label_3 = new QLabel(Camera);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 430, 51, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        Vedio_Area = new QVideoWidget(Camera);
        Vedio_Area->setObjectName(QString::fromUtf8("Vedio_Area"));
        Vedio_Area->setGeometry(QRect(10, 10, 361, 361));
        Vedio_Area->setStyleSheet(QString::fromUtf8("border:1px solid blue"));
        lineEdit_Left_Right_X = new QLineEdit(Camera);
        lineEdit_Left_Right_X->setObjectName(QString::fromUtf8("lineEdit_Left_Right_X"));
        lineEdit_Left_Right_X->setGeometry(QRect(460, 40, 113, 25));
        label_cut_iamge_num = new QLabel(Camera);
        label_cut_iamge_num->setObjectName(QString::fromUtf8("label_cut_iamge_num"));
        label_cut_iamge_num->setGeometry(QRect(420, 210, 16, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Alef"));
        font1.setPointSize(14);
        label_cut_iamge_num->setFont(font1);
        label_cut_iamge_num->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        label_5 = new QLabel(Camera);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(390, 80, 51, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        imageview = new QLabel(Camera);
        imageview->setObjectName(QString::fromUtf8("imageview"));
        imageview->setGeometry(QRect(390, 240, 231, 221));
        imageview->setStyleSheet(QString::fromUtf8(" border:1px solid blue"));
        label_2 = new QLabel(Camera);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 390, 51, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        line_2 = new QFrame(Camera);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(-10, 370, 391, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        btn_remove_Image = new QPushButton(Camera);
        btn_remove_Image->setObjectName(QString::fromUtf8("btn_remove_Image"));
        btn_remove_Image->setGeometry(QRect(490, 159, 80, 31));
        btn_remove_Image->setFont(font);
        btn_remove_Image->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_7 = new QLabel(Camera);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(430, 10, 91, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Alef"));
        font2.setPointSize(16);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        label_4 = new QLabel(Camera);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(390, 210, 21, 20));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        label_8 = new QLabel(Camera);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(440, 210, 21, 20));
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));

        retranslateUi(Camera);

        QMetaObject::connectSlotsByName(Camera);
    } // setupUi

    void retranslateUi(QWidget *Camera)
    {
        Camera->setWindowTitle(QApplication::translate("Camera", "Form", nullptr));
        btn_cut_Image->setText(QApplication::translate("Camera", "\346\213\215\347\205\247", nullptr));
        label->setText(QApplication::translate("Camera", "\345\267\246\345\217\263X", nullptr));
        lineEdit_Up_Down_Z->setText(QApplication::translate("Camera", "33", nullptr));
        btn_open_camera->setText(QApplication::translate("Camera", "\346\211\223\345\274\200\347\233\270\346\234\272", nullptr));
        lineEdit_head_back_Y->setText(QApplication::translate("Camera", "24", nullptr));
        label_6->setText(QApplication::translate("Camera", "\344\270\212\344\270\213Z", nullptr));
        label_3->setText(QApplication::translate("Camera", "\345\210\206\350\276\250\347\216\207", nullptr));
        lineEdit_Left_Right_X->setText(QApplication::translate("Camera", "12", nullptr));
        label_cut_iamge_num->setText(QApplication::translate("Camera", "0", nullptr));
        label_5->setText(QApplication::translate("Camera", "\345\211\215\345\220\216Y", nullptr));
        imageview->setText(QString());
        label_2->setText(QApplication::translate("Camera", "\346\221\204\345\203\217\345\244\264", nullptr));
        btn_remove_Image->setText(QApplication::translate("Camera", "\346\270\205\351\231\244", nullptr));
        label_7->setText(QApplication::translate("Camera", "\347\233\270\345\257\271\344\275\215\347\275\256", nullptr));
        label_4->setText(QApplication::translate("Camera", "\347\254\254", nullptr));
        label_8->setText(QApplication::translate("Camera", "\345\274\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
