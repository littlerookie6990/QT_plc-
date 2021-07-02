#ifndef DIALOG_MODBUS_RTU_H
#define DIALOG_MODBUS_RTU_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>

//#include"modbus.h"
#include "libmodbus/modbus-rtu.h"
#include <QTime>//用于线圈延时

namespace Ui {
class Dialog_Modbus_Rtu;
}

class Dialog_Modbus_Rtu : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Modbus_Rtu(QWidget *parent = nullptr);
    ~Dialog_Modbus_Rtu();

    bool Rtu_Status;

    //延时函数
     void Rtu_Sleep(int msec);

   //写single线圈用于气缸，启动等等
 void Rtu_modbusWriteSingleCoilPulse_05(int StartAddr, int time);//开一会再关----脉冲------------只是含了个延时
 void Rtu_modbusWriteSingleCoil_05(int StartAddr, bool value);//置位SET ---强制单线圈
 //读线圈（0~600）---读触点（0.0~1.2 等等这种形式） ---------------------------多次用到
 void Rtu_modbusReadCoilStatus_01(int StartAddr, int CoilNum, uint8_t* data);
 //读取输入状态X-------读触点x（0.0~1.2 等等这种形式）
 void Rtu_modbusReadInputStatus_02(int StartAddr, int CoilNum, uint8_t* data);
 //写single寄存器-----用于运动轴的参数
 void Rtu_modbusWriteSingleRegister_06( int StartAddr, uint16_t value);
 //读寄存器
 void Rtu_modbusReadRegisterStatus_03(int StartAddr, int RegisterNum, uint16_t* data);

private slots:
    void on_btn_connect_rtu_clicked();
    void on_btn_close_rtu_clicked();


private:
    Ui::Dialog_Modbus_Rtu *ui;

     modbus_t *Ctx_Rtu;
     QString Port_Rtu;
     int Braud_Rtu;
     int  Slave_Id_Rtu;

};

#endif // DIALOG_MODBUS_RTU_H
