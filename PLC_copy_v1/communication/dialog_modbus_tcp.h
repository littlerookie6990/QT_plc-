#ifndef DIALOG_MODBUS_TCP_H
#define DIALOG_MODBUS_TCP_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>

#include"libmodbus/modbus.h"//上级目录在pro中
#include <QTime>//用于线圈延时

namespace Ui {
class Dialog_modbus_tcp;
}

class Dialog_modbus_tcp : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_modbus_tcp(QWidget *parent = nullptr);
    ~Dialog_modbus_tcp();
     bool Tcp_Status;


    //延时函数
     void Tcp_Sleep(int msec);

   //写single线圈用于气缸，启动等等
 void Tcp_modbusWriteSingleCoilPulse_05(int StartAddr, int time);//开一会再关----脉冲------------只是含了个延时
 void Tcp_modbusWriteSingleCoil_05(int StartAddr, bool value);//置位SET ---强制单线圈
 //读线圈状态（0~600）---------------------------多次用到
 void Tcp_modbusReadCoilStatus_01(int StartAddr, int CoilNum, uint8_t* data);
 //读取输入状态X-------读触点x（0.0~1.2 等等这种形式）
 void Tcp_modbusReadInputStatus_02(int StartAddr, int CoilNum, uint8_t* data);
 //写single寄存器-----用于运动轴的参数
 void Tcp_modbusWriteSingleRegister_06( int StartAddr, uint16_t value);
 //读寄存器
 void Tcp_modbusReadRegisterStatus_03(int StartAddr, int RegisterNum, uint16_t* data);


private slots:
    void on_btn_connect_clicked();
    void on_btn_close_clicked();

private:
    Ui::Dialog_modbus_tcp *ui;

    modbus_t *Ctx_Tcp;
    QString Ip_Tcp;
    int  Port_Tcp;
    int  Slave_Id_Tcp;


};

#endif // DIALOG_MODBUS_TCP_H
