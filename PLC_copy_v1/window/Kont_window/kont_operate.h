#ifndef KONT_OPERATE_H
#define KONT_OPERATE_H

#include"communication/dialog_modbus_rtu.h"
#include"communication/dialog_modbus_tcp.h"

#include <QWidget>

namespace Ui {
class Kont_operate;
}

class Kont_operate : public QWidget
{
    Q_OBJECT

public:
    explicit Kont_operate(QWidget *parent = nullptr);
    ~Kont_operate();

private:
    Ui::Kont_operate *ui;

   Dialog_Modbus_Rtu *w1_modbus_tcp;

};

#endif // KONT_OPERATE_H
