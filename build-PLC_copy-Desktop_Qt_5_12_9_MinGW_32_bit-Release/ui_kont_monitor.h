/********************************************************************************
** Form generated from reading UI file 'kont_monitor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KONT_MONITOR_H
#define UI_KONT_MONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kont_monitor
{
public:

    void setupUi(QWidget *Kont_monitor)
    {
        if (Kont_monitor->objectName().isEmpty())
            Kont_monitor->setObjectName(QString::fromUtf8("Kont_monitor"));
        Kont_monitor->resize(640, 480);

        retranslateUi(Kont_monitor);

        QMetaObject::connectSlotsByName(Kont_monitor);
    } // setupUi

    void retranslateUi(QWidget *Kont_monitor)
    {
        Kont_monitor->setWindowTitle(QApplication::translate("Kont_monitor", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kont_monitor: public Ui_Kont_monitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KONT_MONITOR_H
