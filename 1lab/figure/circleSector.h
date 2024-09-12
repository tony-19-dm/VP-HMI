#ifndef CIRCLESECTOR_H
#define CIRCLESECTOR_H

#include <QWidget>

namespace Ui {
class CircleSector;
}

class CircleSector : public QWidget
{
    Q_OBJECT

public:
    explicit CircleSector(QWidget *parent = nullptr);
    ~CircleSector();

private slots:
    void on_calculatePushButton_clicked();

private:
    Ui::CircleSector *ui;
};

#endif // CIRCLESECTOR_H
