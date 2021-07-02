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
#include <qvideowidget.h>

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
    QLabel *label_4;
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

    void setupUi(QWidget *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName(QString::fromUtf8("Camera"));
        Camera->resize(797, 618);
        line = new QFrame(Camera);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(473, 0, 20, 621));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        btn_cut_Image = new QPushButton(Camera);
        btn_cut_Image->setObjectName(QString::fromUtf8("btn_cut_Image"));
        btn_cut_Image->setGeometry(QRect(580, 200, 80, 20));
        comboBox_Device_Name = new QComboBox(Camera);
        comboBox_Device_Name->setObjectName(QString::fromUtf8("comboBox_Device_Name"));
        comboBox_Device_Name->setGeometry(QRect(90, 540, 141, 22));
        label = new QLabel(Camera);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(530, 60, 31, 16));
        comboBox_Ratio = new QComboBox(Camera);
        comboBox_Ratio->setObjectName(QString::fromUtf8("comboBox_Ratio"));
        comboBox_Ratio->setGeometry(QRect(90, 580, 141, 22));
        lineEdit_Up_Down_Z = new QLineEdit(Camera);
        lineEdit_Up_Down_Z->setObjectName(QString::fromUtf8("lineEdit_Up_Down_Z"));
        lineEdit_Up_Down_Z->setGeometry(QRect(570, 140, 113, 20));
        btn_open_camera = new QPushButton(Camera);
        btn_open_camera->setObjectName(QString::fromUtf8("btn_open_camera"));
        btn_open_camera->setGeometry(QRect(270, 540, 91, 31));
        label_4 = new QLabel(Camera);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(610, 590, 51, 16));
        lineEdit_head_back_Y = new QLineEdit(Camera);
        lineEdit_head_back_Y->setObjectName(QString::fromUtf8("lineEdit_head_back_Y"));
        lineEdit_head_back_Y->setGeometry(QRect(570, 100, 113, 20));
        label_6 = new QLabel(Camera);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(530, 140, 31, 16));
        label_3 = new QLabel(Camera);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 580, 41, 16));
        Vedio_Area = new QVideoWidget(Camera);
        Vedio_Area->setObjectName(QString::fromUtf8("Vedio_Area"));
        Vedio_Area->setGeometry(QRect(10, 20, 461, 471));
        lineEdit_Left_Right_X = new QLineEdit(Camera);
        lineEdit_Left_Right_X->setObjectName(QString::fromUtf8("lineEdit_Left_Right_X"));
        lineEdit_Left_Right_X->setGeometry(QRect(570, 60, 113, 20));
        label_cut_iamge_num = new QLabel(Camera);
        label_cut_iamge_num->setObjectName(QString::fromUtf8("label_cut_iamge_num"));
        label_cut_iamge_num->setGeometry(QRect(500, 330, 41, 21));
        label_5 = new QLabel(Camera);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(530, 100, 31, 16));
        imageview = new QLabel(Camera);
        imageview->setObjectName(QString::fromUtf8("imageview"));
        imageview->setGeometry(QRect(500, 360, 291, 211));
        label_2 = new QLabel(Camera);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 540, 41, 16));
        line_2 = new QFrame(Camera);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 500, 481, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        btn_remove_Image = new QPushButton(Camera);
        btn_remove_Image->setObjectName(QString::fromUtf8("btn_remove_Image"));
        btn_remove_Image->setGeometry(QRect(680, 200, 80, 20));
        label_7 = new QLabel(Camera);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(550, 20, 141, 20));

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
        label_4->setText(QApplication::translate("Camera", "\346\210\252\345\233\276\344\275\215\347\275\256", nullptr));
        lineEdit_head_back_Y->setText(QApplication::translate("Camera", "24", nullptr));
        label_6->setText(QApplication::translate("Camera", "\344\270\212\344\270\213Z", nullptr));
        label_3->setText(QApplication::translate("Camera", "\345\210\206\350\276\250\347\216\207", nullptr));
        lineEdit_Left_Right_X->setText(QApplication::translate("Camera", "12", nullptr));
        label_cut_iamge_num->setText(QApplication::translate("Camera", "0", nullptr));
        label_5->setText(QApplication::translate("Camera", "\345\211\215\345\220\216Y", nullptr));
        imageview->setText(QString());
        label_2->setText(QApplication::translate("Camera", "\346\221\204\345\203\217\345\244\264", nullptr));
        btn_remove_Image->setText(QApplication::translate("Camera", "remove", nullptr));
        label_7->setText(QApplication::translate("Camera", "\346\221\204\345\203\217\345\244\264\344\270\216\346\241\266\347\232\204\347\233\270\345\257\271\344\275\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
