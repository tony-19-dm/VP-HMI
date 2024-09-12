#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rectangle.h"
#include "rect.h"
#include "parallelogram.h"
#include "rhomb.h"
#include "triangle.h"
#include "trapezoid.h"
#include "circle.h"
#include "circleSector.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_exitAction_triggered();

private:
    Ui::MainWindow *ui;
    Rectangle rectangle;
    Rect rect;
    Parallelogram parallelogram;
    Rhomb rhomb;
    Triangle triangle;
    Trapezoid trapezoid;
    Circle circle;
    CircleSector circleSector;
};
#endif // MAINWINDOW_H
