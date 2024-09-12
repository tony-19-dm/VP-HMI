#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <QWidget>

namespace Ui {
class Triangle;
}

class Triangle : public QWidget
{
    Q_OBJECT

public:
    explicit Triangle(QWidget *parent = nullptr);
    ~Triangle();

private slots:
    void on_calculatePushButton_clicked();

private:
    Ui::Triangle *ui;
};

#endif // TRIANGLE_H
