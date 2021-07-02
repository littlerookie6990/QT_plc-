#ifndef SYSTEM_PARAMETER_H
#define SYSTEM_PARAMETER_H
/* 定义参考地址 */
#define Knot_IP                     "192.168.1.111"//==========打结机=================================
#define Knot_Port                   502
#define Knot_ChildAddr              1
#define Knot_FanOpen                450
#define Knot_FanClose               451
#define Knot_KnotAction             455
#define Knot_FanStatu               40960 + 15 + 7
#define Knot_NozzleCounter          460
#define Knot_NozzleClockwise        461
#define Knot_PressureUp             470
#define Knot_PressureDown           471
#define Knot_Reset                  600

#define Bobbin_IP                   "192.168.1.112"//=========换筒机=================================
#define Bobbin_Port                 502
#define Bobbin_ChildAddr            2
#define Bobbin_FanOpen              435//-------------------气缸
#define Bobbin_FanClose             436
#define Bobbin_FixtureFlatten       438
#define Bobbin_FixtureStraighten    439
#define Bobbin_BobbinExtend         441
#define Bobbin_BobbinRetract        442
#define Bobbin_BrakeExtend          444
#define Bobbin_BrakeRetract         445
#define Bobbin_BraceExtend          447
#define Bobbin_BraceRetract         448
#define Bobbin_ClutchExtend         450
#define Bobbin_ClutchRetract        451
#define Bobbin_NozzleUp             453
#define Bobbin_NozzleDown           454
#define Bobbin_NozzleClose          456
#define Bobbin_NozzleAway           457

#define Bobbin_EmergencyStop        600
//连续点动-------要求按下的过程在工作，松手就停止
#define  Btn_Left_X_Move   520//------------------轴运动
#define  Btn_Right_X_Move   521
#define  Resgister_X_Speed   500

#define  Btn_Jin_Y_Move   522
#define  Btn_Yuan_Y_Move   523
#define  Resgister_Y_Speed   502

#define  Btn_Up_Z_Move   524
#define  Btn_Down_Z_Move   525
#define  Resgister_Z_Speed   504

#define  Btn_Turn_B_Move   526
#define  Btn_Turn_A_Move   527
#define  Resgister_AB_Speed   506

#define  Btn_ShaTong_move 528
#define  Resgister_ShaTong_Speed   508
//脉冲数移动
#define  Btn_Left_X_Plus_Move   405
#define  Btn_Right_X_Plus_Move   406
#define  Resgister_X_Plus_Number   352

#define  Btn_Jin_Y_Plus_Move   411
#define  Btn_Yuan_Y_Plus_Move   410
#define  Resgister_Y__Plus_Number   354

#define  Btn_Up_Z_Plus_Move   416
#define  Btn_Down_Z_Plus_Move   415
#define  Resgister_Z_Plus_Number   356

#define  Btn_Turn_B_Plus_Move   401
#define  Btn_Turn_A_Plus_Move   400
#define  Resgister_AB_Plus_Number  350

#define  Btn_ShaTong_Plus_move  420
#define  Resgister_ShaTong_Plus_Number    358

//速度参数设置--------------------------功能参数画面

#define  Register_X_jog_speed    312//-----jog
#define  Register_Y_jog_speed    322
#define  Register_Z_jog_speed    332
#define  Register_AB_jog_speed   302
#define  Register_ShaTong_jog_speed    342
#define  Register_ChengZhua_jog_speed    360

#define  Register_X_Auto_speed    311//-----Auto
#define  Register_Y_Auto_speed    321
#define  Register_Z_Auto_speed    331
#define  Register_AB_Auto_speed   301
#define  Register_ShaTong_Auto_speed    341

#define Y_Address            40960 + 16 + 6    //    Y1.6
#define X_Address            24577                 //     X0.0
#if 0
//定义纱架参数
#define   圆筒       1//预处理时候
#define   锥筒       2

#define 取A位 1
#define 取B位 2
#define 放A位 1
#define 放B位 2

typedef enum   {//------编译时
    取第一层 =1,取第二层 =2,取第三层=3,取第四层=4,取第五层=5,取第六层=6,取第七层=7
}Get_Bob_Floor;
typedef enum {
    放第一层=1,放第二层=2,放第三层=3,放第四层=4,放第五层=5,放第六层=6,放第七层=7
}Put_Bob_Floor;

typedef struct  {
       int  Shape_Tube;

       int  Get_bob_Floor;
       int  Put_bob_Floor;

       int Get_Position;
       int Put_Position;
}Bob_Shelf;
#endif

#endif // SYSTEM_PARAMETER_H
