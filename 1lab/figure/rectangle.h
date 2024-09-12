#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QWidget>

namespace Ui {
class Rectangle;
}

class Rectangle : public QWidget
{
    Q_OBJECT

public:
    explicit Rectangle(QWidget *parent = nullptr);
    ~Rectangle();

private slots:
    void on_calculatePushButton_clicked();

private:
    Ui::Rectangle *ui;
};

#endif // RECTANGLE_H
