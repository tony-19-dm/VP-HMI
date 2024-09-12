/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_213;
    QAction *exitAction;
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QComboBox *changeFigureBox;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *Author;
    QMenu *Exit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(386, 264);
        action_213 = new QAction(MainWindow);
        action_213->setObjectName("action_213");
        exitAction = new QAction(MainWindow);
        exitAction->setObjectName("exitAction");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 40, 241, 121));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        changeFigureBox = new QComboBox(widget);
        changeFigureBox->setObjectName("changeFigureBox");

        gridLayout->addWidget(changeFigureBox, 0, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 386, 24));
        Author = new QMenu(menubar);
        Author->setObjectName("Author");
        Exit = new QMenu(menubar);
        Exit->setObjectName("Exit");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(Author->menuAction());
        menubar->addAction(Exit->menuAction());
        Author->addAction(action_213);
        Exit->addAction(exitAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_213->setText(QCoreApplication::translate("MainWindow", "\320\224\320\274\320\270\321\202\321\200\320\270\320\265\320\262 \320\220\320\275\321\202\320\276\320\275 \320\230\320\237-213", nullptr));
        exitAction->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\270\320\263\321\203\321\200\321\203", nullptr));
        Author->setTitle(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        Exit->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
