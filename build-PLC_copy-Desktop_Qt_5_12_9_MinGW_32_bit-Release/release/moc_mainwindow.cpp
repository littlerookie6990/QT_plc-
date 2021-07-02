/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PLC_copy_v1/window/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[75];
    char stringdata0[2167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 20), // "signal_zhou_continue"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "signal_Fuc_parameter"
QT_MOC_LITERAL(4, 54, 11), // "time_update"
QT_MOC_LITERAL(5, 66, 19), // "on_btn_auto_clicked"
QT_MOC_LITERAL(6, 86, 21), // "on_btn_manual_clicked"
QT_MOC_LITERAL(7, 108, 28), // "on_btn_fuc_parameter_clicked"
QT_MOC_LITERAL(8, 137, 22), // "on_btn_warning_clicked"
QT_MOC_LITERAL(9, 160, 22), // "on_btn_monitor_clicked"
QT_MOC_LITERAL(10, 183, 18), // "on_btn_com_clicked"
QT_MOC_LITERAL(11, 202, 28), // "on_btn_manual_qigang_clicked"
QT_MOC_LITERAL(12, 231, 31), // "on_btn_manual_zhou_plus_clicked"
QT_MOC_LITERAL(13, 263, 35), // "on_btn_manual_zhou_continue_c..."
QT_MOC_LITERAL(14, 299, 30), // "on_btn_manual_test_run_clicked"
QT_MOC_LITERAL(15, 330, 26), // "on_btn_manual_stop_clicked"
QT_MOC_LITERAL(16, 357, 38), // "on_pushButton_FixtureFlatten_..."
QT_MOC_LITERAL(17, 396, 41), // "on_pushButton_FixtureStraight..."
QT_MOC_LITERAL(18, 438, 36), // "on_pushButton_BobbinExtend_2_..."
QT_MOC_LITERAL(19, 475, 37), // "on_pushButton_BobbinRetract_2..."
QT_MOC_LITERAL(20, 513, 35), // "on_pushButton_BrakeExtend_2_c..."
QT_MOC_LITERAL(21, 549, 36), // "on_pushButton_BrakeRetract_2_..."
QT_MOC_LITERAL(22, 586, 35), // "on_pushButton_BraceExtend_2_c..."
QT_MOC_LITERAL(23, 622, 36), // "on_pushButton_BraceRetract_2_..."
QT_MOC_LITERAL(24, 659, 36), // "on_pushButton_ClutchExtend_2_..."
QT_MOC_LITERAL(25, 696, 37), // "on_pushButton_ClutchRetract_2..."
QT_MOC_LITERAL(26, 734, 32), // "on_pushButton_NozzleUp_2_clicked"
QT_MOC_LITERAL(27, 767, 34), // "on_pushButton_NozzleDown_2_cl..."
QT_MOC_LITERAL(28, 802, 35), // "on_pushButton_NozzleClose_2_c..."
QT_MOC_LITERAL(29, 838, 34), // "on_pushButton_NozzleAway_2_cl..."
QT_MOC_LITERAL(30, 873, 31), // "on_pushButton_FanOpen_2_clicked"
QT_MOC_LITERAL(31, 905, 32), // "on_pushButton_FanClose_2_clicked"
QT_MOC_LITERAL(32, 938, 26), // "on_btn_X_left_move_clicked"
QT_MOC_LITERAL(33, 965, 27), // "on_btn_X_right_move_clicked"
QT_MOC_LITERAL(34, 993, 26), // "on_btn_X_stop_move_clicked"
QT_MOC_LITERAL(35, 1020, 25), // "on_btn_Y_jin_move_clicked"
QT_MOC_LITERAL(36, 1046, 26), // "on_btn_Y_yuan_move_clicked"
QT_MOC_LITERAL(37, 1073, 26), // "on_btn_Y_stop_move_clicked"
QT_MOC_LITERAL(38, 1100, 24), // "on_btn_Z_up_move_clicked"
QT_MOC_LITERAL(39, 1125, 26), // "on_btn_Z_down_move_clicked"
QT_MOC_LITERAL(40, 1152, 26), // "on_btn_Z_stop_move_clicked"
QT_MOC_LITERAL(41, 1179, 21), // "on_btn_B_move_clicked"
QT_MOC_LITERAL(42, 1201, 21), // "on_btn_A_move_clicked"
QT_MOC_LITERAL(43, 1223, 27), // "on_btn_AB_stop_move_clicked"
QT_MOC_LITERAL(44, 1251, 27), // "on_btn_shatong_move_clicked"
QT_MOC_LITERAL(45, 1279, 32), // "on_btn_shatong_stop_move_clicked"
QT_MOC_LITERAL(46, 1312, 31), // "on_btn_X_left_move_plus_clicked"
QT_MOC_LITERAL(47, 1344, 32), // "on_btn_X_right_move_plus_clicked"
QT_MOC_LITERAL(48, 1377, 31), // "on_btn_Y_Jin__puls_move_clicked"
QT_MOC_LITERAL(49, 1409, 31), // "on_btn_Y_yuan_move_Plus_clicked"
QT_MOC_LITERAL(50, 1441, 30), // "on_btn_Z_Up_move__puls_clicked"
QT_MOC_LITERAL(51, 1472, 31), // "on_btn_Z_Down_move_plus_clicked"
QT_MOC_LITERAL(52, 1504, 27), // "on_btn_B_move__puls_clicked"
QT_MOC_LITERAL(53, 1532, 26), // "on_btn_A_move_plus_clicked"
QT_MOC_LITERAL(54, 1559, 32), // "on_btn_Shatong_move_puls_clicked"
QT_MOC_LITERAL(55, 1592, 29), // "on_btn_sensor_monitor_clicked"
QT_MOC_LITERAL(56, 1622, 29), // "on_btn_qigang_moniter_clicked"
QT_MOC_LITERAL(57, 1652, 27), // "on_btn_Zhou_monitor_clicked"
QT_MOC_LITERAL(58, 1680, 29), // "on_btn_update_monitor_clicked"
QT_MOC_LITERAL(59, 1710, 35), // "on_btn_func_parameter_speed_c..."
QT_MOC_LITERAL(60, 1746, 18), // "on_btn_111_clicked"
QT_MOC_LITERAL(61, 1765, 44), // "on_btn_Fucparameter_write_spe..."
QT_MOC_LITERAL(62, 1810, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(63, 1832, 28), // "on_pushButton_home_3_clicked"
QT_MOC_LITERAL(64, 1861, 28), // "on_pushButton_home_2_clicked"
QT_MOC_LITERAL(65, 1890, 26), // "on_pushButton_home_clicked"
QT_MOC_LITERAL(66, 1917, 28), // "on_pushButton_home_5_clicked"
QT_MOC_LITERAL(67, 1946, 28), // "on_pushButton_home_4_clicked"
QT_MOC_LITERAL(68, 1975, 25), // "on_pushButton_off_clicked"
QT_MOC_LITERAL(69, 2001, 30), // "on_pushButton_open_RTU_clicked"
QT_MOC_LITERAL(70, 2032, 30), // "on_pushButton_open_TCP_clicked"
QT_MOC_LITERAL(71, 2063, 32), // "on_pushButton_open_Camer_clicked"
QT_MOC_LITERAL(72, 2096, 20), // "on_btn_com_4_clicked"
QT_MOC_LITERAL(73, 2117, 20), // "on_btn_press_clicked"
QT_MOC_LITERAL(74, 2138, 28) // "on_btn_system_update_clicked"

    },
    "MainWindow\0signal_zhou_continue\0\0"
    "signal_Fuc_parameter\0time_update\0"
    "on_btn_auto_clicked\0on_btn_manual_clicked\0"
    "on_btn_fuc_parameter_clicked\0"
    "on_btn_warning_clicked\0on_btn_monitor_clicked\0"
    "on_btn_com_clicked\0on_btn_manual_qigang_clicked\0"
    "on_btn_manual_zhou_plus_clicked\0"
    "on_btn_manual_zhou_continue_clicked\0"
    "on_btn_manual_test_run_clicked\0"
    "on_btn_manual_stop_clicked\0"
    "on_pushButton_FixtureFlatten_2_clicked\0"
    "on_pushButton_FixtureStraighten_2_clicked\0"
    "on_pushButton_BobbinExtend_2_clicked\0"
    "on_pushButton_BobbinRetract_2_clicked\0"
    "on_pushButton_BrakeExtend_2_clicked\0"
    "on_pushButton_BrakeRetract_2_clicked\0"
    "on_pushButton_BraceExtend_2_clicked\0"
    "on_pushButton_BraceRetract_2_clicked\0"
    "on_pushButton_ClutchExtend_2_clicked\0"
    "on_pushButton_ClutchRetract_2_clicked\0"
    "on_pushButton_NozzleUp_2_clicked\0"
    "on_pushButton_NozzleDown_2_clicked\0"
    "on_pushButton_NozzleClose_2_clicked\0"
    "on_pushButton_NozzleAway_2_clicked\0"
    "on_pushButton_FanOpen_2_clicked\0"
    "on_pushButton_FanClose_2_clicked\0"
    "on_btn_X_left_move_clicked\0"
    "on_btn_X_right_move_clicked\0"
    "on_btn_X_stop_move_clicked\0"
    "on_btn_Y_jin_move_clicked\0"
    "on_btn_Y_yuan_move_clicked\0"
    "on_btn_Y_stop_move_clicked\0"
    "on_btn_Z_up_move_clicked\0"
    "on_btn_Z_down_move_clicked\0"
    "on_btn_Z_stop_move_clicked\0"
    "on_btn_B_move_clicked\0on_btn_A_move_clicked\0"
    "on_btn_AB_stop_move_clicked\0"
    "on_btn_shatong_move_clicked\0"
    "on_btn_shatong_stop_move_clicked\0"
    "on_btn_X_left_move_plus_clicked\0"
    "on_btn_X_right_move_plus_clicked\0"
    "on_btn_Y_Jin__puls_move_clicked\0"
    "on_btn_Y_yuan_move_Plus_clicked\0"
    "on_btn_Z_Up_move__puls_clicked\0"
    "on_btn_Z_Down_move_plus_clicked\0"
    "on_btn_B_move__puls_clicked\0"
    "on_btn_A_move_plus_clicked\0"
    "on_btn_Shatong_move_puls_clicked\0"
    "on_btn_sensor_monitor_clicked\0"
    "on_btn_qigang_moniter_clicked\0"
    "on_btn_Zhou_monitor_clicked\0"
    "on_btn_update_monitor_clicked\0"
    "on_btn_func_parameter_speed_clicked\0"
    "on_btn_111_clicked\0"
    "on_btn_Fucparameter_write_speedvalue_clicked\0"
    "on_pushButton_clicked\0"
    "on_pushButton_home_3_clicked\0"
    "on_pushButton_home_2_clicked\0"
    "on_pushButton_home_clicked\0"
    "on_pushButton_home_5_clicked\0"
    "on_pushButton_home_4_clicked\0"
    "on_pushButton_off_clicked\0"
    "on_pushButton_open_RTU_clicked\0"
    "on_pushButton_open_TCP_clicked\0"
    "on_pushButton_open_Camer_clicked\0"
    "on_btn_com_4_clicked\0on_btn_press_clicked\0"
    "on_btn_system_update_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      73,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  379,    2, 0x06 /* Public */,
       3,    0,  380,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  381,    2, 0x0a /* Public */,
       5,    0,  382,    2, 0x08 /* Private */,
       6,    0,  383,    2, 0x08 /* Private */,
       7,    0,  384,    2, 0x08 /* Private */,
       8,    0,  385,    2, 0x08 /* Private */,
       9,    0,  386,    2, 0x08 /* Private */,
      10,    0,  387,    2, 0x08 /* Private */,
      11,    0,  388,    2, 0x08 /* Private */,
      12,    0,  389,    2, 0x08 /* Private */,
      13,    0,  390,    2, 0x08 /* Private */,
      14,    0,  391,    2, 0x08 /* Private */,
      15,    0,  392,    2, 0x08 /* Private */,
      16,    0,  393,    2, 0x08 /* Private */,
      17,    0,  394,    2, 0x08 /* Private */,
      18,    0,  395,    2, 0x08 /* Private */,
      19,    0,  396,    2, 0x08 /* Private */,
      20,    0,  397,    2, 0x08 /* Private */,
      21,    0,  398,    2, 0x08 /* Private */,
      22,    0,  399,    2, 0x08 /* Private */,
      23,    0,  400,    2, 0x08 /* Private */,
      24,    0,  401,    2, 0x08 /* Private */,
      25,    0,  402,    2, 0x08 /* Private */,
      26,    0,  403,    2, 0x08 /* Private */,
      27,    0,  404,    2, 0x08 /* Private */,
      28,    0,  405,    2, 0x08 /* Private */,
      29,    0,  406,    2, 0x08 /* Private */,
      30,    0,  407,    2, 0x08 /* Private */,
      31,    0,  408,    2, 0x08 /* Private */,
      32,    0,  409,    2, 0x08 /* Private */,
      33,    0,  410,    2, 0x08 /* Private */,
      34,    0,  411,    2, 0x08 /* Private */,
      35,    0,  412,    2, 0x08 /* Private */,
      36,    0,  413,    2, 0x08 /* Private */,
      37,    0,  414,    2, 0x08 /* Private */,
      38,    0,  415,    2, 0x08 /* Private */,
      39,    0,  416,    2, 0x08 /* Private */,
      40,    0,  417,    2, 0x08 /* Private */,
      41,    0,  418,    2, 0x08 /* Private */,
      42,    0,  419,    2, 0x08 /* Private */,
      43,    0,  420,    2, 0x08 /* Private */,
      44,    0,  421,    2, 0x08 /* Private */,
      45,    0,  422,    2, 0x08 /* Private */,
      46,    0,  423,    2, 0x08 /* Private */,
      47,    0,  424,    2, 0x08 /* Private */,
      48,    0,  425,    2, 0x08 /* Private */,
      49,    0,  426,    2, 0x08 /* Private */,
      50,    0,  427,    2, 0x08 /* Private */,
      51,    0,  428,    2, 0x08 /* Private */,
      52,    0,  429,    2, 0x08 /* Private */,
      53,    0,  430,    2, 0x08 /* Private */,
      54,    0,  431,    2, 0x08 /* Private */,
      55,    0,  432,    2, 0x08 /* Private */,
      56,    0,  433,    2, 0x08 /* Private */,
      57,    0,  434,    2, 0x08 /* Private */,
      58,    0,  435,    2, 0x08 /* Private */,
      59,    0,  436,    2, 0x08 /* Private */,
      60,    0,  437,    2, 0x08 /* Private */,
      61,    0,  438,    2, 0x08 /* Private */,
      62,    0,  439,    2, 0x08 /* Private */,
      63,    0,  440,    2, 0x08 /* Private */,
      64,    0,  441,    2, 0x08 /* Private */,
      65,    0,  442,    2, 0x08 /* Private */,
      66,    0,  443,    2, 0x08 /* Private */,
      67,    0,  444,    2, 0x08 /* Private */,
      68,    0,  445,    2, 0x08 /* Private */,
      69,    0,  446,    2, 0x08 /* Private */,
      70,    0,  447,    2, 0x08 /* Private */,
      71,    0,  448,    2, 0x08 /* Private */,
      72,    0,  449,    2, 0x08 /* Private */,
      73,    0,  450,    2, 0x08 /* Private */,
      74,    0,  451,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_zhou_continue(); break;
        case 1: _t->signal_Fuc_parameter(); break;
        case 2: _t->time_update(); break;
        case 3: _t->on_btn_auto_clicked(); break;
        case 4: _t->on_btn_manual_clicked(); break;
        case 5: _t->on_btn_fuc_parameter_clicked(); break;
        case 6: _t->on_btn_warning_clicked(); break;
        case 7: _t->on_btn_monitor_clicked(); break;
        case 8: _t->on_btn_com_clicked(); break;
        case 9: _t->on_btn_manual_qigang_clicked(); break;
        case 10: _t->on_btn_manual_zhou_plus_clicked(); break;
        case 11: _t->on_btn_manual_zhou_continue_clicked(); break;
        case 12: _t->on_btn_manual_test_run_clicked(); break;
        case 13: _t->on_btn_manual_stop_clicked(); break;
        case 14: _t->on_pushButton_FixtureFlatten_2_clicked(); break;
        case 15: _t->on_pushButton_FixtureStraighten_2_clicked(); break;
        case 16: _t->on_pushButton_BobbinExtend_2_clicked(); break;
        case 17: _t->on_pushButton_BobbinRetract_2_clicked(); break;
        case 18: _t->on_pushButton_BrakeExtend_2_clicked(); break;
        case 19: _t->on_pushButton_BrakeRetract_2_clicked(); break;
        case 20: _t->on_pushButton_BraceExtend_2_clicked(); break;
        case 21: _t->on_pushButton_BraceRetract_2_clicked(); break;
        case 22: _t->on_pushButton_ClutchExtend_2_clicked(); break;
        case 23: _t->on_pushButton_ClutchRetract_2_clicked(); break;
        case 24: _t->on_pushButton_NozzleUp_2_clicked(); break;
        case 25: _t->on_pushButton_NozzleDown_2_clicked(); break;
        case 26: _t->on_pushButton_NozzleClose_2_clicked(); break;
        case 27: _t->on_pushButton_NozzleAway_2_clicked(); break;
        case 28: _t->on_pushButton_FanOpen_2_clicked(); break;
        case 29: _t->on_pushButton_FanClose_2_clicked(); break;
        case 30: _t->on_btn_X_left_move_clicked(); break;
        case 31: _t->on_btn_X_right_move_clicked(); break;
        case 32: _t->on_btn_X_stop_move_clicked(); break;
        case 33: _t->on_btn_Y_jin_move_clicked(); break;
        case 34: _t->on_btn_Y_yuan_move_clicked(); break;
        case 35: _t->on_btn_Y_stop_move_clicked(); break;
        case 36: _t->on_btn_Z_up_move_clicked(); break;
        case 37: _t->on_btn_Z_down_move_clicked(); break;
        case 38: _t->on_btn_Z_stop_move_clicked(); break;
        case 39: _t->on_btn_B_move_clicked(); break;
        case 40: _t->on_btn_A_move_clicked(); break;
        case 41: _t->on_btn_AB_stop_move_clicked(); break;
        case 42: _t->on_btn_shatong_move_clicked(); break;
        case 43: _t->on_btn_shatong_stop_move_clicked(); break;
        case 44: _t->on_btn_X_left_move_plus_clicked(); break;
        case 45: _t->on_btn_X_right_move_plus_clicked(); break;
        case 46: _t->on_btn_Y_Jin__puls_move_clicked(); break;
        case 47: _t->on_btn_Y_yuan_move_Plus_clicked(); break;
        case 48: _t->on_btn_Z_Up_move__puls_clicked(); break;
        case 49: _t->on_btn_Z_Down_move_plus_clicked(); break;
        case 50: _t->on_btn_B_move__puls_clicked(); break;
        case 51: _t->on_btn_A_move_plus_clicked(); break;
        case 52: _t->on_btn_Shatong_move_puls_clicked(); break;
        case 53: _t->on_btn_sensor_monitor_clicked(); break;
        case 54: _t->on_btn_qigang_moniter_clicked(); break;
        case 55: _t->on_btn_Zhou_monitor_clicked(); break;
        case 56: _t->on_btn_update_monitor_clicked(); break;
        case 57: _t->on_btn_func_parameter_speed_clicked(); break;
        case 58: _t->on_btn_111_clicked(); break;
        case 59: _t->on_btn_Fucparameter_write_speedvalue_clicked(); break;
        case 60: _t->on_pushButton_clicked(); break;
        case 61: _t->on_pushButton_home_3_clicked(); break;
        case 62: _t->on_pushButton_home_2_clicked(); break;
        case 63: _t->on_pushButton_home_clicked(); break;
        case 64: _t->on_pushButton_home_5_clicked(); break;
        case 65: _t->on_pushButton_home_4_clicked(); break;
        case 66: _t->on_pushButton_off_clicked(); break;
        case 67: _t->on_pushButton_open_RTU_clicked(); break;
        case 68: _t->on_pushButton_open_TCP_clicked(); break;
        case 69: _t->on_pushButton_open_Camer_clicked(); break;
        case 70: _t->on_btn_com_4_clicked(); break;
        case 71: _t->on_btn_press_clicked(); break;
        case 72: _t->on_btn_system_update_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_zhou_continue)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_Fuc_parameter)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 73)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 73;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 73)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 73;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signal_zhou_continue()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::signal_Fuc_parameter()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
