#include "rectangle.h"
#include "ui_rectangle.h"

#include "QMenuBar"

#include "helpers.h"

Rectangle::Rectangle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Rectangle)
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
        ui->resultlabel->setText("Площадь квадрата = 0"); // Вернуть метке исходный текст
    });

    QPixmap pix("/Users/antondmitriev/Desktop/Sibsutis/3 course/vp/1lab/figure/assets/sqere.png");
    int w = ui->image->width();
    int h = ui->image->height();

    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

Rectangle::~Rectangle()
{
    delete ui;
}

void Rectangle::on_calculatePushButton_clicked()
{
    QString text = ui->inputlineEdit->text();
    bool ok;
    float number = text.toFloat(&ok);
    if (ok && (number > 0)) {
        Calculation calc; // Создаем объект класса Calculation
        float result = calc.calculationSquere(number);

        QString resultText = "Площадь квадрата = " + QString::number(result);
        ui->resultlabel->setText(resultText);
    } else {
        ui->resultlabel->setText("Ошибка: введено не число или число вне диапазона!");
    }
}

