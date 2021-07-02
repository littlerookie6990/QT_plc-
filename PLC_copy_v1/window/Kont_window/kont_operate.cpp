#include "kont_operate.h"
#include "ui_kont_operate.h"

Kont_operate::Kont_operate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Kont_operate)
{
    ui->setupUi(this);
}

Kont_operate::~Kont_operate()
{
    delete ui;

    this->setWindowTitle("打结机测试");

#if 0
  this-> setWindowFlags(Qt::FramelessWindowHint);
   this->setWindowOpacity(0.8);
    QPixmap pixmap = QPixmap("D:/QT_box/try_yi_try/PLC/PLC_copy_v1/qrc/tupian/aa.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
#endif
}
