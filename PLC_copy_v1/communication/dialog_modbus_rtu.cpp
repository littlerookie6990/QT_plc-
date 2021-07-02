#include "dialog_modbus_rtu.h"
#include "ui_dialog_modbus_rtu.h"
#include <QPalette>


Dialog_Modbus_Rtu::Dialog_Modbus_Rtu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Modbus_Rtu)
{
    ui->setupUi(this);
    this->setWindowTitle("modbus_rtu");
    this->move(500,350);

//
     ui->btn_connect_rtu->setStyleSheet("QPushButton{"
                                                   "font: 20px;"
                                                   "color: rgb(0, 0, 127);"//字体颜色
                                                   " background: transparent;"//背景透明
                                                   "border-style:outset;"
                                                   " border:1px solid blue"  " }");//按钮框的线条颜色
     ui->btn_close_rtu->setStyleSheet("QPushButton{"
                                                   "font: 20px;"
                                                   "color: rgb(0, 0, 127);"//字体颜色
                                                   " background: transparent;"//背景透明
                                                   "border-style:outset;"
                                                   " border:1px solid blue"  " }");//按钮框的线条颜色

     ui->btn_connect_rtu_2->setStyleSheet("QPushButton{"
                                                   "font: 20px;"
                                                   "color: rgb(0, 0, 127);"//字体颜色
                                                   " background: transparent;"//背景透明
                                                   "border-style:outset;"
                                                   " border:1px solid blue"  " }");//按钮框的线条颜色
     ui->btn_close_rtu_2->setStyleSheet("QPushButton{"
                                                   "font: 20px;"
                                                   "color: rgb(0, 0, 127);"//字体颜色
                                                   " background: transparent;"//背景透明
                                                   "border-style:outset;"
                                                   " border:1px solid blue"  " }");//按钮框的线条颜色
  //
    Ctx_Rtu = NULL;
    Rtu_Status = false;

}

Dialog_Modbus_Rtu::~Dialog_Modbus_Rtu()
{
    delete ui;
}

//连接按钮
void Dialog_Modbus_Rtu::on_btn_connect_rtu_clicked()
{
    if(false == Rtu_Status)
{
        //端口
        switch (ui->comboBox_portname->currentIndex())
        {
        case 0:
             Port_Rtu = "com1";break;//不是大写，我日了狗了，qt的是大写
        case 1:
             Port_Rtu = "com2";break;
        case 2:
             Port_Rtu = "com3";break;
        case 3:
             Port_Rtu = "com4";break;
        case 4:
             Port_Rtu = "com5";break;
        case 5:
             Port_Rtu = "com6";break;
        case 6:
            Port_Rtu = "com7";break;
        case 7:
             Port_Rtu = "com8";break;
        default:
            break;
        }
        //波特率
        switch(ui->comboBox_braudrate->currentIndex())
        {
        case 0:
            Braud_Rtu = 115200;break;
        case 1:
            Braud_Rtu = 57600;break;
        case 2:
            Braud_Rtu = 38400;break;
        case 3:
            Braud_Rtu = 19200;break;
        case 4:
            Braud_Rtu = 9600;break;
        case 5:
            Braud_Rtu = 4800;break;
        case 6:
            Braud_Rtu = 2400;break;
        case 7:
            Braud_Rtu = 1200;break;
        default:
            break;
        }

    Slave_Id_Rtu = ui->lineEdit_sklave_id_Rtu->text().toUInt();//从站号在界面获取
    qDebug()<<Slave_Id_Rtu;
    qDebug()<<Braud_Rtu;
    qDebug()<<Port_Rtu;
    qDebug()<<Port_Rtu.toLatin1().constData() ;

    Ctx_Rtu = modbus_new_rtu(Port_Rtu.toLatin1().constData(), Braud_Rtu, 'N', 8 , 1);//------------------------------------portname有问题啊
    //modbus_rtu_set_serial_mode(Ctx_Rtu, MODBUS_RTU_RS485);

    modbus_set_slave(Ctx_Rtu,Slave_Id_Rtu );//从站号

    int aaa =  modbus_connect(Ctx_Rtu);

   //超时设置------设置应答延时
   //     timeval t;
   //    t.tv_sec = 0;
   //    t.tv_usec = 100000;//设置超时时间为1000ms
   modbus_set_response_timeout(Ctx_Rtu, 0 , 100000);

    if ( -1 == aaa)
    {
           //modbus_free(Ctx_Rtu);
          modbus_flush(Ctx_Rtu);//冲刷-----一半的数据
           QMessageBox::warning(NULL, "温馨提示！", "连接失败，请重新连接！");
           return;//退出函数
    }
   else if( 0 == aaa)//成功连接
     {
                 qDebug( )<< "成功连接！";
                 ui->label_status_rtu->setText("已连接");
                 Rtu_Status = true;//---------------------------------------判断点
                 return;
     }
    else
        return ;
}

 else  if (true == Rtu_Status)
  {
      QMessageBox::warning(NULL, "温馨提示！", "你已经连接，不要重复连接！");
      return;
  }
  else
    return ;
}


//按钮关闭
void Dialog_Modbus_Rtu::on_btn_close_rtu_clicked()
{
    if(true == Rtu_Status)
    {
        modbus_close(Ctx_Rtu);//搭配服用
        modbus_free(Ctx_Rtu);

        ui->label_status_rtu->setText("未连接");
         Rtu_Status = false;
    }
    else
     {
        QMessageBox::warning(NULL, "温馨提示！", "你还没连接！");
        return;
     }
}

/********************************************************
 * 功能码：0x05   WRITE SINGLE COIL;         *
 * 作用： 写入线圈状态;                                    *
 * 操作数量： 单个；         位操作                    *
 * MBAP 功能码 输出地址H 输出地址L 输出值H 输出值L（共12字节）
*********************************************************/
void Dialog_Modbus_Rtu::Rtu_modbusWriteSingleCoil_05(int StartAddr, bool value)//置位SET --强制单线圈
{
    if ( true == Rtu_Status)
    {
        int reT = -1;
        reT = modbus_write_bit(Ctx_Rtu, StartAddr, value);//

        if (1 == reT)   return;
        else if(-1 == reT)
        {
            QMessageBox::warning(NULL,"温馨提示！", "写入线圈失败！");
             modbus_flush(Ctx_Rtu); //flush data
             return ;
        }
    }
    else
        return;
}
//专门作用于气缸
void Dialog_Modbus_Rtu::Rtu_modbusWriteSingleCoilPulse_05( int StartAddr, int time)
{
    Rtu_modbusWriteSingleCoil_05(StartAddr, true);
    Rtu_Sleep(time);
    Rtu_modbusWriteSingleCoil_05(StartAddr, false);
}

/********************************************************
 * 功能码：0x01   READ COIL STATUS;                *
 * 作用：      读取线圈状态：                                   *
 * 操作数量： 单个或多个；    位操作                     *
 * MBAP 功能码 起始地址H 起始地址L 数量H 数量L（共12字节）
*********************************************************/
//uint8_t* data_1    ----------------uint8_t tab_reg [ 64 ];---------------承载容器
void Dialog_Modbus_Rtu::Rtu_modbusReadCoilStatus_01(int StartAddr, int CoilNum, uint8_t* data_1)//typedef unsigned char   uint8_t;
{
    if ( true == Rtu_Status)
    {
        int reT = -1;
        reT = modbus_read_bits(Ctx_Rtu, StartAddr, CoilNum, data_1);

         if (reT == CoilNum) //成功返回线圈个数
         {
                 qDebug() <<  "Read coil status success!";

                 for (int i = 0; i < CoilNum; ++i)
                 {
                     //data_1[i]
                     qDebug() << data_1[i];
                 }
          }
          else if (-1== reT)//失败返回-1
                 {
                    // QMessageBox::warning(NULL,"温馨提示！", "读取线圈失败！");
                      modbus_flush(Ctx_Rtu); //flush data
                      return ;
                 }
    }
    else
        return;
}

//读取输入触点X的状态
void Dialog_Modbus_Rtu::Rtu_modbusReadInputStatus_02(int StartAddr, int CoilNum, uint8_t* data)
{
    int reT = -1;
    reT = modbus_read_input_bits(Ctx_Rtu, StartAddr, CoilNum, data);

     if (reT == CoilNum) //成功返回线圈个数
     {
             qDebug() <<  "Read coil status success!";

             for (int i = 0; i < CoilNum; ++i)
             {
                 //data_1[i]
                 qDebug() << data[i];
             }
      }
      else if (-1== reT)//失败返回-1
             {
                 QMessageBox::warning(NULL,"温馨提示！", "读取触点x失败！");
                  modbus_flush(Ctx_Rtu); //flush data
                  return ;
             }

else
    return;

}

/********************************************************
 * 功能码：0x06   WRITE SINGLE COIL                      *
 * 作用： 写单个保持寄存器                                 *
 * 操作数量： 单个；         字操作                        *
 * MBAP 功能码 寄存器地址H 寄存器地址L 寄存器值H 寄存器值L（共12字节）
********************************************************/
void Dialog_Modbus_Rtu::Rtu_modbusWriteSingleRegister_06( int StartAddr, uint16_t value)
{
    if ( true == Rtu_Status)
    {
        int reT = -1;
        reT = modbus_write_register (Ctx_Rtu, StartAddr, value);

        if (1 == reT)   return;
        else if(-1 == reT)
        {
            QMessageBox::warning(NULL,"温馨提示！", "写入寄存器失败！");
             modbus_flush(Ctx_Rtu); //flush data
             return ;
        }
    }
    else
        return;
}

/********************************************************
 * 功能码：0x01   READ COIL STATUS;                *
 * 作用：      读取寄存器状态：                                   *
 * 操作数量： 单个或多个；    字操作                     *
 * MBAP 功能码 起始地址H 起始地址L 数量H 数量L（共12字节）
*********************************************************/
//uint16_t* data_2     ----------uint16_t tab_reg [ 64 ]; -----------------------承载容器
void Dialog_Modbus_Rtu::Rtu_modbusReadRegisterStatus_03(int StartAddr, int RegisterNum, uint16_t* data_2)  //typedef unsigned short  uint16_t;
{
    if ( true == Rtu_Status)
    {
        int reT = -1;
        reT = modbus_read_registers (Ctx_Rtu, StartAddr, RegisterNum, data_2);

         if (reT == RegisterNum) //成功返回线圈个数
         {
                 qDebug() <<  "Read coil status success!";

                 for (int i = 0; i < RegisterNum; ++i)
                 {
                     //data_1[i]
                     qDebug() << data_2[i];
                 }
          }
          else if (-1== reT)//失败返回-1
                 {
                     QMessageBox::warning(NULL,"温馨提示！", "读取寄存器失败！");
                      modbus_flush(Ctx_Rtu); //flush data
                      return ;
                 }
    }
    else
        return;
}

/***************************************************
 * 自定义延时函数
 * 作用：使用ModbusTCP读写协议时，方法使用后加延时后再读取  *-----------------------------rtu与tcp的读写一样的，在一次链接之后
 * 后面可以使用线程中QThread::msleep()替换
***************************************************/
void Dialog_Modbus_Rtu::Rtu_Sleep(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while (QTime::currentTime() < dieTime) {
        QCoreApplication::processEvents(QEventLoop::AllEvents,100);
    }
}



