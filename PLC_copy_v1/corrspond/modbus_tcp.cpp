#include "modbus_tcp.h"
#include "ui_modbus_tcp.h"
//#include <QApplication>


//#include"libmodbus/modbus.h"
Modbus_Tcp::Modbus_Tcp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modbus_tcp)
{

    ui->setupUi(this);
    tcp_status=false;
    ctx_tcp = NULL;//先为空

}


Modbus_Tcp::~Modbus_Tcp()
{
    delete ui;
}

//按钮连接
void Modbus_Tcp::on_btn_connect_clicked()
{
    //static int ret = -1;//默认失败

    //modbus_t *ctx;
    modbus_tcp_ip =ui->lineEdit_ip->text();
    modbus_tcp_port = ui->lineEdit_port->text().toUInt();

    //ctx = modbus_new_tcp(modbus_tcp_ip,modbus_tcp_port);

}

//按钮关闭
void Modbus_Tcp::on_btn_close_clicked()
{

}
