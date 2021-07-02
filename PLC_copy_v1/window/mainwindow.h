#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "system_parameter/system_parameter.h"         //宏定义-----系统参数
#include <QMainWindow>

#include "log_screen.h"//登录界面-------------------两个窗口之间是包含关系，而不是相对独立

#include "communication/dialog_modbus_tcp.h"    //modbus_tcp窗口-------------内部包含了通信的二次定义
#include "communication/dialog_modbus_rtu.h"    //modbus_rtu窗口
#include "Camera/camera.h"//相机窗口

#include <QMessageBox>
#include <QTimer>
#include<QStyle >

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //登录界面
    void deal_open_logscreen();
    //气缸
    void Two_link(int a, int b);
    //轴连续点动
    void Zhou_sport(int Register_Speed, int Btn_Zhou_Move , uint16_t speed_value );
    void Zhou_sport_Stop(int Btn_Zhou_Move);
    //脉冲数移动
    void Zhou_sport_plus(int Register_Plus_Num, int Btn_Zhou__PLus_Move , uint16_t   Plus_Num);

    //一把循环读IO状态
    void deal_Timer();
    void  Choice_Light(QLabel *Image_Object, uint8_t *Position, int ID);

    //速度参数设置-----自动和点动
    void Write_speed_parameter(int Start_Address, uint16_t Speed_Value);


    //切换大界面
    void switch_Big_page();
    //void switcch_Small_page_manual();//切换小界面==手动画面

   //切换小界面
    void switch_Small_page_manual();
    void switch_Small_page_monitor();
    void switch_Small_page_Fucparameter();
    void switch_Small_page_communication();

    //读取初始连续点动默认初始速度
    void deal_zhou_continue();
    //读取初始速度点动和自动
    void deal_Fuction_parameter();

    //按钮样式------菜单栏按钮--赋值样式表和图标有底色
    void Button_Bar_stylesheet (QPushButton *Btn);
    //按钮样式------功能按钮2--赋值样式表无图标无底色
    void  Button_fuc1_stylesheet(QPushButton *Btn);


signals:
    //读取初始连续点动默认初始值
    void signal_zhou_continue();
     //读取初始速度点动和自动
    void  signal_Fuc_parameter();


//public slots:在QT5上槽函数与普通函数已经没有什么区别了
public slots:
    void time_update(void);


private slots:
 //--------------------------------------------------------------------界面切换按钮---------------
    void on_btn_auto_clicked();
    void on_btn_manual_clicked();
    void on_btn_fuc_parameter_clicked();
    void on_btn_warning_clicked();
    void on_btn_monitor_clicked();
    void on_btn_com_clicked();

    //手动画面
    void on_btn_manual_qigang_clicked();
    void on_btn_manual_zhou_plus_clicked();
    void on_btn_manual_zhou_continue_clicked();
    void on_btn_manual_test_run_clicked();

     void on_btn_manual_stop_clicked();
//气缸动作
    void on_pushButton_FixtureFlatten_2_clicked();
    void on_pushButton_FixtureStraighten_2_clicked();
    void on_pushButton_BobbinExtend_2_clicked();
    void on_pushButton_BobbinRetract_2_clicked();
    void on_pushButton_BrakeExtend_2_clicked();
    void on_pushButton_BrakeRetract_2_clicked();
    void on_pushButton_BraceExtend_2_clicked();
    void on_pushButton_BraceRetract_2_clicked();
    void on_pushButton_ClutchExtend_2_clicked();
    void on_pushButton_ClutchRetract_2_clicked();
    void on_pushButton_NozzleUp_2_clicked();
    void on_pushButton_NozzleDown_2_clicked();
    void on_pushButton_NozzleClose_2_clicked();
    void on_pushButton_NozzleAway_2_clicked();
    void on_pushButton_FanOpen_2_clicked();
    void on_pushButton_FanClose_2_clicked();
//轴动作
    //连续点动
    void on_btn_X_left_move_clicked();
    void on_btn_X_right_move_clicked();
    void on_btn_X_stop_move_clicked();
    void on_btn_Y_jin_move_clicked();
    void on_btn_Y_yuan_move_clicked();
    void on_btn_Y_stop_move_clicked();
    void on_btn_Z_up_move_clicked();
    void on_btn_Z_down_move_clicked();
    void on_btn_Z_stop_move_clicked();
    void on_btn_B_move_clicked();
    void on_btn_A_move_clicked();
    void on_btn_AB_stop_move_clicked();
    void on_btn_shatong_move_clicked();
    void on_btn_shatong_stop_move_clicked();
    //脉冲数移动
    void on_btn_X_left_move_plus_clicked();
    void on_btn_X_right_move_plus_clicked();
    void on_btn_Y_Jin__puls_move_clicked();
    void on_btn_Y_yuan_move_Plus_clicked();
    void on_btn_Z_Up_move__puls_clicked();
    void on_btn_Z_Down_move_plus_clicked();
    void on_btn_B_move__puls_clicked();
    void on_btn_A_move_plus_clicked();
    void on_btn_Shatong_move_puls_clicked();

    //监控画面
    void on_btn_sensor_monitor_clicked();
    void on_btn_qigang_moniter_clicked();
    void on_btn_Zhou_monitor_clicked();
    void on_btn_update_monitor_clicked();

    //功能参数画面
    void on_btn_func_parameter_speed_clicked();
    void on_btn_111_clicked();
    void on_btn_Fucparameter_write_speedvalue_clicked();

    //没用----找时间删了
    void on_pushButton_clicked();
    void on_pushButton_home_3_clicked();
    void on_pushButton_home_2_clicked();
    void on_pushButton_home_clicked();
    void on_pushButton_home_5_clicked();
    void on_pushButton_home_4_clicked();

    //关闭软件窗口
    void on_pushButton_off_clicked();

    //通讯设置界面
    void on_pushButton_open_RTU_clicked();
    void on_pushButton_open_TCP_clicked();
    void on_pushButton_open_Camer_clicked();

    void on_btn_com_4_clicked();
    void on_btn_press_clicked();
    void on_btn_system_update_clicked();
    //void on_pushButton_14_clicked();

private:
    Ui::MainWindow *ui;

//--------------------------------------------------------------------------界面对象-----------------------------------------------
        log_screen *w_log;//登录界面的对象

        Camera *w_camera;//创建camera窗口

        Dialog_modbus_tcp *w_modbus_tcp;//菜单栏的modbus_tcp对象
        Dialog_Modbus_Rtu *w_modbus_rtu;//菜单栏的modbus_rtu对象

       //监控定时器
       QTimer *monitor_sensor_Timer;

       int FLag_modbus_status;
       bool Flag_zhou_continue;
       bool  Flag_Fuc_parameter;

       //两个内存存放地址
       uint8_t *Monitor_Status_SS;//X0.0~3.6  16个一个段
       uint8_t *Monitor_Status_QGandZhou;//Y0.0~1.6

       //三个指示灯图片
       QImage *Image_Close;
       QImage *Image_Open;
       QImage *Image_Warning;

       // bool Btn_Status_monitor;
       //QTimer *monitor_qigang_Timer;
       // Timer *monitor_zhou_Timer;
};

#endif // MAINWINDOW_H




