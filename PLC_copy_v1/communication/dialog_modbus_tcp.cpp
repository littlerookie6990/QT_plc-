#include "dialog_modbus_tcp.h"
#include "ui_dialog_modbus_tcp.h"

Dialog_modbus_tcp::Dialog_modbus_tcp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_modbus_tcp)
{
    ui->setupUi(this);
    this->setWindowTitle("modbus_tcp");
    this->move(500,350);


    ui->btn_connect->setStyleSheet("QPushButton{"
                                                  "font: 20px;"
                                                  "color: rgb(0, 0, 127);"//字体颜色
                                                  " background: transparent;"//背景透明
                                                  "border-style:outset;"
                                                  " border:1px solid blue"  " }");//按钮框的线条颜色
    ui->btn_close->setStyleSheet("QPushButton{"
                                                  "font: 20px;"
                                                  "color: rgb(0, 0, 127);"//字体颜色
                                                  " background: transparent;"//背景透明
                                                  "border-style:outset;"
                                                  " border:1px solid blue"  " }");//按钮框的线条颜色
    ui->btn_connect_2->setStyleSheet("QPushButton{"
                                                  "font: 20px;"
                                                  "color: rgb(0, 0, 127);"//字体颜色
                                                  " background: transparent;"//背景透明
                                                  "border-style:outset;"
                                                  " border:1px solid blue"  " }");//按钮框的线条颜色
    ui->btn_close_2->setStyleSheet("QPushButton{"
                                                  "font: 20px;"
                                                  "color: rgb(0, 0, 127);"//字体颜色
                                                  " background: transparent;"//背景透明
                                                  "border-style:outset;"
                                                  " border:1px solid blue"  " }");//按钮框的线条颜色
    Ctx_Tcp = NULL;
    Tcp_Status = false;
}

Dialog_modbus_tcp::~Dialog_modbus_tcp()
{
    delete ui;
    //delete  Ctx_Tcp;
}

//按钮链接----------------------------------------------------------------------------------------------------------------
void Dialog_modbus_tcp::on_btn_connect_clicked()
{
    if(false == Tcp_Status)
{
    //bool res =isFastClick(ui->btn_connect,100);
    QString Ip_Tcp = ui->lineEdit_ip->text();
    Port_Tcp = ui->lineEdit_port->text().toUInt();
    Slave_Id_Tcp = ui->lineEdit_salv_id ->text().toUInt();

    qDebug()<<Ip_Tcp;//"127.0.0.1"
    qDebug()<<Ip_Tcp.toLatin1().constData();//127.0.0.1----------------------函数里是这种形式
    qDebug()<<Port_Tcp;
    qDebug()<<Slave_Id_Tcp;


    Ctx_Tcp = modbus_new_tcp(Ip_Tcp.toLatin1().constData(),Port_Tcp);
    modbus_set_slave(Ctx_Tcp,Slave_Id_Tcp );

    int bbb = modbus_connect(Ctx_Tcp);//判断是否连接

//     timeval t;
//    t.tv_sec = 0;
//    t.tv_usec = 100000;//设置超时时间为1000ms
    modbus_set_response_timeout(Ctx_Tcp,0,1000000);//设置超时时间1000ms

    if (-1 == bbb  )
    {
           modbus_free(Ctx_Tcp);
                //modbus_flush(Ctx_Tcp);//冲刷
           QMessageBox::warning(NULL, "温馨提示！", "连接失败，请重新连接！");
    }
   else if( 0 == bbb)//成功连接
     {
                 qDebug( )<< "成功连接！";
                 //ui->label_status->setText("已连接");
                 //ui->label_status->setPixmap(QPixmap(""));
                 Tcp_Status = true;//---------------------------------------判断点
     }
  }
 else  if (true == Tcp_Status)
  {
      QMessageBox::warning(NULL, "温馨提示！", "你已经连接，不要重复连接！");
      return;
  }
  else
      return ;
}

//按钮断开--------------------------------------------------------------------------------------------------------------
void Dialog_modbus_tcp::on_btn_close_clicked()
{
    if(true == Tcp_Status)
    {
        modbus_close(Ctx_Tcp);//搭配服用
        modbus_free(Ctx_Tcp);

        ui->label_status->setText("未连接");
        Tcp_Status = false;
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
void Dialog_modbus_tcp::Tcp_modbusWriteSingleCoil_05(int StartAddr, bool value)//置位SET --强制单线圈
{
    if ( true == Tcp_Status)
    {
        int reT = -1;
        reT = modbus_write_bit(Ctx_Tcp, StartAddr, value);//

        if (1 == reT)   return;
        else if(-1 == reT)
        {
            QMessageBox::warning(NULL,"温馨提示！", "写入线圈失败！");
             modbus_flush(Ctx_Tcp); //flush data
             return ;
        }
    }
    else
        return;
}
//专门作用于气缸
void Dialog_modbus_tcp::Tcp_modbusWriteSingleCoilPulse_05( int StartAddr, int time)
{
    Tcp_modbusWriteSingleCoil_05(StartAddr, true);
    Tcp_Sleep(time);
    Tcp_modbusWriteSingleCoil_05(StartAddr, false);
}

/********************************************************
 * 功能码：0x01   READ COIL STATUS;                *
 * 作用：      读取线圈状态：                                   *
 * 操作数量： 单个或多个；    位操作                     *
 * MBAP 功能码 起始地址H 起始地址L 数量H 数量L（共12字节）
*********************************************************/
//uint8_t* data_1    ----------------uint8_t tab_reg [ 64 ];---------------承载容器
void Dialog_modbus_tcp::Tcp_modbusReadCoilStatus_01(int StartAddr, int CoilNum, uint8_t* data_1)//typedef unsigned char   uint8_t;
{
    if ( true == Tcp_Status)
    {
        int reT = -1;
        reT = modbus_read_bits(Ctx_Tcp, StartAddr, CoilNum, data_1);

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
                     //QMessageBox::warning(NULL,"温馨提示！", "读取线圈失败！");
                      modbus_flush(Ctx_Tcp); //flush data
                      return ;
                 }
    }
    else
        return;
}

//读取输入触点X的状态----------------0x01也可以的
void Dialog_modbus_tcp::Tcp_modbusReadInputStatus_02(int StartAddr, int CoilNum, uint8_t* data)
{
    int reT = -1;
    reT = modbus_read_input_bits(Ctx_Tcp, StartAddr, CoilNum, data);

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
                 QMessageBox::warning(NULL,"温馨提示！", "读取触点X失败！");
                  modbus_flush(Ctx_Tcp); //flush data
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
void Dialog_modbus_tcp::Tcp_modbusWriteSingleRegister_06( int StartAddr, uint16_t value)
{
    if ( true == Tcp_Status)
    {
        int reT = -1;
        reT = modbus_write_register (Ctx_Tcp, StartAddr, value);

        if (1 == reT)   return;
        else if(-1 == reT)
        {
            QMessageBox::warning(NULL,"温馨提示！", "写入寄存器失败！");
             modbus_flush(Ctx_Tcp); //flush data
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
void Dialog_modbus_tcp::Tcp_modbusReadRegisterStatus_03(int StartAddr, int RegisterNum, uint16_t* data)  //typedef unsigned short  uint16_t;
{
    if ( true == Tcp_Status)
    {
        int reT = -1;
        reT = modbus_read_registers (Ctx_Tcp, StartAddr, RegisterNum, data);

         if (reT == RegisterNum) //成功返回线圈个数
         {
                 qDebug() <<  "Read coil status success!";

                 for (int i = 0; i < RegisterNum; ++i)
                 {
                     //data_1[i]
                     qDebug() << data[i];
                 }
          }
          else if (-1== reT)//失败返回-1
                 {
                     QMessageBox::warning(NULL,"温馨提示！", "读取寄存器失败！");
                      modbus_flush(Ctx_Tcp); //flush data
                      return ;
                 }
    }
    else
        return;
}

/***************************************************
 * 自定义延时函数
 * 作用：使用ModbusTCP读写协议时，方法使用后加延时后再读取  *
 * 后面可以使用线程中QThread::msleep()替换
***************************************************/
void Dialog_modbus_tcp::Tcp_Sleep(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while (QTime::currentTime() < dieTime) {
        QCoreApplication::processEvents(QEventLoop::AllEvents,100);
    }
}
