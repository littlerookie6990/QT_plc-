#include "camera.h"
#include "ui_camera.h"

Camera::Camera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Camera)
{
    ui->setupUi(this);
    this->setWindowTitle("相机");

    //=======================================================================子线程模块
    // 分配空间---------不能指定父对象--------把函数处理对象挂载在真正的子线程上对象上
    myT = new QThead_Camera;
    // 分配空间----------在主线程上创建子线程
    Thread_Camera = new  QThread(this);
    //核心--真正的挂载
    myT->moveToThread(Thread_Camera);
    //打印
    qDebug()<<"主线程号:  "<<QThread::currentThread();
    //开启线程
 connect(this, &Camera::startThread_Signal,
 [=]()
    {
        Thread_Camera->start();
        emit deal_Mat_Fuc_Signal();
});

     //主---->次-------目的进入子线程处理函数
    connect(this ,&Camera::deal_Mat_Fuc_Signal, myT,&QThead_Camera::deal_Mat_Fuc);
    //次----->主------目的结束子线程
    connect(myT,&QThead_Camera::sub_isOK_singal,
            [=]()
      {
        Thread_Camera->quit();//这个“很温柔”，会等你把当前线程的事情处理完，在结束
        Thread_Camera->wait();//结束线程，回收资源是需要时间的
});

    //========================================================================qt自带相机模块
    ui->btn_open_camera->setText("打开相机");
    button_Status = false;//按钮状态

     QComboBox *cameraType = new QComboBox();
     box = ui->comboBox_Ratio;
     cameraType = ui->comboBox_Device_Name;
     cameraType->clear();

      cameras = QCameraInfo::availableCameras();
     foreach(const QCameraInfo &cameraInfo, cameras)
     {
         qDebug() << "CameraInfo:" << cameraInfo;
         cameraType->addItem(cameraInfo.description());
     }

//第一步
//    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
//        foreach(const QCameraInfo &cameraInfo, cameras)
//        {
//            qDebug() << "CameraInfo:" << cameraInfo;
//        }

     //添加内容----初始化为空
     camera = new QCamera();
     viewfind = new QCameraViewfinder();
     imageCapture = new QCameraImageCapture(nullptr);//QCameraImageCapture这个属性，即可实现截图
     //viewfind->show();//单独显示相机窗口
     //camera->setViewfinder(viewfind);

     connect(imageCapture, SIGNAL(imageCaptured(int, QImage)), this, SLOT(on_imageCaptured(int, QImage)));
     setfblComobox(camera);
}

//打开和关闭相机------------------------------------------------------------------------------------------------------
void Camera::on_btn_open_camera_clicked()
{
    if (true == button_Status)
    {
        button_Status = false;
        ui->btn_open_camera->setText("打开相机");
        camera->stop();
        viewfind->close();//单独显示相机窗口
    }
    else if (false == button_Status)
    {
    //ui->dispaly_video_area->show();//单独显示相机窗口
    //m_pImageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile);
    //m_pCamera->setViewfinder(m_pViewfinder);//设置取景器
    //m_pCamera->setCaptureMode(QCamera::CaptureStillImage);//设置捕捉模式为视频

    camera->start();
    viewfind->show();//单独显示相机窗口
    button_Status = true;
    ui->btn_open_camera->setText("关闭相机");

    }
}

//设备名称---------------下拉框----------------------------------------------------------------------------------------------
void Camera::on_comboBox_Device_Name_activated(int index)
{
        index = ui->comboBox_Device_Name->currentIndex();
        qDebug()<<"Index"<< index <<": "<< ui->comboBox_Device_Name->currentText();

        camera->stop();
        camera = new QCamera(cameras[index]);
        camera->setCaptureMode(QCamera::CaptureStillImage);//QCamera::CaptureStillImage设置摄像头的模式，可以抓取静态图像
        camera->setViewfinder(viewfind);//设置显示的窗体
        viewfind->setParent(ui->Vedio_Area);
        imageCapture = new QCameraImageCapture(camera);//用摄像头初始化一个QCameraImageCapture用来截图
        camera->start();
        connect(imageCapture, SIGNAL(imageCaptured(int, QImage)), this, SLOT(on_imageCaptured(int, QImage)));//截图并显示
        setfblComobox(camera);
}

//分辨率设置-----------下拉框----------------------------------------------------------------------------------------------
void Camera::on_fbl_activated(int index)
{
    index = ui->comboBox_Ratio->currentIndex();
    qDebug()<<"Index"<< index <<": "<< ui->comboBox_Ratio->currentText();
    qDebug()<<"mResSize:"<<mResSize[index];
    //设置摄像头参数
    QCameraViewfinderSettings set;
    set.setResolution(mResSize[index]);
    camera->setViewfinderSettings(set);
}

//拍照----------在拍照之后开启线程-----------------------------------------------------------------------------------------------------------------
void Camera::on_btn_cut_Image_clicked()
{
    qDebug()<<"ScreenShot";
    imageCapture->capture();//释放拍照的指令

    emit startThread_Signal();
}

//截图显示在标签上-------------------------------------------------------------------------------------------------------
void Camera::on_imageCaptured(int id, const QImage &preview)
{
    ui->imageview->setPixmap(QPixmap::fromImage(preview));
    ui->imageview->setScaledContents(true);// 图片自动适应label大小

    //QImage::Format format = image.format();//返回图像格式
    //qDebug()<<(int)format;

    //保存图片到指定位置----------------------要求一个文件夹按顺序的方式进行排列
//    char image_name[13];
//    static int picNum = 1;//好处是初始化一次，可以保存很多次
//    sprintf(image_name, "%s%d%s", "D:/picture", ++picNum, ".jpg" );
//    //imwrite(image_name,im);

    static int Num = 1;
    const QPixmap *pixmap_move = ui->imageview->pixmap();
    const QPixmap *pixmap_stable = ui->imageview->pixmap();

    pixmap_stable->save("D:/picture/a.jpg");//一张图片，只会依次覆盖

    QString line =("D:/picture/move/"+QString::number(Num)+".jpg");//路径在变化，不会覆盖
    pixmap_move->save(line);

    ui->label_cut_iamge_num->setText(QString::number(Num));//显示数字在界面是第几张
    Num++;
}

//分辨率设置--------------------------------------------------------------------------------------------------------------
void Camera::setfblComobox(QCamera *camera)
{
    mResSize.clear();
    mResSize = camera->supportedViewfinderResolutions();
    box->clear();
    int i=0;
    foreach (QSize msize, mResSize)
    {
       qDebug()<<msize;
       box->addItem(QString::number(msize.width(),10)+"*"+QString::number(msize.height(),10), i++);
    }
    //摄像头支持分辨率打印
    box->setCurrentIndex(i-1);
}

//remove label
void Camera::on_btn_remove_Image_clicked()
{
    ui->imageview->clear();
}

//------------------------------------------------------释放内存对象
Camera::~Camera()
{
    delete ui;
}
