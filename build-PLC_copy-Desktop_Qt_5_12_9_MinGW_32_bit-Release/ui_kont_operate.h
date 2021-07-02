/********************************************************************************
** Form generated from reading UI file 'kont_operate.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KONT_OPERATE_H
#define UI_KONT_OPERATE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kont_operate
{
public:
    QTabWidget *tabWidget;
    QWidget *widget;
    QPushButton *btn_Z_Up_move__puls;
    QLineEdit *lineEdit_AB_plus_Num;
    QPushButton *btn_Y_yuan_move_Plus;
    QPushButton *btn_B_move__puls;
    QLineEdit *lineEdit_Zzhou_Plus_Num;
    QPushButton *btn_X_left_move_plus;
    QLineEdit *lineEdit_Xzhou_Plus_Num;
    QPushButton *btn_A_move_plus;
    QPushButton *btn_Y_Jin__puls_move;
    QPushButton *btn_X_right_move_plus;
    QPushButton *btn_Z_Down_move_plus;
    QLineEdit *lineEdit_Yzhou_plus_Num;
    QLabel *label;
    QWidget *tab_2;
    QPushButton *pushButton_BrakeExtend_2;
    QPushButton *pushButton_FixtureStraighten_2;
    QPushButton *pushButton_BrakeRetract_2;
    QPushButton *pushButton_FixtureFlatten_2;
    QPushButton *pushButton_ClutchExtend_2;
    QPushButton *pushButton_ClutchRetract_2;
    QPushButton *pushButton_ClutchRetract_4;
    QPushButton *pushButton_ClutchExtend_4;
    QLabel *label_title;
    QPushButton *btn_operate_switch;

    void setupUi(QWidget *Kont_operate)
    {
        if (Kont_operate->objectName().isEmpty())
            Kont_operate->setObjectName(QString::fromUtf8("Kont_operate"));
        Kont_operate->resize(522, 415);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../qrc/tupian/\345\260\217\347\224\250\346\210\267.png"), QSize(), QIcon::Normal, QIcon::Off);
        Kont_operate->setWindowIcon(icon);
        tabWidget = new QTabWidget(Kont_operate);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 60, 501, 341));
        QFont font;
        font.setPointSize(14);
        tabWidget->setFont(font);
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        btn_Z_Up_move__puls = new QPushButton(widget);
        btn_Z_Up_move__puls->setObjectName(QString::fromUtf8("btn_Z_Up_move__puls"));
        btn_Z_Up_move__puls->setGeometry(QRect(20, 190, 101, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cambria"));
        font1.setPointSize(14);
        btn_Z_Up_move__puls->setFont(font1);
        btn_Z_Up_move__puls->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        lineEdit_AB_plus_Num = new QLineEdit(widget);
        lineEdit_AB_plus_Num->setObjectName(QString::fromUtf8("lineEdit_AB_plus_Num"));
        lineEdit_AB_plus_Num->setGeometry(QRect(270, 250, 113, 41));
        btn_Y_yuan_move_Plus = new QPushButton(widget);
        btn_Y_yuan_move_Plus->setObjectName(QString::fromUtf8("btn_Y_yuan_move_Plus"));
        btn_Y_yuan_move_Plus->setGeometry(QRect(140, 140, 101, 41));
        btn_Y_yuan_move_Plus->setFont(font1);
        btn_Y_yuan_move_Plus->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        btn_B_move__puls = new QPushButton(widget);
        btn_B_move__puls->setObjectName(QString::fromUtf8("btn_B_move__puls"));
        btn_B_move__puls->setGeometry(QRect(20, 250, 101, 41));
        btn_B_move__puls->setFont(font1);
        btn_B_move__puls->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        lineEdit_Zzhou_Plus_Num = new QLineEdit(widget);
        lineEdit_Zzhou_Plus_Num->setObjectName(QString::fromUtf8("lineEdit_Zzhou_Plus_Num"));
        lineEdit_Zzhou_Plus_Num->setGeometry(QRect(270, 190, 113, 41));
        btn_X_left_move_plus = new QPushButton(widget);
        btn_X_left_move_plus->setObjectName(QString::fromUtf8("btn_X_left_move_plus"));
        btn_X_left_move_plus->setGeometry(QRect(20, 80, 101, 41));
        btn_X_left_move_plus->setFont(font1);
        btn_X_left_move_plus->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        lineEdit_Xzhou_Plus_Num = new QLineEdit(widget);
        lineEdit_Xzhou_Plus_Num->setObjectName(QString::fromUtf8("lineEdit_Xzhou_Plus_Num"));
        lineEdit_Xzhou_Plus_Num->setGeometry(QRect(270, 80, 113, 41));
        btn_A_move_plus = new QPushButton(widget);
        btn_A_move_plus->setObjectName(QString::fromUtf8("btn_A_move_plus"));
        btn_A_move_plus->setGeometry(QRect(140, 250, 101, 41));
        btn_A_move_plus->setFont(font1);
        btn_A_move_plus->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        btn_Y_Jin__puls_move = new QPushButton(widget);
        btn_Y_Jin__puls_move->setObjectName(QString::fromUtf8("btn_Y_Jin__puls_move"));
        btn_Y_Jin__puls_move->setGeometry(QRect(20, 140, 101, 41));
        btn_Y_Jin__puls_move->setFont(font1);
        btn_Y_Jin__puls_move->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        btn_X_right_move_plus = new QPushButton(widget);
        btn_X_right_move_plus->setObjectName(QString::fromUtf8("btn_X_right_move_plus"));
        btn_X_right_move_plus->setGeometry(QRect(140, 80, 101, 41));
        btn_X_right_move_plus->setFont(font1);
        btn_X_right_move_plus->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        btn_Z_Down_move_plus = new QPushButton(widget);
        btn_Z_Down_move_plus->setObjectName(QString::fromUtf8("btn_Z_Down_move_plus"));
        btn_Z_Down_move_plus->setGeometry(QRect(140, 190, 101, 41));
        btn_Z_Down_move_plus->setFont(font1);
        btn_Z_Down_move_plus->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        lineEdit_Yzhou_plus_Num = new QLineEdit(widget);
        lineEdit_Yzhou_plus_Num->setObjectName(QString::fromUtf8("lineEdit_Yzhou_plus_Num"));
        lineEdit_Yzhou_plus_Num->setGeometry(QRect(270, 140, 113, 41));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 40, 51, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Alef"));
        font2.setPointSize(18);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        tabWidget->addTab(widget, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButton_BrakeExtend_2 = new QPushButton(tab_2);
        pushButton_BrakeExtend_2->setObjectName(QString::fromUtf8("pushButton_BrakeExtend_2"));
        pushButton_BrakeExtend_2->setGeometry(QRect(10, 100, 151, 51));
        pushButton_BrakeExtend_2->setMinimumSize(QSize(0, 0));
        pushButton_BrakeExtend_2->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton_BrakeExtend_2->setFont(font3);
        pushButton_BrakeExtend_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        pushButton_FixtureStraighten_2 = new QPushButton(tab_2);
        pushButton_FixtureStraighten_2->setObjectName(QString::fromUtf8("pushButton_FixtureStraighten_2"));
        pushButton_FixtureStraighten_2->setGeometry(QRect(180, 10, 151, 51));
        pushButton_FixtureStraighten_2->setMinimumSize(QSize(0, 0));
        pushButton_FixtureStraighten_2->setMaximumSize(QSize(16777215, 16777215));
        pushButton_FixtureStraighten_2->setFont(font3);
        pushButton_FixtureStraighten_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        pushButton_BrakeRetract_2 = new QPushButton(tab_2);
        pushButton_BrakeRetract_2->setObjectName(QString::fromUtf8("pushButton_BrakeRetract_2"));
        pushButton_BrakeRetract_2->setGeometry(QRect(180, 100, 151, 51));
        pushButton_BrakeRetract_2->setMinimumSize(QSize(0, 0));
        pushButton_BrakeRetract_2->setMaximumSize(QSize(16777215, 16777215));
        pushButton_BrakeRetract_2->setFont(font3);
        pushButton_BrakeRetract_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        pushButton_BrakeRetract_2->setFlat(false);
        pushButton_FixtureFlatten_2 = new QPushButton(tab_2);
        pushButton_FixtureFlatten_2->setObjectName(QString::fromUtf8("pushButton_FixtureFlatten_2"));
        pushButton_FixtureFlatten_2->setGeometry(QRect(10, 10, 151, 51));
        pushButton_FixtureFlatten_2->setMinimumSize(QSize(0, 0));
        pushButton_FixtureFlatten_2->setMaximumSize(QSize(16777215, 16777215));
        pushButton_FixtureFlatten_2->setFont(font3);
        pushButton_FixtureFlatten_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        pushButton_ClutchExtend_2 = new QPushButton(tab_2);
        pushButton_ClutchExtend_2->setObjectName(QString::fromUtf8("pushButton_ClutchExtend_2"));
        pushButton_ClutchExtend_2->setGeometry(QRect(10, 180, 151, 51));
        pushButton_ClutchExtend_2->setMinimumSize(QSize(0, 0));
        pushButton_ClutchExtend_2->setMaximumSize(QSize(16777215, 16777215));
        pushButton_ClutchExtend_2->setFont(font3);
        pushButton_ClutchExtend_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        pushButton_ClutchRetract_2 = new QPushButton(tab_2);
        pushButton_ClutchRetract_2->setObjectName(QString::fromUtf8("pushButton_ClutchRetract_2"));
        pushButton_ClutchRetract_2->setGeometry(QRect(184, 180, 141, 51));
        pushButton_ClutchRetract_2->setMinimumSize(QSize(0, 0));
        pushButton_ClutchRetract_2->setMaximumSize(QSize(16777215, 16777215));
        pushButton_ClutchRetract_2->setFont(font3);
        pushButton_ClutchRetract_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        pushButton_ClutchRetract_4 = new QPushButton(tab_2);
        pushButton_ClutchRetract_4->setObjectName(QString::fromUtf8("pushButton_ClutchRetract_4"));
        pushButton_ClutchRetract_4->setGeometry(QRect(184, 250, 141, 51));
        pushButton_ClutchRetract_4->setMinimumSize(QSize(0, 0));
        pushButton_ClutchRetract_4->setMaximumSize(QSize(16777215, 16777215));
        pushButton_ClutchRetract_4->setFont(font3);
        pushButton_ClutchRetract_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(196, 255, 244);"));
        pushButton_ClutchExtend_4 = new QPushButton(tab_2);
        pushButton_ClutchExtend_4->setObjectName(QString::fromUtf8("pushButton_ClutchExtend_4"));
        pushButton_ClutchExtend_4->setGeometry(QRect(10, 250, 151, 51));
        pushButton_ClutchExtend_4->setMinimumSize(QSize(0, 0));
        pushButton_ClutchExtend_4->setMaximumSize(QSize(16777215, 16777215));
        pushButton_ClutchExtend_4->setFont(font3);
        pushButton_ClutchExtend_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        tabWidget->addTab(tab_2, QString());
        label_title = new QLabel(Kont_operate);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(180, 10, 141, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Amiri Quran"));
        font4.setPointSize(20);
        label_title->setFont(font4);
        btn_operate_switch = new QPushButton(Kont_operate);
        btn_operate_switch->setObjectName(QString::fromUtf8("btn_operate_switch"));
        btn_operate_switch->setGeometry(QRect(410, 10, 101, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Alef"));
        font5.setPointSize(11);
        btn_operate_switch->setFont(font5);
        btn_operate_switch->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);\n"
"background-color: rgb(255, 255, 127);"));

        retranslateUi(Kont_operate);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Kont_operate);
    } // setupUi

    void retranslateUi(QWidget *Kont_operate)
    {
        Kont_operate->setWindowTitle(QApplication::translate("Kont_operate", "\346\211\223\347\273\223\346\234\272\346\265\213\350\257\225", nullptr));
        tabWidget->setStyleSheet(QApplication::translate("Kont_operate", "color: rgb(85, 0, 255);", nullptr));
        btn_Z_Up_move__puls->setText(QApplication::translate("Kont_operate", "Z\350\275\264\344\270\212\347\247\273", nullptr));
        btn_Y_yuan_move_Plus->setText(QApplication::translate("Kont_operate", "Y\350\275\264\350\277\234\346\215\242\347\255\222", nullptr));
        btn_B_move__puls->setText(QApplication::translate("Kont_operate", "\346\250\241\347\273\204A\344\275\215", nullptr));
        btn_X_left_move_plus->setText(QApplication::translate("Kont_operate", "X\350\275\264\345\267\246\347\247\273", nullptr));
        btn_A_move_plus->setText(QApplication::translate("Kont_operate", "\346\250\241\347\273\204B\344\275\215", nullptr));
        btn_Y_Jin__puls_move->setText(QApplication::translate("Kont_operate", "Y\350\275\264\350\277\221\346\215\242\347\255\222", nullptr));
        btn_X_right_move_plus->setText(QApplication::translate("Kont_operate", "X\350\275\264\345\217\263\347\247\273", nullptr));
        btn_Z_Down_move_plus->setText(QApplication::translate("Kont_operate", "Z\350\275\264\344\270\213\347\247\273", nullptr));
        label->setText(QApplication::translate("Kont_operate", "\351\242\221\347\216\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("Kont_operate", "\346\214\211\351\222\256", nullptr));
        pushButton_BrakeExtend_2->setText(QApplication::translate("Kont_operate", "\345\220\270\345\230\264\351\200\206\346\227\266\351\222\210", nullptr));
        pushButton_FixtureStraighten_2->setText(QApplication::translate("Kont_operate", "\351\243\216\346\234\272\345\205\263\351\227\255", nullptr));
        pushButton_BrakeRetract_2->setText(QApplication::translate("Kont_operate", "\345\220\270\345\230\264\351\241\272\346\227\266\351\222\210", nullptr));
        pushButton_FixtureFlatten_2->setText(QApplication::translate("Kont_operate", "\351\243\216\346\234\272\345\220\257\345\212\250", nullptr));
        pushButton_ClutchExtend_2->setText(QApplication::translate("Kont_operate", "\345\216\213\347\272\277\344\270\212\346\212\254", nullptr));
        pushButton_ClutchRetract_2->setText(QApplication::translate("Kont_operate", "\345\216\213\347\272\277\344\270\213\345\216\213", nullptr));
        pushButton_ClutchRetract_4->setText(QApplication::translate("Kont_operate", "\345\244\215\344\275\215", nullptr));
        pushButton_ClutchExtend_4->setText(QApplication::translate("Kont_operate", "\346\211\223\347\273\223\345\220\257\345\212\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Kont_operate", "\350\275\264", nullptr));
        label_title->setStyleSheet(QApplication::translate("Kont_operate", "color: rgb(85, 0, 255);", nullptr));
        label_title->setText(QApplication::translate("Kont_operate", "\346\211\223\347\273\223\346\234\272\346\265\213\350\257\225", nullptr));
        btn_operate_switch->setText(QApplication::translate("Kont_operate", "\346\215\242\347\255\222\346\234\272/\346\211\223\347\273\223\346\234\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kont_operate: public Ui_Kont_operate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KONT_OPERATE_H
