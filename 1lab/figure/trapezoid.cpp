#include "trapezoid.h"
#include "ui_trapezoid.h"

#include "QMenuBar"

#include "helpers.h"

Trapezoid::Trapezoid(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Trapezoid)
{
    ui->setupUi(this);

    QMenuBar *menuBar = new QMenuBar(this);

    QMenu *autorMenu = new QMenu("Автор", this);
    menuBar->addMenu(autorMenu);
    autorMenu->addAction("Дмитриев Антон ИП-213");

    QMenu *exitMenu = new QMenu("Выход", this);
    menuBar->addMenu(exitMenu);
    QAction *exitAction = exitMenu->addAction("Выход");

    // Связываем действие с функцией закрытия окна
    connect(exitAction, &QAction::triggered, this, &QWidget::close);

    QMenu *resetMenu = new QMenu("Сброс", this);
    menuBar->addMenu(resetMenu);
    QAction *resetAction = resetMenu->addAction("Сброс");

    connect(resetAction, &QAction::triggered, this, [=]() {
        ui->inputlineEditA->clear();  // Очистить поле ввода
        ui->inputlineEditB->clear();
        ui->inputlineEditC->clear();
        ui->resultlabel->setText("Площадь трапеции = 0"); // Вернуть метке исходный текст
    });

    QPixmap pix("/Users/antondmitriev/Desktop/Sibsutis/3 course/vp/1lab/figure/assets/trapezoid.png");
    int w = ui->image->width();
    int h = ui->image->height();

    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

Trapezoid::~Trapezoid()
{
    delete ui;
}

void Trapezoid::on_calculatePushButton_clicked()
{
    QString text1 = ui->inputlineEditA->text();
    bool ok1;
    float number1 = text1.toFloat(&ok1);
    QString text2 = ui->inputlineEditB->text();
    bool ok2;
    float number2 = text2.toFloat(&ok2);
    QString text3 = ui->inputlineEditC->text();
    bool ok3;
    int number3 = text3.toFloat(&ok3);

    if (ok1 && ok2 && ok3 && (number1 > 0) && (number2 > 0) && (number3 > 0)) {
        Calculation calc; // Создаем объект класса Calculation
        float result = calc.calculationTrapezoud(number1, number2, number3);
        QString resultText = "Площадь трапеции = " + QString::number(result);
        ui->resultlabel->setText(resultText);
    } else {
        ui->resultlabel->setText("Ошибка: введено не число или число вне диапазона!");
    }
}

