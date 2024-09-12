/********************************************************************************
** Form generated from reading UI file 'triangle.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIANGLE_H
#define UI_TRIANGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Triangle
{
public:
    QLabel *image;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *inputlineEditA;
    QLineEdit *inputlineEditB;
    QLineEdit *inputlineEditC;
    QLabel *resultlabel;
    QPushButton *calculatePushButton;

    void setupUi(QWidget *Triangle)
    {
        if (Triangle->objectName().isEmpty())
            Triangle->setObjectName("Triangle");
        Triangle->resize(644, 447);
        image = new QLabel(Triangle);
        image->setObjectName("image");
        image->setGeometry(QRect(150, 210, 341, 191));
        image->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(Triangle);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 30, 501, 161));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
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

        calculatePushButton = new QPushButton(layoutWidget);
        calculatePushButton->setObjectName("calculatePushButton");

        gridLayout->addWidget(calculatePushButton, 3, 1, 1, 1);


        retranslateUi(Triangle);

        QMetaObject::connectSlotsByName(Triangle);
    } // setupUi

    void retranslateUi(QWidget *Triangle)
    {
        Triangle->setWindowTitle(QCoreApplication::translate("Triangle", "Form", nullptr));
        image->setText(QString());
        label->setText(QCoreApplication::translate("Triangle", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\273\320\270\320\275\320\275\321\213 \321\202\321\200\321\221\321\205 \321\201\321\202\320\276\321\200\320\276\320\275 \321\202\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\260", nullptr));
        resultlabel->setText(QCoreApplication::translate("Triangle", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \321\202\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\260 = 0", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("Triangle", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Triangle: public Ui_Triangle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIANGLE_H
