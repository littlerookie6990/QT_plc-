#ifndef KONT_PARAMETER_H
#define KONT_PARAMETER_H

#include <QWidget>

namespace Ui {
class Kont_parameter;
}

class Kont_parameter : public QWidget
{
    Q_OBJECT

public:
    explicit Kont_parameter(QWidget *parent = nullptr);
    ~Kont_parameter();

private:
    Ui::Kont_parameter *ui;
};

#endif // KONT_PARAMETER_H
