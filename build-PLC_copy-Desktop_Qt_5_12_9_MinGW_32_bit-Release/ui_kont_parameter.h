/********************************************************************************
** Form generated from reading UI file 'kont_parameter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KONT_PARAMETER_H
#define UI_KONT_PARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kont_parameter
{
public:

    void setupUi(QWidget *Kont_parameter)
    {
        if (Kont_parameter->objectName().isEmpty())
            Kont_parameter->setObjectName(QString::fromUtf8("Kont_parameter"));
        Kont_parameter->resize(640, 480);

        retranslateUi(Kont_parameter);

        QMetaObject::connectSlotsByName(Kont_parameter);
    } // setupUi

    void retranslateUi(QWidget *Kont_parameter)
    {
        Kont_parameter->setWindowTitle(QApplication::translate("Kont_parameter", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kont_parameter: public Ui_Kont_parameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KONT_PARAMETER_H
