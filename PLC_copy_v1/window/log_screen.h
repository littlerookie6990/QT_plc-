#ifndef LOG_SCREEN_H
#define LOG_SCREEN_H

#include <QWidget>

#include <QMessageBox>

namespace Ui {
class log_screen;
}

class log_screen : public QWidget
{
    Q_OBJECT

public:
    explicit log_screen(QWidget *parent = nullptr);
    ~log_screen();

   QImage  ConvertImageToTransparent(QImage image/*QPixmap qPixmap*/);//转换图片

   log_screen *log;

private slots:
    void on_btn_log_clicked();

    void on_btn_cancel_clicked();

signals:
void  signals_open_mainwin();//打开主界面

private:
    Ui::log_screen *ui;
    //log_screen w_log;

};

#endif // LOG_SCREEN_H
