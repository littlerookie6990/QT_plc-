#ifndef MODBUS_TCP_H
#define MODBUS_TCP_H

#include <QDialog>

#include "libmodbus/modbus.h"


namespace Ui {
class modbus_tcp;
}

class Modbus_Tcp : public QDialog
{
    Q_OBJECT

public:
    explicit Modbus_Tcp(QWidget *parent = nullptr);
    ~Modbus_Tcp();



private slots:
    void on_btn_connect_clicked();

    void on_btn_close_clicked();

private:

    Ui::modbus_tcp *ui;



    modbus_t  *ctx_tcp  ;//通信的对象，以后传消息就用这个对象;
    int server_id;//从站号

    QString modbus_tcp_ip ;
    int modbus_tcp_port ;
    bool tcp_status;
};

#endif // MODBUS_TCP_H
