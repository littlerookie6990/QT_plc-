#ifndef CAMERA_H
#define CAMERA_H

#include <QWidget>
#include <QWidget>

#include <QDebug>
#include<QMessageBox>
#include<QComboBox>


//摄像头三大部件
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>

#include<QCameraInfo>//设备名称下拉对话框
#include <QFileDialog>//文件对话框,手动保存

#include <QCameraViewfinderSettings>

#include "Thread/qthead_camera.h"
#include"QThread"
namespace Ui {
class Camera;
}

class Camera : public QWidget
{
    Q_OBJECT

public:
    explicit Camera(QWidget *parent = nullptr);
    ~Camera();

     void setfblComobox(QCamera *camera);//分辨率处理函数


private slots:
    void on_comboBox_Device_Name_activated(int index);//设备名称
    void on_btn_cut_Image_clicked();//拍照指令
    void on_imageCaptured(int id, const QImage &preview);//一受到指令就截图保存
    void on_fbl_activated(int index);//分辨率选择
    void on_btn_open_camera_clicked();//开挂相机
    void on_btn_remove_Image_clicked();

private:
    Ui::Camera *ui;
    bool button_Status;

    QCamera *camera;
    QCameraViewfinder *viewfind;
    QCameraImageCapture *imageCapture;

    QList<QCameraInfo> cameras;

    QList<QSize> mResSize = {};//分辨率List 定义
    QComboBox *box;


    //子线程处理数据
    QThead_Camera *myT;
    QThread *Thread_Camera;

signals:
    void  startThread_Signal();//启动子线程的信号
    //void  stopThread_Signal();//关闭

    void  deal_Mat_Fuc_Signal();//引发子线程处理的信号
};

#endif // CAMERA_H
