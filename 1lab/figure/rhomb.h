#ifndef RHOMB_H
#define RHOMB_H

#include <QWidget>

namespace Ui {
class Rhomb;
}

class Rhomb : public QWidget
{
    Q_OBJECT

public:
    explicit Rhomb(QWidget *parent = nullptr);
    ~Rhomb();

private slots:
    void on_calculatePushButton_clicked();

private:
    Ui::Rhomb *ui;
};

#endif // RHOMB_H
