/********************************************************************************
** Form generated from reading UI file 'circle.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIRCLE_H
#define UI_CIRCLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Circle
{
public:
    QLabel *image;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *inputlineEdit;
    QLabel *resultlabel;
    QPushButton *calculatePushButton;

    void setupUi(QWidget *Circle)
    {
        if (Circle->objectName().isEmpty())
            Circle->setObjectName("Circle");
        Circle->resize(672, 491);
        image = new QLabel(Circle);
        image->setObjectName("image");
        image->setGeometry(QRect(140, 240, 381, 191));
        widget = new QWidget(Circle);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(150, 50, 361, 141));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        inputlineEdit = new QLineEdit(widget);
        inputlineEdit->setObjectName("inputlineEdit");
        inputlineEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(inputlineEdit, 1, 0, 1, 1);

        resultlabel = new QLabel(widget);
        resultlabel->setObjectName("resultlabel");
        resultlabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(resultlabel, 2, 0, 1, 1);

        calculatePushButton = new QPushButton(widget);
        calculatePushButton->setObjectName("calculatePushButton");

        gridLayout->addWidget(calculatePushButton, 3, 0, 1, 1);


        retranslateUi(Circle);

        QMetaObject::connectSlotsByName(Circle);
    } // setupUi

    void retranslateUi(QWidget *Circle)
    {
        Circle->setWindowTitle(QCoreApplication::translate("Circle", "Form", nullptr));
        image->setText(QString());
        label->setText(QCoreApplication::translate("Circle", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\320\260\320\264\320\270\321\203\321\201 \320\272\321\200\321\203\320\263\320\260", nullptr));
        resultlabel->setText(QCoreApplication::translate("Circle", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \320\272\321\200\321\203\320\263\320\260 = 0", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("Circle", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Circle: public Ui_Circle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIRCLE_H
