#include "window/mainwindow.h"//工作界面------------------其实在mian里面切换要简单一点

#include"window/Kont_window/kont_operate.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//argc是命令行参数的数目，argv是双重指针（指向命令行的开头）

    MainWindow w;
    w.show();

  // log_screen w_1;
    //w_1.show();

  //  log_screen w_log;
  // w_log.show();
   Kont_operate w_2;

  // w_2.show();


    return a.exec();//程序一直运行直到窗口关闭!
}
