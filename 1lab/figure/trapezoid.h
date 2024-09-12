#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include <QWidget>

namespace Ui {
class Trapezoid;
}

class Trapezoid : public QWidget
{
    Q_OBJECT

public:
    explicit Trapezoid(QWidget *parent = nullptr);
    ~Trapezoid();

private slots:
    void on_calculatePushButton_clicked();

private:
    Ui::Trapezoid *ui;
};

#endif // TRAPEZOID_H
