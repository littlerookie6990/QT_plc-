#include "window/log_screen.h"
#include "ui_log_screen.h"
#include<QPainter>

log_screen::log_screen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::log_screen)
{
    ui->setupUi(this);
    this->setWindowTitle("登录界面");
    //this->resize(1000,700);
#if 0
    //标签图片
    ui->label_people->setPixmap(QPixmap("../QT_box/try_yi_try/PLC/PLC_copy_v1/qrc/tupian/大用户.jpg"));
    ui->label_people->setScaledContents(true);
#endif

#if 0
    ui->label_people->setStyleSheet("color: rgb(244, 67, 67);"
                                                          "background-color: rgba(255, 255, 255, 0);"//白色
                                                          " background: transparent;"//背景颜色”
                                                          "font: 18pt Segoe UI;");
#endif

    //按钮样式
   ui->btn_cancel->setStyleSheet("QPushButton{"
                                               "font: 24px;"
                                               "color: rgb(0, 0, 127);"
                                               " background: transparent;"//背景透明
                                               "border-style:outset;" " border:1px solid white"  " }");
   ui->btn_log->setStyleSheet("QPushButton{"
                                               "font: 24px;"
                                               "color: rgb(0, 0, 127);"//字体颜色
                                               " background: transparent;"//背景透明
                                               "border-style:outset;"
                                               " border:1px solid white"  " }");//按钮框的线条颜色
}

log_screen::~log_screen()
{
    delete ui;
}

//登录按钮
void log_screen::on_btn_log_clicked()
{
        QString user = ui->lineEdit_user->text();
        QString Paswd = ui->lineEdit_password->text();
        if (user == "123"&&Paswd == "456")
        {
            //QMessageBox::information(this,"OK","Right Input");
            emit  signals_open_mainwin();
        }
        else
        {
            QMessageBox::information(this,"Error","Wrong Input");

            ui->lineEdit_user->clear();
            ui->lineEdit_password->clear();
            ui->lineEdit_user->setFocus();//将光标移到用户名框内
        }
}

//取消按钮
void log_screen::on_btn_cancel_clicked()
{
    QMessageBox::information(this,"提示","请正确输入信息");
    ui->lineEdit_user->clear();
    ui->lineEdit_password->clear();
    ui->lineEdit_user->setFocus();//将光标移到用户名框内
}

//转换背景颜色为透明
QImage log_screen::ConvertImageToTransparent(QImage image/*QPixmap qPixmap*/)
{
image = image.convertToFormat(QImage::Format_ARGB32);
union myrgb
{
uint rgba;
uchar rgba_bits[4];
};
myrgb* mybits =(myrgb*) image.bits();
int len = image.width()*image.height();
while(len --> 0)
{
mybits->rgba_bits[3] = (mybits->rgba== 0xFF000000)?0:255;
mybits++;
}
return image;
}
