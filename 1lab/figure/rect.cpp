#include "rect.h"
#include "ui_rect.h"

#include "QMenuBar"

#include "helpers.h"

Rect::Rect(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Rect)
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
        ui->resultlabel->setText("Площадь прямоугольника = 0"); // Вернуть метке исходный текст
    });

    QPixmap pix("/Users/antondmitriev/Desktop/Sibsutis/3 course/vp/1lab/figure/assets/rectangle.png");
    int w = ui->image->width();
    int h = ui->image->height();

    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

Rect::~Rect()
{
    delete ui;
}

void Rect::on_calculatePushButton_clicked()
{
    QString text1 = ui->inputlineEditA->text();
    bool ok1;
    float number1 = text1.toFloat(&ok1);
    QString text2 = ui->inputlineEditB->text();
    bool ok2;
    float number2 = text2.toFloat(&ok2);
    if (ok1 && ok2 && (number1 > 0) && (number2 > 0)) {
        Calculation calc; // Создаем объект класса Calculation
        float result = calc.calculationRectangle(number1, number2);
        QString resultText = "Площадь прямоугольника = " + QString::number(result);
        ui->resultlabel->setText(resultText);
    } else {
        ui->resultlabel->setText("Ошибка: введено не число или число вне диапазона!");
    }
}
