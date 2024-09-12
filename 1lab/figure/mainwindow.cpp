#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->changeFigureBox->addItem("Квадрат");
    ui->changeFigureBox->addItem("Прямоугольник");
    ui->changeFigureBox->addItem("Параллелограм");
    ui->changeFigureBox->addItem("Ромб");
    ui->changeFigureBox->addItem("Треугольник");
    ui->changeFigureBox->addItem("Трапеция");
    ui->changeFigureBox->addItem("Круг");
    ui->changeFigureBox->addItem("Сектор круга");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->changeFigureBox->currentText() == "Квадрат"){
        //qDebug() << "Квадрат";
        rectangle.show();
    }
    else if(ui->changeFigureBox->currentText() == "Прямоугольник"){
        //qDebug() << "Прямоугольник";
        rect.show();
    }
    else if(ui->changeFigureBox->currentText() == "Параллелограм"){
        //qDebug() << "Параллелограм";
        parallelogram.show();
    }
    else if(ui->changeFigureBox->currentText() == "Ромб"){
        //qDebug() << "Ромб";
        rhomb.show();
    }
    else if(ui->changeFigureBox->currentText() == "Треугольник"){
        //qDebug() << "Треугольник";
        triangle.show();
    }
    else if(ui->changeFigureBox->currentText() == "Трапеция"){
        //qDebug() << "Трапеция";
        trapezoid.show();
    }
    else if(ui->changeFigureBox->currentText() == "Круг"){
        //qDebug() << "Круг";
        circle.show();
    }
    else if(ui->changeFigureBox->currentText() == "Сектор круга"){
        //qDebug() << "Сектор круга";
        circleSector.show();
    }
}


void MainWindow::on_exitAction_triggered()
{
    QWidget::close();
}

