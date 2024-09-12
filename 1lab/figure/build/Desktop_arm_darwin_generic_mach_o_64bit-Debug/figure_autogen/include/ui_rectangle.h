/********************************************************************************
** Form generated from reading UI file 'rectangle.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECTANGLE_H
#define UI_RECTANGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rectangle
{
public:
    QLabel *image;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *inputlineEdit;
    QLabel *resultlabel;
    QPushButton *calculatePushButton;

    void setupUi(QWidget *Rectangle)
    {
        if (Rectangle->objectName().isEmpty())
            Rectangle->setObjectName("Rectangle");
        Rectangle->resize(593, 341);
        image = new QLabel(Rectangle);
        image->setObjectName("image");
        image->setGeometry(QRect(390, 40, 181, 191));
        layoutWidget = new QWidget(Rectangle);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 70, 361, 114));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        inputlineEdit = new QLineEdit(layoutWidget);
        inputlineEdit->setObjectName("inputlineEdit");
        inputlineEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(inputlineEdit, 1, 0, 1, 1);

        resultlabel = new QLabel(layoutWidget);
        resultlabel->setObjectName("resultlabel");
        resultlabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(resultlabel, 2, 0, 1, 1);

        calculatePushButton = new QPushButton(layoutWidget);
        calculatePushButton->setObjectName("calculatePushButton");

        gridLayout->addWidget(calculatePushButton, 3, 0, 1, 1);


        retranslateUi(Rectangle);

        QMetaObject::connectSlotsByName(Rectangle);
    } // setupUi

    void retranslateUi(QWidget *Rectangle)
    {
        Rectangle->setWindowTitle(QCoreApplication::translate("Rectangle", "Form", nullptr));
        image->setText(QString());
        label->setText(QCoreApplication::translate("Rectangle", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\273\320\270\320\275\320\275\321\203 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 \320\272\320\262\320\260\320\264\321\200\320\260\321\202\320\260", nullptr));
        resultlabel->setText(QCoreApplication::translate("Rectangle", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \320\272\320\262\320\260\320\264\321\200\320\260\321\202\320\260 = 0", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("Rectangle", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rectangle: public Ui_Rectangle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTANGLE_H
