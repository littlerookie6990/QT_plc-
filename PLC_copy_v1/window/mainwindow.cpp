#include "window/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
  //================================window===================================================

   //this->setWindowFlags(Qt::FramelessWindowHint);//去掉外框

    //定义工作窗口-----------------------------------------------------------------------
    ui->setupUi(this);
    this->setWindowTitle("换桶机上位机");
    this->setWindowIcon(QIcon("../title.ico"));//在exe加图标

    //分配空间-------------------------------------------------------------登录窗口
    w_log = new  log_screen();
    //登录子窗口---------------具体窗口定义在自己的类里面实现----他人只负责创建对象进行调用
    //w_log->show();

    //切换两个界面--------登录窗口与主界面
    connect(w_log,&log_screen::signals_open_mainwin,this,&MainWindow::deal_open_logscreen);
    connect(ui->actiona_exchangeclient,&QAction::triggered,
    [=]()
    {
       w_log->show();
       this->hide();
    }  );

    //分配空间------------------------------------------------------------相机窗口
    w_camera = new  Camera();
    connect(ui->actiona_camera, &QAction::triggered,
            [=]()
    {
        w_camera->show();
        //ui->actiona_modbusrtu->setText("aaaaa");
        //qDebug()<<"被按下";
    }  );

    //分配空间-------------------------------------------------------菜单栏，modbus_tcp-在工作窗口里
  w_modbus_tcp = new  Dialog_modbus_tcp(this);
  w_modbus_rtu = new   Dialog_Modbus_Rtu(this);

     //connect(ui->btn_auto,QPushButton::clicked,this,MainWindow::switch_page);

//==========================================modbus_tcp/rtu通信设置================================
    //调用对话窗口modbus_tcp
    connect(ui->actionb_modbustcp,&QAction::triggered,
            [=]()
    {
        w_modbus_tcp->show();
        //ui->actiona_modbusrtu->setText("aaaaa");
        //qDebug()<<"被按下";
    }  );
     //调用对话窗口modbus_rtu
    connect(ui->actiona_modbusrtu,&QAction::triggered,
            [=]()
    {
        w_modbus_rtu->show();
        //ui->actiona_modbusrtu->setText("aaaaa");
        //qDebug()<<"被按下";
    }  );
 //==========================================manual 画面========================
//zhou_continue---read register flag
    Flag_zhou_continue = true;//要求只去按一次，终身受益
    connect(this, &MainWindow::signal_zhou_continue,this, &MainWindow::deal_zhou_continue);

 //==========================================功能参数 画面========================
//fuction——parameter  ---------speed
    Flag_Fuc_parameter = true;
    connect(this,&MainWindow::signal_Fuc_parameter,this, &MainWindow::deal_Fuction_parameter);//---------------槽函数还没有去定义呢？\
//==========================================MONITOR  IO   监控状态画面========================
    //Btn_Status_monitor = false;
    FLag_modbus_status = 0;

    //三个指示灯
    Image_Close =new QImage;
    Image_Open=new QImage;
    Image_Warning=new QImage;

    //X  16x4   Y  16x2
   Monitor_Status_SS = new  uint8_t[64];//分配了
   Monitor_Status_QGandZhou = new uint8_t [32];

    monitor_sensor_Timer = new QTimer(this);
    //QTimer *monitor_qigang_Timer;
    //QTimer *monitor_zhou_Timer;
    connect(monitor_sensor_Timer, &QTimer::timeout, this, &MainWindow::deal_Timer);//触发扫描函数

#if 0
    //主界面
    ui->label_mian_window->setPixmap(QPixmap("D:/QT_box/try_yi_try/PLC/PLC_copy_v1/qrc/tupian/mainwindow.png"));
    ui->label_mian_window->setScaledContents(true);
    ui->label_mian_icon->setPixmap(QPixmap(":/z/logo.jpg"));
    ui->label_mian_icon->setScaledContents(true);

    //自动画面
    ui->label_picture->setPixmap(QPixmap("D:/QT_box/try_yi_try/PLC/PLC_copy_v1/qrc/tupian/huantongji.png"));
    ui->label_picture->setScaledContents(true);
#endif
    //显示系统时间
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), SLOT(time_update()));
    timer->start(1000); //1s执行一次,定时器
#if 0
    //一级菜单按钮
    ui->btn_auto->setIcon(QIcon(":/z/auto1.png"));//按钮图标
    Button_Bar_stylesheet(ui->btn_auto);
    ui->btn_manual->setIcon(QIcon(":/z/hand.png"));
    Button_Bar_stylesheet(ui->btn_manual);
    ui->btn_fuc_parameter->setIcon(QIcon(":/z/set.png"));
     Button_Bar_stylesheet(ui->btn_fuc_parameter);
    ui->btn_warning->setIcon(QIcon(":/z/warning.png"));
    Button_Bar_stylesheet(ui->btn_warning);
    ui->btn_monitor->setIcon(QIcon(":/z/mo.png"));
     Button_Bar_stylesheet(ui->btn_manual);
    ui->btn_com->setIcon(QIcon(":/z/com.png"));
    Button_Bar_stylesheet(ui->btn_com);
    ui->btn_system_update->setIcon(QIcon(":/z/update.png"));
    Button_Bar_stylesheet(ui->btn_system_update);
    //二级菜单
#if 0
    ui->btn_manual_stop->setIcon(QIcon(":/z/stop1.png"));
    Button_Bar_stylesheet(ui->btn_auto);
   
    ui->btn_manual_qigang->setIcon(QIcon(":/z/qibeng.png"));
    ui->btn_manual_qigang->setStyleSheet("QPushButton{"
                                                  "background-color:rgbs(0,0,0,60)"
                                                  "color: rgb(255, 255, 255);"
                                                  "border-style:outset;"
                                                  "border-radius:16px"    "}"
                                     "QPushButton:hover{"
                                                  "background-color:rgb(45,104,125);"
                                                  "border-style:insert;"     "}"
                                     "QPushButton:checked{"
                                                 "background-color:rgb(6,99,130);"
                                                 "color:blue;"                    "}"               );
    ui->btn_manual_test_run->setIcon(QIcon(":/z/test.png"));
    ui->btn_manual_test_run->setStyleSheet("QPushButton{"
                                                  "background-color:rgbs(0,0,0,60)"
                                                  "color: rgb(255, 255, 255);"
                                                  "border-style:outset;"
                                                  "border-radius:16px"    "}"
                                     "QPushButton:hover{"
                                                  "background-color:rgb(45,104,125);"
                                                  "border-style:insert;"     "}"
                                     "QPushButton:checked{"
                                                 "background-color:rgb(6,99,130);"
                                                 "color:blue;"                    "}"                );
    ui->btn_manual_zhou_plus->setIcon(QIcon(":/z/dianji1.png"));
    ui->btn_manual_zhou_plus->setStyleSheet("QPushButton{"
                                                  "background-color:rgbs(0,0,0,60)"
                                                  "color: rgb(255, 255, 255);"
                                                  "border-style:outset;"
                                                  "border-radius:16px"    "}"
                                     "QPushButton:hover{"
                                                  "background-color:rgb(45,104,125);"
                                                  "border-style:insert;"     "}"
                                     "QPushButton:checked{"
                                                 "background-color:rgb(6,99,130);"
                                                 "color:blue;"                    "}"               );
    ui->btn_manual_zhou_continue->setIcon(QIcon(":/z/dianji1.png"));
    ui->btn_manual_zhou_continue->setStyleSheet("QPushButton{"
                                                  "background-color:rgbs(0,0,0,60)"
                                                  "color: rgb(255, 255, 255);"
                                                  "border-style:outset;"
                                                  "border-radius:16px"    "}"
                                     "QPushButton:hover{"
                                                  "background-color:rgb(45,104,125);"
                                                  "border-style:insert;"     "}"
                                     "QPushButton:checked{"
                                                 "background-color:rgb(6,99,130);"
                                                 "color:blue;"                    "}"             );
#endif
#endif
}

MainWindow::~MainWindow()
{
    delete ui;
    delete  w_log;
}
//界面显示系统时间时间
void MainWindow:: time_update()
{
        QDateTime time = QDateTime::currentDateTime();
        QString str = time.toString("yyyy-MM-dd hh:mm:ss ddd");
        ui->label_system_time->setText(str);
}

//=============================================登录界面切换==============================================================
void MainWindow::deal_open_logscreen()
{
     w_log->hide();
    this->show();//相当于当前类的默认对象
}

//========================================垃圾代码，触发不同stackwideget-=======================================
void MainWindow::switch_Big_page()
{
         QPushButton *button = qobject_cast<QPushButton*>(sender());//得到按下的按钮的指针
#if 0
        if(button==ui->pushButton_home)
            ui->stackedWidget->setCurrentIndex(0);//根据按下的button按索引显示相应的页面
        else if(button==ui->pushButton_home_2 )
            ui->stackedWidget->setCurrentIndex(0);
        else if(button==ui->pushButton_home_3)
            ui->stackedWidget->setCurrentIndex(0);
        else if(button==ui->pushButton_home_4)
            ui->stackedWidget->setCurrentIndex(0);
        else if(button==ui->pushButton_home_5)
            ui->stackedWidget->setCurrentIndex(0);
#endif
         if(button==ui->btn_auto)
            ui->stackedWidget->setCurrentIndex(0);
        else if(button==ui->btn_manual)
            ui->stackedWidget->setCurrentIndex(1);
        else if(button==ui->btn_fuc_parameter)
            ui->stackedWidget->setCurrentIndex(2);
        else if(button==ui->btn_warning)
            ui->stackedWidget->setCurrentIndex(3);
        else if(button==ui->btn_monitor)
            ui->stackedWidget->setCurrentIndex(4);
        else if(button==ui->btn_com)
           ui->stackedWidget->setCurrentIndex(5);
         else if(button==ui->btn_system_update)
            ui->stackedWidget->setCurrentIndex(6);
         else
             return;
}
//-----------^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^-----------------------------------------

//一级菜单和二级菜单按钮
void MainWindow::Button_Bar_stylesheet(QPushButton *Btn)
{
   Btn->setStyleSheet("QPushButton{"
                                                  "background-color:rgbs(0,0,0,60)"
                                                  "color: rgb(255, 255, 255);"
                                                  "border-style:outset;"
                                                  "border-radius:16px"    "}"
                                     "QPushButton:hover{"
                                                  "background-color:rgb(45,104,125);"
                                                  "border-style:insert;"     "}"
                                     "QPushButton:checked{"
                                                 "background-color:rgb(6,99,130);"
                                                 "color:blue;"                    "}"                      );
}

//功能按钮1--赋值样式表无图标无底色
void MainWindow::Button_fuc1_stylesheet(QPushButton *Btn)
{
     Btn->setStyleSheet("QPushButton{"
                                                      "background:transparent"
                                                      "color: rgb(0, 0, 0);"
                                                      "border-style:outset;"
                                                      "border:1px solid blue;"
                                                      "border-radius:16px"    "}"
                                                      "QPushButton:hover{"
                                                      "background-color:rgb(45,104,125);"
                                                      "border-style:insert;"     "}"
                                                      "QPushButton:checked{"
                                                      "background-color:rgb(6,99,130);"
                                                      "color:blue;"                    "}"             );
}

//主界面
void MainWindow::on_pushButton_clicked()
{
    switch_Big_page();

}
//按钮1-------自动画面
void MainWindow::on_btn_auto_clicked()
{
    switch_Big_page();
}
//按钮2------手动画面
void MainWindow::on_btn_manual_clicked()
{
    switch_Big_page();


#if 0
        //气缸点动按钮
      ui->pushButton_FixtureFlatten_2->setStyleSheet("QPushButton{"
                                                        "background:transparent"
                                                        "color: rgb(0, 0, 0);"
                                                        "border-style:outset;"
                                                        "border:1px solid blue;"
                                                        "border-radius:16px"    "}"
                                                        "QPushButton:hover{"
                                                        "background-color:rgb(45,104,125);"
                                                        "border-style:insert;"     "}"
                                                        "QPushButton:checked{"
                                                        "background-color:rgb(6,99,130);"
                                                        "color:blue;"                    "}"    );
      ui->pushButton_FixtureStraighten_2->setStyleSheet("QPushButton{"
                                                        "background:transparent"
                                                        "color: rgb(0, 0, 0);"
                                                        "border-style:outset;"
                                                        "border:1px solid blue;"
                                                        "border-radius:16px"    "}"
                                                        "QPushButton:hover{"
                                                        "background-color:rgb(45,104,125);"
                                                        "border-style:insert;"     "}"
                                                        "QPushButton:checked{"
                                                        "background-color:rgb(6,99,130);"
                                                        "color:blue;"                    "}"    );
      ui->pushButton_BobbinRetract_2->setStyleSheet("QPushButton{"
                                                                                    "background:transparent"
                                                                                    "color: rgb(0, 0, 0);"
                                                                                    "border-style:outset;"
                                                                                    "border:1px solid blue;"
                                                                                    "border-radius:16px"    "}"
                                                                                    "QPushButton:hover{"
                                                                                    "background-color:rgb(45,104,125);"
                                                                                    "border-style:insert;"     "}"
                                                                                    "QPushButton:checked{"
                                                                                    "background-color:rgb(6,99,130);"
                                                                                    "color:blue;"                    "}"    );
      ui->pushButton_BobbinExtend_2->setStyleSheet("QPushButton{"
                                                        "background:transparent"
                                                        "color: rgb(0, 0, 0);"
                                                        "border-style:outset;"
                                                        "border:1px solid blue;"
                                                        "border-radius:16px"    "}"
                                                        "QPushButton:hover{"
                                                        "background-color:rgb(45,104,125);"
                                                        "border-style:insert;"     "}"
                                                        "QPushButton:checked{"
                                                        "background-color:rgb(6,99,130);"
                                                        "color:blue;"                    "}"    );
      ui->pushButton_BraceExtend_2->setStyleSheet("QPushButton{"
                                                        "background:transparent"
                                                        "color: rgb(0, 0, 0);"
                                                        "border-style:outset;"
                                                        "border:1px solid blue;"
                                                        "border-radius:16px"    "}"
                                                        "QPushButton:hover{"
                                                        "background-color:rgb(45,104,125);"
                                                        "border-style:insert;"     "}"
                                                        "QPushButton:checked{"
                                                        "background-color:rgb(6,99,130);"
                                                        "color:blue;"                    "}"    );
      ui->pushButton_BraceRetract_2->setStyleSheet("QPushButton{"
                                                        "background:transparent"
                                                        "color: rgb(0, 0, 0);"
                                                        "border-style:outset;"
                                                        "border:1px solid blue;"
                                                        "border-radius:16px"    "}"
                                                        "QPushButton:hover{"
                                                        "background-color:rgb(45,104,125);"
                                                        "border-style:insert;"     "}"
                                                        "QPushButton:checked{"
                                                        "background-color:rgb(6,99,130);"
                                                        "color:blue;"                    "}"    );
      ui->pushButton_FixtureFlatten_2->setStyleSheet("QPushButton{"
                                                        "background:transparent"
                                                        "color: rgb(0, 0, 0);"
                                                        "border-style:outset;"
                                                        "border:1px solid blue;"
                                                        "border-radius:16px"    "}"
                                                        "QPushButton:hover{"
                                                        "background-color:rgb(45,104,125);"
                                                        "border-style:insert;"     "}"
                                                        "QPushButton:checked{"
                                                        "background-color:rgb(6,99,130);"
                                                        "color:blue;"                    "}"    );
      ui->pushButton_FixtureFlatten_2->setStyleSheet("QPushButton{"
                                                        "background:transparent"
                                                        "color: rgb(0, 0, 0);"
                                                        "border-style:outset;"
                                                        "border:1px solid blue;"
                                                        "border-radius:16px"    "}"
                                                        "QPushButton:hover{"
                                                        "background-color:rgb(45,104,125);"
                                                        "border-style:insert;"     "}"
                                                        "QPushButton:checked{"
                                                        "background-color:rgb(6,99,130);"
                                                        "color:blue;"                    "}"    );

#endif
}
//按钮3
void MainWindow::on_btn_fuc_parameter_clicked()
{
    switch_Big_page();
}
//按钮4-----报警画面
void MainWindow::on_btn_warning_clicked()
{
    switch_Big_page();
}
//按钮5-------监控IO口状态
void MainWindow::on_btn_monitor_clicked()
{
    switch_Big_page();
}
//通讯界面
void MainWindow::on_btn_com_clicked()
{
    switch_Big_page();
}
//系统维护画面
void MainWindow::on_btn_com_4_clicked()
{
   switch_Big_page();
}
//系统升级画面
void MainWindow::on_btn_system_update_clicked()
{
    switch_Big_page();
}
//关闭软件窗口
void MainWindow::on_pushButton_off_clicked()
{
    this->close();
}

//--------------小界面----手动画面---------连续点动的速度设置
void MainWindow::switch_Small_page_manual()
{
    QPushButton *button_1 = qobject_cast<QPushButton*>(sender());//得到按下的按钮的指针
   if(button_1==ui->btn_manual_qigang)
       ui->stackwidget_manual->setCurrentIndex(0);//根据按下的button按索引显示相应的页面
   else if(button_1==ui->btn_manual_test_run)
       ui->stackwidget_manual->setCurrentIndex(1);
   else if (button_1==ui->btn_manual_zhou_continue )
   {
         ui->stackwidget_manual->setCurrentIndex(2);
         if ( true == Flag_zhou_continue )
         {
             emit  signal_zhou_continue();

             Flag_zhou_continue = false;//只给它一次机会
         }
   }
   else if(button_1==ui->btn_manual_zhou_plus )
       ui->stackwidget_manual->setCurrentIndex(3);
   else
       return;
}
//-----------^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^---------------
//按钮气缸
void MainWindow::on_btn_manual_qigang_clicked()
{
    switch_Small_page_manual();
}
//按钮运动轴--脉冲数定点
void MainWindow::on_btn_manual_zhou_plus_clicked()
{
    switch_Small_page_manual();
}
//按钮连续点动
void MainWindow::on_btn_manual_zhou_continue_clicked()
{
    switch_Small_page_manual();
}
//测试运行
void MainWindow::on_btn_manual_test_run_clicked()
{
    switch_Small_page_manual();
}
//--------------小界面----监控画面---------
void MainWindow::switch_Small_page_monitor()
{
    QPushButton *button_1 = qobject_cast<QPushButton*>(sender());//得到按下的按钮的指针
   if(button_1==ui->btn_sensor_monitor)
       ui->stackedWidget_monitor  ->setCurrentIndex(0);//根据按下的button按索引显示相应的页面
   else if(button_1==ui->btn_qigang_moniter )
       ui->stackedWidget_monitor->setCurrentIndex(1);
   else if(button_1==ui->btn_Zhou_monitor)
       ui->stackedWidget_monitor->setCurrentIndex(2);
   else
       return;
}
//-----------------^^^^^^^^^^^^^^^^^^^--------------------------------------------
//传感器画面
void MainWindow::on_btn_sensor_monitor_clicked()
{
    switch_Small_page_monitor();
}
//气缸画面
void MainWindow::on_btn_qigang_moniter_clicked()
{
     switch_Small_page_monitor();
}
//轴的画面
void MainWindow::on_btn_Zhou_monitor_clicked()
{
     switch_Small_page_monitor();
}
//--------------小界面----通讯设置界面------------------------------
void MainWindow::switch_Small_page_communication()
{
    QPushButton *button_1 = qobject_cast<QPushButton*>(sender());//得到按下的按钮的指针
   if(button_1==ui->pushButton_open_RTU)
   {
       ui->stackWidget_com->setCurrentIndex(0);//根据按下的button按索引显示相应的页面
       //ui->stackWidget_com->addWidget(w_modbus_rtu);

       w_modbus_tcp->close();
       w_camera->close();
       w_modbus_rtu->show();
   }
   else if(button_1==ui->pushButton_open_TCP )
       {
    //   ui->stackWidget_com->addWidget(w_modbus_tcp);
       ui->stackWidget_com->setCurrentIndex(1);

       w_modbus_rtu->close();
       w_camera->close();
       w_modbus_tcp->show();
       }
   #if 1
   else if(button_1==ui->pushButton_open_Camer)
   {
     //  ui->stackWidget_com->addWidget(w_camera);
       ui->stackWidget_com->setCurrentIndex(2);

       w_modbus_rtu->close();
       w_modbus_tcp->close();
       w_camera->show();
   }
   #endif
   else
       return;
      // ui->stackWidget_com->addWidget(w_camera);
}

//-----------------^^^^^^^^^^^^^^^^^^^--------------------------------------------
//RTU
void MainWindow::on_pushButton_open_RTU_clicked()
{
   switch_Small_page_communication();
  //  ui->stackWidget_com->setCurrentIndex(0);

}
//TCP
void MainWindow::on_pushButton_open_TCP_clicked()
{
    switch_Small_page_communication();
}
//摄像头画面
void MainWindow::on_pushButton_open_Camer_clicked()
{
    switch_Small_page_communication();
}

//--------------小界面----功能参数画面--------速度设置
void MainWindow::switch_Small_page_Fucparameter()
{
    QPushButton *button_1 = qobject_cast<QPushButton*>(sender());//得到按下的按钮的指针

   if(button_1==ui->btn_func_parameter_speed)
   {
       ui->stackedWidget_parameter  ->setCurrentIndex(0);//根据按下的button按索引显示相应的页面
       if ( true == Flag_zhou_continue )
       {
           emit signal_Fuc_parameter();
           //Flag_Fuc_parameter = false;//只给它一次机会进入并触发
       }
   }
   else if(button_1==ui->btn_press )
       ui->stackedWidget_parameter->setCurrentIndex(1);
       return;
}
//-------------------^^^^^^^^^^^^^^^^^^^^^^^-------------------------------------------
//速度设置画面
void MainWindow::on_btn_func_parameter_speed_clicked()
{
    switch_Small_page_Fucparameter();
}
//备用画面
void MainWindow::on_btn_111_clicked()
{
    switch_Small_page_Fucparameter();
}
//压力参数
void MainWindow::on_btn_press_clicked()
{
    switch_Small_page_Fucparameter();
}
//=======================================================================================
//======                                                                  功能参数画面                                                                          ========
//=======================================================================================
//直接在linedit显示初始的速度值
void MainWindow::deal_Fuction_parameter()
{
  if (true == Flag_Fuc_parameter){
     //uint16_t *zhou_continue_speed = new  uint16_t(14) ;
     //起始500   X-500  Y-502  Z-504 AB-506  XIECHA-508 (disable) ShaTong-510
    //uint16_t  zhou_continu_speed_a[12];//这样只能让接受一个word的2个byte
    uint16_t  Register_X_Auto_jog_spee[2],
                   Register_Y_Auto_jog_spee[2],
                   Register_Z_Auto_jog_spee[2],
                   Register_AB_Auto_jog_spee[2],
                   Register_ShaTong_Auto_jog_spee[2],
                   Register_ChengZhua_jog_spee;

//    uint16_t  Register_X_Continue_jog_spee,//连续点动的初始速度
//                   Register_Y_Continue_jog_spee,
//                   Register_Z_Continue_jog_spee,
//                   Register_AB_Continue_jog_spee,
//                   Register_ShaTong_Continue_jog_spee;

    if (true == w_modbus_tcp->Tcp_Status)
    {
        //在功能参数画面的速度设置
        w_modbus_tcp->Tcp_modbusReadRegisterStatus_03(Register_X_Auto_speed,2, Register_X_Auto_jog_spee );
        ui->lineEdit_Xzhou_Auto_speed->setText(QString::number(Register_X_Auto_jog_spee[0]));
        ui->lineEdit_Xzhou_jog_speed->setText(QString::number(Register_X_Auto_jog_spee[1]));

        w_modbus_tcp->Tcp_modbusReadRegisterStatus_03(Register_Y_Auto_speed,2, Register_Y_Auto_jog_spee );
        ui->lineEdit_Yzhou_Auto_speed->setText(QString::number(Register_Y_Auto_jog_spee[0]));
        ui->lineEdit_Yzhou_jog_speed->setText(QString::number(Register_Y_Auto_jog_spee[1]));

        w_modbus_tcp->Tcp_modbusReadRegisterStatus_03(Register_Z_Auto_speed,2, Register_Z_Auto_jog_spee );
        ui->lineEdit_Zzhou_Auto_speed->setText(QString::number(Register_Z_Auto_jog_spee[0]));
        ui->lineEdit_Zzhou_jog_speed->setText(QString::number(Register_Z_Auto_jog_spee[1]));

        w_modbus_tcp->Tcp_modbusReadRegisterStatus_03(Register_AB_Auto_speed,2, Register_AB_Auto_jog_spee );
        ui->lineEdit_AB_Auto_speed->setText(QString::number(Register_AB_Auto_jog_spee[0]));
        ui->lineEdit_AB_jog_speed->setText(QString::number(Register_AB_Auto_jog_spee[1]));

        w_modbus_tcp->Tcp_modbusReadRegisterStatus_03(Register_ShaTong_Auto_speed,2, Register_ShaTong_Auto_jog_spee );
        ui->lineEdit_shatong_Auto_speed->setText(QString::number(Register_ShaTong_Auto_jog_spee[0]));
        ui->lineEdit_shatong_jog_speed->setText(QString::number(Register_ShaTong_Auto_jog_spee[1]));

        w_modbus_tcp->Tcp_modbusReadRegisterStatus_03(Register_ChengZhua_jog_speed,1, &Register_ChengZhua_jog_spee );
        ui->lineEdit_chengzhua_jog_speed->setText(QString::number(Register_ChengZhua_jog_spee));
    }
    else if(true ==w_modbus_rtu->Rtu_Status )
    {
        w_modbus_rtu->Rtu_modbusReadRegisterStatus_03(Register_X_Auto_speed,2, Register_X_Auto_jog_spee );
        ui->lineEdit_Xzhou_Auto_speed->setText(QString::number(Register_X_Auto_jog_spee[0]));
        ui->lineEdit_Xzhou_jog_speed->setText(QString::number(Register_X_Auto_jog_spee[1]));

        w_modbus_rtu->Rtu_modbusReadRegisterStatus_03(Register_Y_Auto_speed,2, Register_Y_Auto_jog_spee );
        ui->lineEdit_Yzhou_Auto_speed->setText(QString::number(Register_Y_Auto_jog_spee[0]));
        ui->lineEdit_Yzhou_jog_speed->setText(QString::number(Register_Y_Auto_jog_spee[1]));

        w_modbus_rtu->Rtu_modbusReadRegisterStatus_03(Register_Z_Auto_speed,2, Register_Z_Auto_jog_spee );
        ui->lineEdit_Zzhou_Auto_speed->setText(QString::number(Register_Z_Auto_jog_spee[0]));
        ui->lineEdit_Zzhou_jog_speed->setText(QString::number(Register_Z_Auto_jog_spee[1]));

        w_modbus_rtu->Rtu_modbusReadRegisterStatus_03(Register_AB_Auto_speed,2, Register_AB_Auto_jog_spee );
        ui->lineEdit_AB_Auto_speed->setText(QString::number(Register_AB_Auto_jog_spee[0]));
        ui->lineEdit_AB_jog_speed->setText(QString::number(Register_AB_Auto_jog_spee[1]));

        w_modbus_rtu->Rtu_modbusReadRegisterStatus_03(Register_ShaTong_Auto_speed,2, Register_ShaTong_Auto_jog_spee );
        ui->lineEdit_shatong_Auto_speed->setText(QString::number(Register_ShaTong_Auto_jog_spee[0]));
        ui->lineEdit_shatong_jog_speed->setText(QString::number(Register_ShaTong_Auto_jog_spee[1]));

        w_modbus_rtu->Rtu_modbusReadRegisterStatus_03(Register_ChengZhua_jog_speed,1, &Register_ChengZhua_jog_spee );
        ui->lineEdit_chengzhua_jog_speed->setText(QString::number(Register_ChengZhua_jog_spee));
    }
    else
     {
        QMessageBox::warning(NULL, "温馨提示","你还没有连接！");
        return;
     }
    Flag_Fuc_parameter = false;
  }
 else
      return;
}
//======================================速度设置画面
void MainWindow::Write_speed_parameter(int Start_Address, uint16_t Speed_Value)
{
    if (Speed_Value == 0)
    {
        QMessageBox::warning(this, "Warning", "X轴速度值不要为空!");
        return;
    }
    else
    {
        if (true == w_modbus_tcp->Tcp_Status)
        {
             w_modbus_tcp->Tcp_modbusWriteSingleRegister_06(Start_Address, Speed_Value);
        }
        else if(true ==w_modbus_rtu->Rtu_Status )
        {
            w_modbus_rtu->Rtu_modbusWriteSingleRegister_06(Start_Address, Speed_Value);
        }
        else
         {
            QMessageBox::warning(NULL, "温馨提示","你还没有连接！");
            return;
         }
     }
}
//写入速度值----界面按钮触发
void MainWindow::on_btn_Fucparameter_write_speedvalue_clicked()
{
    //jog speed
    uint16_t  X_jog_speed;
            X_jog_speed= ui->lineEdit_Xzhou_jog_speed->text().toUInt();
    uint16_t  Y_jog_Speed;
           Y_jog_Speed = ui->lineEdit_Yzhou_jog_speed->text().toUInt();
    uint16_t  Z_jog_Speed;
           Z_jog_Speed = ui->lineEdit_Zzhou_jog_speed->text().toUInt();
    uint16_t AB_jog_Speed;
           AB_jog_Speed = ui->lineEdit_AB_jog_speed->text().toUInt();
    uint16_t ShaTong_jog_Speed;
           ShaTong_jog_Speed = ui->lineEdit_shatong_jog_speed->text().toUInt();
     uint16_t ChengZhua_jog_Speed;
           ChengZhua_jog_Speed = ui->lineEdit_chengzhua_jog_speed->text().toUInt();

           //Auto speed
           uint16_t  X_Auto_speed;
           X_Auto_speed= ui->lineEdit_Xzhou_Auto_speed->text().toUInt();
           uint16_t  Y_Auto_Speed;
           Y_Auto_Speed = ui->lineEdit_Yzhou_Auto_speed->text().toUInt();
           uint16_t  Z_Auto_Speed;
           Z_Auto_Speed = ui->lineEdit_Zzhou_Auto_speed->text().toUInt();
           uint16_t AB_Auto_Speed;
           AB_Auto_Speed = ui->lineEdit_AB_Auto_speed->text().toUInt();
           uint16_t ShaTong_Auto_Speed;
           ShaTong_Auto_Speed = ui->lineEdit_shatong_Auto_speed->text().toUInt();
           //点动
           Write_speed_parameter(Register_X_jog_speed, X_jog_speed);
           Write_speed_parameter(Register_Y_jog_speed, Y_jog_Speed);
           Write_speed_parameter(Register_Z_jog_speed, Z_jog_Speed);
           Write_speed_parameter(Register_AB_jog_speed, AB_jog_Speed);
           Write_speed_parameter(Register_ShaTong_jog_speed, ShaTong_jog_Speed);
           Write_speed_parameter(Register_ChengZhua_jog_speed, ChengZhua_jog_Speed);
           //自动
           Write_speed_parameter(Register_X_Auto_speed, X_Auto_speed);
           Write_speed_parameter(Register_Y_Auto_speed, Y_Auto_Speed);
           Write_speed_parameter(Register_Z_Auto_speed, Z_Auto_Speed);
           Write_speed_parameter(Register_AB_Auto_speed, AB_Auto_Speed);
           Write_speed_parameter(Register_ShaTong_Auto_speed, ShaTong_Auto_Speed);
}

//=======================================================================================
//======                                                                  手动画面                                                                         ========
//=======================================================================================
//=====================================气缸画面
void MainWindow::Two_link(int a, int b)//-------------------------------------服务气缸
{
    if (true == w_modbus_tcp->Tcp_Status)
    w_modbus_tcp->Tcp_modbusWriteSingleCoilPulse_05(a,b);
    else if(true ==w_modbus_rtu->Rtu_Status )
    w_modbus_rtu->Rtu_modbusWriteSingleCoilPulse_05(a,b);
    else
     {
        QMessageBox::warning(NULL, "温馨提示","你还没有连接！");
        return;
     }
}

//急停M600
void MainWindow::on_btn_manual_stop_clicked()
{
    Two_link(Bobbin_EmergencyStop, 100);
}
//----------------------------------------------------------------------------------------------------
//治具---翻平
void MainWindow::on_pushButton_FixtureFlatten_2_clicked()
{
    Two_link(Bobbin_FixtureFlatten, 100);
}
//翻直
void MainWindow::on_pushButton_FixtureStraighten_2_clicked()
{
    Two_link(Bobbin_FixtureStraighten, 100);
}

//推纱气缸------推出
void MainWindow::on_pushButton_BobbinExtend_2_clicked()
{
    Two_link(Bobbin_BobbinExtend, 100);
}
//收回
void MainWindow::on_pushButton_BobbinRetract_2_clicked()
{
    Two_link(Bobbin_BobbinRetract, 100);
}

//刹车----------推出
void MainWindow::on_pushButton_BrakeExtend_2_clicked()
{
    Two_link(Bobbin_BrakeExtend, 100);
}
//收回
void MainWindow::on_pushButton_BrakeRetract_2_clicked()
{
    Two_link(Bobbin_BrakeRetract, 100);
}

//爪子撑杆-----顶出
void MainWindow::on_pushButton_BraceExtend_2_clicked()
{
    Two_link(Bobbin_BraceExtend, 100);
}
//缩回
void MainWindow::on_pushButton_BraceRetract_2_clicked()
{
    Two_link(Bobbin_BraceRetract, 100);
}
//离合器-----推出
void MainWindow::on_pushButton_ClutchExtend_2_clicked()
{
    Two_link(Bobbin_ClutchExtend, 100);
}
//缩回
void MainWindow::on_pushButton_ClutchRetract_2_clicked()
{
    Two_link(Bobbin_ClutchRetract, 100);
}
//吸嘴位置-----纱筒上端
void MainWindow::on_pushButton_NozzleUp_2_clicked()
{
    Two_link(Bobbin_NozzleUp, 100);
}
//纱筒下端
void MainWindow::on_pushButton_NozzleDown_2_clicked()
{
    Two_link(Bobbin_NozzleDown, 100);
}

//吸嘴靠近纱筒
void MainWindow::on_pushButton_NozzleClose_2_clicked()
{
    Two_link(Bobbin_NozzleClose, 100);
}
//远离
void MainWindow::on_pushButton_NozzleAway_2_clicked()
{
    Two_link(Bobbin_NozzleAway, 100);
}

//风机----打开
void MainWindow::on_pushButton_FanOpen_2_clicked()
{
    Two_link(Bobbin_FanOpen, 100);
}
//关闭
void MainWindow::on_pushButton_FanClose_2_clicked()
{
    Two_link(Bobbin_FanClose, 100);
}

//=================================================================================
//=====================  轴运动----写寄存器+写线圈 ======================================
//=================================================================================
//读连续点动的速度值
void MainWindow::deal_zhou_continue()
{
    if ( true == Flag_zhou_continue){
     //uint16_t *zhou_continue_speed = new  uint16_t(14) ;
     //起始500   X-500  Y-502  Z-504 AB-506  XIECHA-508 (disable) ShaTong-510
    uint16_t  zhou_continu_speed_a[12];//这样只能让接受一个word的2个byte
    if (true == w_modbus_tcp->Tcp_Status)
    {
        w_modbus_tcp->Tcp_modbusReadRegisterStatus_03(500,12, zhou_continu_speed_a );
        ui->lineEdit_Xzhou_speed->setText(QString::number(zhou_continu_speed_a[0]));
        ui->lineEdit_Yzhou_speed->setText(QString::number(zhou_continu_speed_a[2]));
        ui->lineEdit_Zzhou_speed->setText(QString::number(zhou_continu_speed_a[4]));
        ui->lineEdit_AB_speed->setText(QString::number(zhou_continu_speed_a[6]));
        ui->lineEdit_shatong_speed->setText(QString::number(zhou_continu_speed_a[10]));
    }
    else if(true ==w_modbus_rtu->Rtu_Status )
    {
        w_modbus_rtu->Rtu_modbusReadRegisterStatus_03(500,12, zhou_continu_speed_a );
        ui->lineEdit_Xzhou_speed->setText(QString::number(zhou_continu_speed_a[0]));
        ui->lineEdit_Yzhou_speed->setText(QString::number(zhou_continu_speed_a[2]));
        ui->lineEdit_Zzhou_speed->setText(QString::number(zhou_continu_speed_a[4]));
        ui->lineEdit_AB_speed->setText(QString::number(zhou_continu_speed_a[6]));
        ui->lineEdit_shatong_speed->setText(QString::number(zhou_continu_speed_a[10]));
    }
    else
     {
        QMessageBox::warning(NULL, "温馨提示","你还没有连接！");
        return;
     }

    Flag_zhou_continue = false;//只去读一次
    }
    else
        return;
}


//============================================连续点动================================
void MainWindow::Zhou_sport(int Register_Speed, int Btn_Zhou_Move, uint16_t speed_value)
{
    if (speed_value <= 0)
    {
        QMessageBox::warning(this, "Warning", "X轴速度值为0!");
        return;
    }
    else
    {
        if (true == w_modbus_tcp->Tcp_Status)
        {
            w_modbus_tcp->Tcp_modbusWriteSingleRegister_06(Register_Speed, speed_value);//只支持单字写入
            w_modbus_tcp->Tcp_Sleep(100);
            w_modbus_tcp->Tcp_modbusWriteSingleCoil_05(Btn_Zhou_Move,true);//一直执行下去
        }
        else if(true ==w_modbus_rtu->Rtu_Status )
        {
            w_modbus_rtu->Rtu_modbusWriteSingleRegister_06(Register_Speed, speed_value);
            w_modbus_rtu->Rtu_Sleep(100);
            w_modbus_rtu->Rtu_modbusWriteSingleCoil_05(Btn_Zhou_Move,true);
        }
        else
         {
            QMessageBox::warning(NULL, "温馨提示","你还没有连接！");
            return;
         }
     }
}
void MainWindow::Zhou_sport_Stop(int Btn_Zhou_Move)
{
    if (true == w_modbus_tcp->Tcp_Status)
    {
        w_modbus_tcp->Tcp_modbusWriteSingleCoil_05(Btn_Zhou_Move,false);//一直执行下去
    }
    else if(true ==w_modbus_rtu->Rtu_Status )
    {
        w_modbus_rtu->Rtu_modbusWriteSingleCoilPulse_05(Btn_Zhou_Move,false);
    }
    else
     {
        QMessageBox::warning(NULL, "温馨提示","你还没有连接！");
        return;
     }
}
//X轴
void MainWindow::on_btn_X_left_move_clicked()
{
    uint16_t Speed_Move;//范围（0-65535）unsigned short
    Speed_Move = ui->lineEdit_Xzhou_speed->text().toUInt();
    qDebug()<<Speed_Move;
    Zhou_sport(Resgister_X_Speed,Btn_Left_X_Move,Speed_Move);
}
void MainWindow::on_btn_X_right_move_clicked()
{
    uint16_t Speed_Move;//范围（0-65535）unsigned short
    Speed_Move = ui->lineEdit_Xzhou_speed->text().toUInt();
    qDebug()<<Speed_Move;
    Zhou_sport(Resgister_X_Speed,Btn_Right_X_Move,Speed_Move);
}
void MainWindow::on_btn_X_stop_move_clicked()
{
  Zhou_sport_Stop(Btn_Right_X_Move);
  Zhou_sport_Stop(Btn_Left_X_Move);
}
//Y轴
void MainWindow::on_btn_Y_jin_move_clicked()
{
    uint16_t Speed_Move;//范围（0-65535）unsigned short
    Speed_Move = ui->lineEdit_Xzhou_speed->text().toUInt();
    qDebug()<<Speed_Move;
    Zhou_sport(Resgister_Y_Speed,Btn_Jin_Y_Move,Speed_Move);
}
void MainWindow::on_btn_Y_yuan_move_clicked()
{
    uint16_t Speed_Move;//范围（0-65535）unsigned short
    Speed_Move = ui->lineEdit_Yzhou_speed->text().toUInt();
    qDebug()<<Speed_Move;
    Zhou_sport(Resgister_Y_Speed,Btn_Yuan_Y_Move,Speed_Move);
}
void MainWindow::on_btn_Y_stop_move_clicked()
{
     Zhou_sport_Stop(Btn_Yuan_Y_Move);
     Zhou_sport_Stop(Btn_Jin_Y_Move);
}
//Z轴
void MainWindow::on_btn_Z_up_move_clicked()
{
    uint16_t Speed_Move;//范围（0-65535）unsigned short
    Speed_Move = ui->lineEdit_Xzhou_speed->text().toUInt();
    qDebug()<<Speed_Move;
    Zhou_sport(Resgister_Z_Speed,Btn_Up_Z_Move,Speed_Move);
}
void MainWindow::on_btn_Z_down_move_clicked()
{
    uint16_t Speed_Move;//范围（0-65535）unsigned short
    Speed_Move = ui->lineEdit_Zzhou_speed->text().toUInt();
    qDebug()<<Speed_Move;
    Zhou_sport(Resgister_Z_Speed,Btn_Down_Z_Move,Speed_Move);
}
void MainWindow::on_btn_Z_stop_move_clicked()
{
    Zhou_sport_Stop(Btn_Up_Z_Move);
    Zhou_sport_Stop(Btn_Down_Z_Move);
}
//AB位
void MainWindow::on_btn_B_move_clicked()
{
    uint16_t Speed_Move;//范围（0-65535）unsigned short
    Speed_Move = ui->lineEdit_Zzhou_speed->text().toUInt();
    qDebug()<<Speed_Move;

    Zhou_sport(Resgister_AB_Speed,Btn_Turn_B_Move,Speed_Move);
}
void MainWindow::on_btn_A_move_clicked()
{
    uint16_t Speed_Move;//范围（0-65535）unsigned short
    Speed_Move = ui->lineEdit_Zzhou_speed->text().toUInt();
    qDebug()<<Speed_Move;

    Zhou_sport(Resgister_AB_Speed,Btn_Turn_A_Move,Speed_Move);
}
void MainWindow::on_btn_AB_stop_move_clicked()
{
    Zhou_sport_Stop(Btn_Turn_B_Move);
    Zhou_sport_Stop(Btn_Turn_A_Move);
}
//纱筒旋转
void MainWindow::on_btn_shatong_move_clicked()
{
    uint16_t Speed_Move;//范围（0-65535）unsigned short
    Speed_Move = ui->lineEdit_Zzhou_speed->text().toUInt();
    qDebug()<<Speed_Move;

    Zhou_sport(Resgister_ShaTong_Speed,Btn_ShaTong_move,Speed_Move);
}
void MainWindow::on_btn_shatong_stop_move_clicked()
{
    Zhou_sport_Stop(Btn_ShaTong_move);
}

//==================================================脉冲数输出========================
 void MainWindow::Zhou_sport_plus(int Register_Plus_Num, int Btn_Zhou__PLus_Move , uint16_t   Plus_Num)
 {
     if (Plus_Num == 0)
     {
         QMessageBox::warning(this, "Warning", "X轴脉冲数为0!");
         return;
     }
     else
     {
         if (true == w_modbus_tcp->Tcp_Status)
         {
             w_modbus_tcp->Tcp_modbusWriteSingleRegister_06(Register_Plus_Num, Plus_Num);//只支持单字写入
             w_modbus_tcp->Tcp_Sleep(100);
             w_modbus_tcp->Tcp_modbusWriteSingleCoilPulse_05(Btn_Zhou__PLus_Move,100);//矩形波
         }
         else if(true ==w_modbus_rtu->Rtu_Status )
         {
             w_modbus_rtu->Rtu_modbusWriteSingleRegister_06(Register_Plus_Num, Plus_Num);
             w_modbus_rtu->Rtu_Sleep(100);//先让寄存器得到值
             w_modbus_rtu->Rtu_modbusWriteSingleCoilPulse_05(Btn_Zhou__PLus_Move,100);
         }
         else
          {
             QMessageBox::warning(NULL, "温馨提示","你还没有连接！");
             return;
          }
      }
 }
//X轴
void MainWindow::on_btn_X_left_move_plus_clicked()
{
    uint16_t Plus_Number;//范围（0-65535）unsigned short
    Plus_Number = ui->lineEdit_Xzhou_Plus_Num->text().toUInt();
    qDebug()<<Plus_Number;
    Zhou_sport_plus(Resgister_X_Plus_Number, Btn_Left_X_Plus_Move ,  Plus_Number);
}
void MainWindow::on_btn_X_right_move_plus_clicked()
{
    uint16_t Plus_Number;
    Plus_Number = ui->lineEdit_Xzhou_Plus_Num->text().toUInt();
    qDebug()<<Plus_Number;
    Zhou_sport_plus(Resgister_X_Plus_Number   , Btn_Right_X_Plus_Move  ,  Plus_Number);
}
//Y轴
void MainWindow::on_btn_Y_Jin__puls_move_clicked()
{
    uint16_t Plus_Number;
    Plus_Number = ui->lineEdit_Yzhou_plus_Num->text().toUInt();
    qDebug()<<Plus_Number;
    Zhou_sport_plus(Resgister_Y__Plus_Number   , Btn_Jin_Y_Plus_Move     ,  Plus_Number);
}
void MainWindow::on_btn_Y_yuan_move_Plus_clicked()
{
    uint16_t Plus_Number;
    Plus_Number = ui->lineEdit_Yzhou_plus_Num->text().toUInt();
    qDebug()<<Plus_Number;
    Zhou_sport_plus(Resgister_Y__Plus_Number, Btn_Yuan_Y_Plus_Move     ,  Plus_Number);
}
//Z轴
void MainWindow::on_btn_Z_Up_move__puls_clicked()
{
    uint16_t Plus_Number;
    Plus_Number = ui->lineEdit_Zzhou_Plus_Num->text().toUInt();
    qDebug()<<Plus_Number;
    Zhou_sport_plus(Resgister_Z_Plus_Number   , Btn_Up_Z_Plus_Move        ,  Plus_Number);
}
void MainWindow::on_btn_Z_Down_move_plus_clicked()
{
    uint16_t Plus_Number;
    Plus_Number = ui->lineEdit_Zzhou_Plus_Num->text().toUInt();
    qDebug()<<Plus_Number;
    Zhou_sport_plus(Resgister_Z_Plus_Number   , Btn_Down_Z_Plus_Move        ,  Plus_Number);
}
//AB位
void MainWindow::on_btn_A_move_plus_clicked()
{
    uint16_t Plus_Number;
    Plus_Number = ui->lineEdit_AB_plus_Num->text().toUInt();
    qDebug()<<Plus_Number;
    Zhou_sport_plus(Resgister_AB_Plus_Number  , Btn_Turn_A_Plus_Move  ,  Plus_Number);
}
void MainWindow::on_btn_B_move__puls_clicked()
{
    uint16_t Plus_Number;
    Plus_Number = ui->lineEdit_AB_plus_Num->text().toUInt();
    qDebug()<<Plus_Number;
    Zhou_sport_plus(Resgister_AB_Plus_Number  , Btn_Turn_B_Plus_Move        ,  Plus_Number);
}
//纱筒旋转
void MainWindow::on_btn_Shatong_move_puls_clicked()
{
    uint16_t Plus_Number;
    Plus_Number = ui->lineEdit_shatong_plus_Num->text().toUInt();
    qDebug()<<Plus_Number;
    Zhou_sport_plus(Resgister_ShaTong_Plus_Number    , Btn_ShaTong_Plus_move   ,  Plus_Number);
}

//==============================================================
//                                                监控IO口的状态
//==============================================================
//指示灯显示判断
void MainWindow::Choice_Light(QLabel *Image_Object, uint8_t *Position, int ID)
{
    if (0 == Position[ID])//线圈0
    {
        // 在label上设置图片
       QPixmap picture;
       picture.load("D:/QT_box/try_yi_try/PLC/PLC_copy_v1/qrc/tupian/light_open.png");
       Image_Object ->setPixmap(picture);
        // 自适应Label大小
      Image_Object->setScaledContents(true);
    }
    else if (1 == Position[ID])
     {
        QPixmap picture;
        picture.load("D:/QT_box/try_yi_try/PLC/PLC_copy_v1/qrc/tupian/light_open.png");
        Image_Object ->setPixmap(picture);
        // 自适应Label大小
        Image_Object->setScaledContents(true);
     }
}

//扫描口处理函数------------------间隔触发
void MainWindow::deal_Timer()
{
    //Tcp
    if(1 == FLag_modbus_status)
    {
        //一把读出x所有触点
        w_modbus_tcp->Tcp_modbusReadCoilStatus_01(24577, 64, Monitor_Status_SS );
        //--传感器
        Choice_Light(ui->label_SS_X00,Monitor_Status_SS, 0);
        Choice_Light(ui->label_SS_X01,Monitor_Status_SS, 1);
        Choice_Light(ui->label_SS_X02,Monitor_Status_SS, 2);
        Choice_Light(ui->label_SS_X03,Monitor_Status_SS, 3);
        Choice_Light(ui->label_SS_X04,Monitor_Status_SS, 4);
        Choice_Light(ui->label_SS_X05,Monitor_Status_SS, 5);
        Choice_Light(ui->label_SS_X06,Monitor_Status_SS, 6);
        Choice_Light(ui->label_SS_X07,Monitor_Status_SS, 7);
        Choice_Light(ui->label_SS_X10,Monitor_Status_SS, 16+0);
        Choice_Light(ui->label_SS_X11,Monitor_Status_SS, 16+1);
        Choice_Light(ui->label_SS_X12,Monitor_Status_SS, 16+2);
        Choice_Light(ui->label_SS_X13,Monitor_Status_SS, 16+3);
        Choice_Light(ui->label_SS_X14,Monitor_Status_SS, 16+4);
        Choice_Light(ui->label_SS_X15,Monitor_Status_SS, 16+4);
        Choice_Light(ui->label_SS_X16,Monitor_Status_SS, 16+4);
        Choice_Light(ui->label_SS_X17,Monitor_Status_SS, 16+7);
        Choice_Light(ui->label_SS_X18,Monitor_Status_SS, 16+8);
        Choice_Light(ui->label_SS_X19,Monitor_Status_SS, 16+9);
        Choice_Light(ui->label_SS_X110,Monitor_Status_SS,16+10);
        Choice_Light(ui->label_SS_X115,Monitor_Status_SS,16+15);
        Choice_Light(ui->label_SS_X20,Monitor_Status_SS, 32+0);
        Choice_Light(ui->label_SS_X21,Monitor_Status_SS, 32+1);
        Choice_Light(ui->label_SS_X22,Monitor_Status_SS, 32+2);
        Choice_Light(ui->label_SS_X30,Monitor_Status_SS, 48+0);
        Choice_Light(ui->label_SS_X31,Monitor_Status_SS, 48+1);
        Choice_Light(ui->label_SS_X32,Monitor_Status_SS, 48+2);
        Choice_Light(ui->label_SS_X33,Monitor_Status_SS, 48+3);
        Choice_Light(ui->label_SS_X34,Monitor_Status_SS, 48+4);
        Choice_Light(ui->label_SS_X35,Monitor_Status_SS, 48+5);
        Choice_Light(ui->label_SS_X36,Monitor_Status_SS, 48+6);

        //一把读出Y所有触点
        w_modbus_tcp->Tcp_modbusReadCoilStatus_01(40960, 32, Monitor_Status_QGandZhou);
        //---轴
        Choice_Light(ui->label_zhou_Y00,Monitor_Status_QGandZhou,0);
        Choice_Light(ui->label_zhou_Y01,Monitor_Status_QGandZhou,1);
        Choice_Light(ui->label_zhou_Y02,Monitor_Status_QGandZhou,2);
        Choice_Light(ui->label_zhou_Y03,Monitor_Status_QGandZhou,3);
        Choice_Light(ui->label_zhou_Y04,Monitor_Status_QGandZhou,4);
        Choice_Light(ui->label_zhou_Y05,Monitor_Status_QGandZhou,5);
        Choice_Light(ui->label_zhou_Y06,Monitor_Status_QGandZhou,6);
        Choice_Light(ui->label_zhou_Y07,Monitor_Status_QGandZhou,7);
        Choice_Light(ui->label_zhou_Y08,Monitor_Status_QGandZhou,8);
        Choice_Light(ui->label_zhou_Y09,Monitor_Status_QGandZhou,9);
        Choice_Light(ui->label_zhou_Y010,Monitor_Status_QGandZhou,10);
        Choice_Light(ui->label_zhou_Y011,Monitor_Status_QGandZhou,11);

        //--气缸
        Choice_Light(ui->label_QG_Y10,Monitor_Status_QGandZhou,16+0);
        Choice_Light(ui->label_QG_Y11,Monitor_Status_QGandZhou,16+1);
        Choice_Light(ui->label_QG_Y12,Monitor_Status_QGandZhou,16+2);
        Choice_Light(ui->label_QG_Y13,Monitor_Status_QGandZhou,16+3);
        Choice_Light(ui->label_QG_Y14,Monitor_Status_QGandZhou,16+4);
        Choice_Light(ui->label_QG_Y15,Monitor_Status_QGandZhou,16+5);
        Choice_Light(ui->label_QG_Y16,Monitor_Status_QGandZhou,16+6);
        Choice_Light(ui->label_QG_Y18,Monitor_Status_QGandZhou,16+8);
        Choice_Light(ui->label_QG_Y19,Monitor_Status_QGandZhou,16+9);
        Choice_Light(ui->label_QG_Y110,Monitor_Status_QGandZhou,16+10);
        Choice_Light(ui->label_QG_Y111,Monitor_Status_QGandZhou,16+11);
        Choice_Light(ui->label_QG_Y112,Monitor_Status_QGandZhou,16+12);
        Choice_Light(ui->label_QG_Y113,Monitor_Status_QGandZhou,16+13);
        Choice_Light(ui->label_QG_Y114,Monitor_Status_QGandZhou,16+14);
        Choice_Light(ui->label_QG_Y115,Monitor_Status_QGandZhou,16+15);

       // Choice_Light(ui->label_Q,Monitor_Status_QGandZhou,11);
    }
    //  Rtu
    else if(2 == FLag_modbus_status)
    {
        w_modbus_rtu->Rtu_modbusReadCoilStatus_01(24577, 64, Monitor_Status_SS );
        //一把读出x所有触点
        //--传感器
        Choice_Light(ui->label_SS_X00,Monitor_Status_SS, 0);
        Choice_Light(ui->label_SS_X01,Monitor_Status_SS, 1);
        Choice_Light(ui->label_SS_X02,Monitor_Status_SS, 2);
        Choice_Light(ui->label_SS_X03,Monitor_Status_SS, 3);
        Choice_Light(ui->label_SS_X04,Monitor_Status_SS, 4);
        Choice_Light(ui->label_SS_X05,Monitor_Status_SS, 5);
        Choice_Light(ui->label_SS_X06,Monitor_Status_SS, 6);
        Choice_Light(ui->label_SS_X07,Monitor_Status_SS, 7);
        Choice_Light(ui->label_SS_X10,Monitor_Status_SS, 16+0);
        Choice_Light(ui->label_SS_X11,Monitor_Status_SS, 16+1);
        Choice_Light(ui->label_SS_X12,Monitor_Status_SS, 16+2);
        Choice_Light(ui->label_SS_X13,Monitor_Status_SS, 16+3);
        Choice_Light(ui->label_SS_X14,Monitor_Status_SS, 16+4);
        Choice_Light(ui->label_SS_X15,Monitor_Status_SS, 16+4);
        Choice_Light(ui->label_SS_X16,Monitor_Status_SS, 16+4);
        Choice_Light(ui->label_SS_X17,Monitor_Status_SS, 16+7);
        Choice_Light(ui->label_SS_X18,Monitor_Status_SS, 16+8);
        Choice_Light(ui->label_SS_X19,Monitor_Status_SS, 16+9);
        Choice_Light(ui->label_SS_X110,Monitor_Status_SS,16+10);
        Choice_Light(ui->label_SS_X115,Monitor_Status_SS,16+15);
        Choice_Light(ui->label_SS_X20,Monitor_Status_SS, 32+0);
        Choice_Light(ui->label_SS_X21,Monitor_Status_SS, 32+1);
        Choice_Light(ui->label_SS_X22,Monitor_Status_SS, 32+2);
        Choice_Light(ui->label_SS_X30,Monitor_Status_SS, 48+0);
        Choice_Light(ui->label_SS_X31,Monitor_Status_SS, 48+1);
        Choice_Light(ui->label_SS_X32,Monitor_Status_SS, 48+2);
        Choice_Light(ui->label_SS_X33,Monitor_Status_SS, 48+3);
        Choice_Light(ui->label_SS_X34,Monitor_Status_SS, 48+4);
        Choice_Light(ui->label_SS_X35,Monitor_Status_SS, 48+5);
        Choice_Light(ui->label_SS_X36,Monitor_Status_SS, 48+6);

       //一把读出Y所有触点
        w_modbus_rtu->Rtu_modbusReadCoilStatus_01(40960, 32, Monitor_Status_QGandZhou);
        //---轴
        Choice_Light(ui->label_zhou_Y00,Monitor_Status_QGandZhou,0);
        Choice_Light(ui->label_zhou_Y01,Monitor_Status_QGandZhou,1);
        Choice_Light(ui->label_zhou_Y02,Monitor_Status_QGandZhou,2);
        Choice_Light(ui->label_zhou_Y03,Monitor_Status_QGandZhou,3);
        Choice_Light(ui->label_zhou_Y04,Monitor_Status_QGandZhou,4);
        Choice_Light(ui->label_zhou_Y05,Monitor_Status_QGandZhou,5);
        Choice_Light(ui->label_zhou_Y06,Monitor_Status_QGandZhou,6);
        Choice_Light(ui->label_zhou_Y07,Monitor_Status_QGandZhou,7);
        Choice_Light(ui->label_zhou_Y08,Monitor_Status_QGandZhou,8);
        Choice_Light(ui->label_zhou_Y09,Monitor_Status_QGandZhou,9);
        Choice_Light(ui->label_zhou_Y010,Monitor_Status_QGandZhou,10);
        Choice_Light(ui->label_zhou_Y011,Monitor_Status_QGandZhou,11);
        //--气缸
        Choice_Light(ui->label_QG_Y10,Monitor_Status_QGandZhou,16+0);
        Choice_Light(ui->label_QG_Y11,Monitor_Status_QGandZhou,16+1);
        Choice_Light(ui->label_QG_Y12,Monitor_Status_QGandZhou,16+2);
        Choice_Light(ui->label_QG_Y13,Monitor_Status_QGandZhou,16+3);
        Choice_Light(ui->label_QG_Y14,Monitor_Status_QGandZhou,16+4);
        Choice_Light(ui->label_QG_Y15,Monitor_Status_QGandZhou,16+5);
        Choice_Light(ui->label_QG_Y16,Monitor_Status_QGandZhou,16+6);
        Choice_Light(ui->label_QG_Y18,Monitor_Status_QGandZhou,16+8);
        Choice_Light(ui->label_QG_Y19,Monitor_Status_QGandZhou,16+9);
        Choice_Light(ui->label_QG_Y110,Monitor_Status_QGandZhou,16+10);
        Choice_Light(ui->label_QG_Y111,Monitor_Status_QGandZhou,16+11);
        Choice_Light(ui->label_QG_Y112,Monitor_Status_QGandZhou,16+12);
        Choice_Light(ui->label_QG_Y113,Monitor_Status_QGandZhou,16+13);
        Choice_Light(ui->label_QG_Y114,Monitor_Status_QGandZhou,16+14);
        Choice_Light(ui->label_QG_Y115,Monitor_Status_QGandZhou,16+15);
    }
    else if (0 == FLag_modbus_status)
        return;

}
//启动/停止定时器
void MainWindow::on_btn_update_monitor_clicked()
{
    if (true == w_modbus_tcp->Tcp_Status)
    {
        if(  false  == monitor_sensor_Timer->isActive())
        {
            monitor_sensor_Timer->start(500);//间隔
            FLag_modbus_status = 1;
            ui->btn_update_monitor->setText("stop");
        }
        else if( true  == monitor_sensor_Timer->isActive())
        {
            ui->btn_update_monitor->setText("start");
            FLag_modbus_status = 0;
            monitor_sensor_Timer->stop();
        }
    }
    else if(true ==w_modbus_rtu->Rtu_Status )
    {
        if(  false  == monitor_sensor_Timer->isActive())
        {
            monitor_sensor_Timer->start(500);
            FLag_modbus_status = 2;
            ui->btn_update_monitor->setText("stop");
        }
        else if( true  == monitor_sensor_Timer->isActive())
        {
            ui->btn_update_monitor->setText("start");
            FLag_modbus_status = 0;//感觉多此一举啊！
            monitor_sensor_Timer->stop();
        }
    }
    else
     {
        QMessageBox::warning(NULL, "温馨提示","你还没有连接！");
        return;
     }
}

//=======================回主菜单
void MainWindow::on_pushButton_home_3_clicked()
{
    switch_Big_page();
}
void MainWindow::on_pushButton_home_2_clicked()
{
    switch_Big_page();
}
void MainWindow::on_pushButton_home_clicked()
{
    switch_Big_page();
}
void MainWindow::on_pushButton_home_5_clicked()
{
    switch_Big_page();
}
void MainWindow::on_pushButton_home_4_clicked()
{
    switch_Big_page();
}

//===================================================================
