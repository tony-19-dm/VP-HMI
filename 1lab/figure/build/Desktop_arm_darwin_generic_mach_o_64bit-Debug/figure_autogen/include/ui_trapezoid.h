/********************************************************************************
** Form generated from reading UI file 'trapezoid.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAPEZOID_H
#define UI_TRAPEZOID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Trapezoid
{
public:
    QLabel *image;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *inputlineEditA;
    QLineEdit *inputlineEditB;
    QLineEdit *inputlineEditC;
    QLabel *resultlabel;
    QPushButton *calculatePushButton;

    void setupUi(QWidget *Trapezoid)
    {
        if (Trapezoid->objectName().isEmpty())
            Trapezoid->setObjectName("Trapezoid");
        Trapezoid->resize(637, 464);
        image = new QLabel(Trapezoid);
        image->setObjectName("image");
        image->setGeometry(QRect(140, 210, 341, 191));
        image->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(Trapezoid);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 40, 501, 161));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        inputlineEditA = new QLineEdit(layoutWidget);
        inputlineEditA->setObjectName("inputlineEditA");
        inputlineEditA->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(inputlineEditA, 1, 0, 1, 1);

        inputlineEditB = new QLineEdit(layoutWidget);
        inputlineEditB->setObjectName("inputlineEditB");
        inputlineEditB->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(inputlineEditB, 1, 1, 1, 1);

        inputlineEditC = new QLineEdit(layoutWidget);
        inputlineEditC->setObjectName("inputlineEditC");
        inputlineEditC->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(inputlineEditC, 1, 2, 1, 1);

        resultlabel = new QLabel(layoutWidget);
        resultlabel->setObjectName("resultlabel");
        resultlabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(resultlabel, 2, 0, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        calculatePushButton = new QPushButton(layoutWidget);
        calculatePushButton->setObjectName("calculatePushButton");

        gridLayout_2->addWidget(calculatePushButton, 1, 0, 1, 1);


        retranslateUi(Trapezoid);

        QMetaObject::connectSlotsByName(Trapezoid);
    } // setupUi

    void retranslateUi(QWidget *Trapezoid)
    {
        Trapezoid->setWindowTitle(QCoreApplication::translate("Trapezoid", "Form", nullptr));
        image->setText(QString());
        label->setText(QCoreApplication::translate("Trapezoid", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\273\320\270\320\275\320\275\321\213 \320\276\321\201\320\276\320\275\320\262\320\260\320\275\320\270\320\271 \320\270 \320\262\321\213\321\201\320\276\321\202\321\203 \321\202\321\200\320\260\320\277\320\265\321\206\320\270\320\270", nullptr));
        resultlabel->setText(QCoreApplication::translate("Trapezoid", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \321\202\321\200\320\260\320\277\320\265\321\206\320\270\320\270 = 0", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("Trapezoid", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Trapezoid: public Ui_Trapezoid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAPEZOID_H
