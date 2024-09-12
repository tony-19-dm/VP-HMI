#include "circle.h"
#include "ui_circle.h"

#include "QMenuBar"

#include "helpers.h"

Circle::Circle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Circle)
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
        ui->inputlineEdit->clear();  // Очистить поле ввода
        ui->resultlabel->setText("Площадь круга = 0"); // Вернуть метке исходный текст
    });

    QPixmap pix("/Users/antondmitriev/Desktop/Sibsutis/3 course/vp/1lab/figure/assets/circle.png");
    int w = ui->image->width();
    int h = ui->image->height();

    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

Circle::~Circle()
{
    delete ui;
}

void Circle::on_calculatePushButton_clicked()
{
    QString text = ui->inputlineEdit->text();
    bool ok;
    float number = text.toFloat(&ok);
    if (ok && (number > 0)) {
        Calculation calc; // Создаем объект класса Calculation
        float result = calc.calculationCircle(number);

        QString resultText = "Площадь круга = " + QString::number(result);
        ui->resultlabel->setText(resultText);
    } else {
        ui->resultlabel->setText("Ошибка: введено не число или число вне диапазона!");
    }
}

