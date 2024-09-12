#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include <QWidget>

namespace Ui {
class Parallelogram;
}

class Parallelogram : public QWidget
{
    Q_OBJECT

public:
    explicit Parallelogram(QWidget *parent = nullptr);
    ~Parallelogram();

private slots:
    void on_calculatePushButton_clicked();

private:
    Ui::Parallelogram *ui;
};

#endif // PARALLELOGRAM_H
