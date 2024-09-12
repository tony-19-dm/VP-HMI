/********************************************************************************
** Form generated from reading UI file 'parallelogram.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARALLELOGRAM_H
#define UI_PARALLELOGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Parallelogram
{
public:
    QLabel *image;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *inputlineEditB;
    QLineEdit *inputlineEditC;
    QLabel *label;
    QLineEdit *inputlineEditA;
    QLabel *resultlabel;
    QPushButton *calculatePushButton;

    void setupUi(QWidget *Parallelogram)
    {
        if (Parallelogram->objectName().isEmpty())
            Parallelogram->setObjectName("Parallelogram");
        Parallelogram->resize(593, 442);
        image = new QLabel(Parallelogram);
        image->setObjectName("image");
        image->setGeometry(QRect(120, 210, 341, 191));
        image->setAlignment(Qt::AlignmentFlag::AlignCenter);
        widget = new QWidget(Parallelogram);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 20, 481, 151));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        inputlineEditB = new QLineEdit(widget);
        inputlineEditB->setObjectName("inputlineEditB");
        inputlineEditB->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(inputlineEditB, 1, 1, 1, 1);

        inputlineEditC = new QLineEdit(widget);
        inputlineEditC->setObjectName("inputlineEditC");
        inputlineEditC->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(inputlineEditC, 1, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        inputlineEditA = new QLineEdit(widget);
        inputlineEditA->setObjectName("inputlineEditA");
        inputlineEditA->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(inputlineEditA, 1, 0, 1, 1);

        resultlabel = new QLabel(widget);
        resultlabel->setObjectName("resultlabel");
        resultlabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(resultlabel, 2, 0, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        calculatePushButton = new QPushButton(widget);
        calculatePushButton->setObjectName("calculatePushButton");

        gridLayout_2->addWidget(calculatePushButton, 1, 0, 1, 1);


        retranslateUi(Parallelogram);

        QMetaObject::connectSlotsByName(Parallelogram);
    } // setupUi

    void retranslateUi(QWidget *Parallelogram)
    {
        Parallelogram->setWindowTitle(QCoreApplication::translate("Parallelogram", "Form", nullptr));
        image->setText(QString());
        label->setText(QCoreApplication::translate("Parallelogram", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\273\320\270\320\275\320\275\321\213 \321\201\321\202\320\276\321\200\320\276\320\275 \320\270 \321\203\320\263\320\276\320\273 \320\274\320\265\320\266\320\264\321\203 \320\275\320\270\320\274\320\270 \320\264\320\273\321\217 \320\277\320\260\321\200\320\260\320\273\320\273\320\265\320\273\320\276\320\263\321\200\320\260\320\274\320\274\320\260", nullptr));
        resultlabel->setText(QCoreApplication::translate("Parallelogram", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \320\277\320\260\321\200\320\260\320\273\320\273\320\265\320\273\320\276\320\263\321\200\320\260\320\274\320\274\320\260 = 0", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("Parallelogram", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Parallelogram: public Ui_Parallelogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARALLELOGRAM_H
