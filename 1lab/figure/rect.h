#ifndef RECT_H
#define RECT_H

#include <QWidget>

namespace Ui {
class Rect;
}

class Rect : public QWidget
{
    Q_OBJECT

public:
    explicit Rect(QWidget *parent = nullptr);
    ~Rect();

private slots:
    void on_calculatePushButton_clicked();

private:
    Ui::Rect *ui;
};

#endif // RECT_H
