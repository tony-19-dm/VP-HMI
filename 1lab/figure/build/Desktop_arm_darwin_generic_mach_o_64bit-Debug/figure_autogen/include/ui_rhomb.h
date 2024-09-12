/********************************************************************************
** Form generated from reading UI file 'rhomb.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RHOMB_H
#define UI_RHOMB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rhomb
{
public:
    QLabel *image;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *inputlineEditA;
    QLineEdit *inputlineEditB;
    QLabel *resultlabel;
    QPushButton *calculatePushButton;

    void setupUi(QWidget *Rhomb)
    {
        if (Rhomb->objectName().isEmpty())
            Rhomb->setObjectName("Rhomb");
        Rhomb->resize(682, 444);
        image = new QLabel(Rhomb);
        image->setObjectName("image");
        image->setGeometry(QRect(160, 230, 371, 191));
        image->setAlignment(Qt::AlignmentFlag::AlignCenter);
        widget = new QWidget(Rhomb);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 40, 451, 141));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        inputlineEditA = new QLineEdit(widget);
        inputlineEditA->setObjectName("inputlineEditA");
        inputlineEditA->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(inputlineEditA, 1, 0, 1, 1);

        inputlineEditB = new QLineEdit(widget);
        inputlineEditB->setObjectName("inputlineEditB");
        inputlineEditB->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(inputlineEditB, 1, 1, 1, 1);

        resultlabel = new QLabel(widget);
        resultlabel->setObjectName("resultlabel");
        resultlabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(resultlabel, 2, 0, 1, 2);

        calculatePushButton = new QPushButton(widget);
        calculatePushButton->setObjectName("calculatePushButton");

        gridLayout->addWidget(calculatePushButton, 3, 0, 1, 2);


        retranslateUi(Rhomb);

        QMetaObject::connectSlotsByName(Rhomb);
    } // setupUi

    void retranslateUi(QWidget *Rhomb)
    {
        Rhomb->setWindowTitle(QCoreApplication::translate("Rhomb", "Form", nullptr));
        image->setText(QString());
        label->setText(QCoreApplication::translate("Rhomb", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\273\320\270\320\275\320\275\321\203 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 \320\270 \321\203\320\263\320\276\320\273 \321\200\320\276\320\274\320\261\320\260", nullptr));
        resultlabel->setText(QCoreApplication::translate("Rhomb", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \321\200\320\276\320\274\320\261\320\260 = 0", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("Rhomb", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rhomb: public Ui_Rhomb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RHOMB_H
