#ifndef QTHEAD_CAMERA_H
#define QTHEAD_CAMERA_H

#include <QObject>

#include "QDebug"
#include "QThread"//只是单纯为了获取当前线程信息


class QThead_Camera : public QObject
{
    Q_OBJECT
public:
    explicit QThead_Camera(QObject *parent = nullptr);


     void deal_Mat_Fuc();//处理数据函数

//主要是为QT4提供的，QT5可以在普通函数和槽函数一样
public slots:


signals:
     void sub_isOK_singal();//处理好的信号


};

#endif // QTHEAD_CAMERA_H
