#include "qthead_camera.h"


#include"opencv2/opencv.hpp"//头文件加上级路径
using namespace cv;
//using namespace std;

QThead_Camera::QThead_Camera(QObject *parent) : QObject(parent)
{


}

//线程处理函数---
//线程是后台运行操作，是用来数据处理的，
//一定要注意，线程处理函数的内部，"一定不允许操作图形界面“
void QThead_Camera::deal_Mat_Fuc()
{
    Mat a;
    qDebug()<<"子线程号:  "<<QThread::currentThread();

    Mat image = imread("D:/picture/a.jpg");//实例化一个Mat对象,这里使用的是局部路径，图片和工程文件放在同一目录（不是输出文件的目录）
    //assert(read.data);//如果数据为空就终止执行
    //namedWindow("山",CV_WINDOW_AUTOSIZE);//建立一个窗口，大小自适应图片
    threshold(image,a , 127, 255, THRESH_BINARY);//二值化阈值处理

   imshow("pixmap", image);
   waitKey();


    emit sub_isOK_singal();//处理完信号
}
