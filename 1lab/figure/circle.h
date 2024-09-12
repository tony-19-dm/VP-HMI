#ifndef CIRCLE_H
#define CIRCLE_H

#include <QWidget>

namespace Ui {
class Circle;
}

class Circle : public QWidget
{
    Q_OBJECT

public:
    explicit Circle(QWidget *parent = nullptr);
    ~Circle();

private slots:
    void on_calculatePushButton_clicked();

private:
    Ui::Circle *ui;
};

#endif // CIRCLE_H
