/********************************************************************************
** Form generated from reading UI file 'circleSector.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIRCLESECTOR_H
#define UI_CIRCLESECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CircleSector
{
public:
    QLabel *image;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *inputlineEditA;
    QLineEdit *inputlineEditB;
    QLabel *resultlabel;
    QPushButton *calculatePushButton;

    void setupUi(QWidget *CircleSector)
    {
        if (CircleSector->objectName().isEmpty())
            CircleSector->setObjectName("CircleSector");
        CircleSector->resize(623, 466);
        image = new QLabel(CircleSector);
        image->setObjectName("image");
        image->setGeometry(QRect(150, 240, 321, 181));
        layoutWidget = new QWidget(CircleSector);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(100, 50, 431, 151));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        inputlineEditA = new QLineEdit(layoutWidget);
        inputlineEditA->setObjectName("inputlineEditA");
        inputlineEditA->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(inputlineEditA, 1, 0, 1, 1);

        inputlineEditB = new QLineEdit(layoutWidget);
        inputlineEditB->setObjectName("inputlineEditB");
        inputlineEditB->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(inputlineEditB, 1, 1, 1, 1);

        resultlabel = new QLabel(layoutWidget);
        resultlabel->setObjectName("resultlabel");
        resultlabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(resultlabel, 2, 0, 1, 2);

        calculatePushButton = new QPushButton(layoutWidget);
        calculatePushButton->setObjectName("calculatePushButton");

        gridLayout->addWidget(calculatePushButton, 3, 0, 1, 2);


        retranslateUi(CircleSector);

        QMetaObject::connectSlotsByName(CircleSector);
    } // setupUi

    void retranslateUi(QWidget *CircleSector)
    {
        CircleSector->setWindowTitle(QCoreApplication::translate("CircleSector", "Form", nullptr));
        image->setText(QString());
        label->setText(QCoreApplication::translate("CircleSector", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\320\260\320\264\320\270\321\203\321\201 \320\270 \321\203\320\263\320\276\320\273 \321\201\320\265\320\272\321\202\320\276\321\200\320\260 \320\272\321\200\321\203\320\263\320\260", nullptr));
        resultlabel->setText(QCoreApplication::translate("CircleSector", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \321\201\320\265\320\272\321\202\320\276\321\200\320\260 \320\272\321\200\321\203\320\263\320\260 = 0", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("CircleSector", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CircleSector: public Ui_CircleSector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIRCLESECTOR_H
