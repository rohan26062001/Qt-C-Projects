/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_1;
    QPushButton *add1;
    QPushButton *done1;
    QLabel *label_2;
    QPushButton *add2;
    QPushButton *done2;
    QLabel *label_3;
    QPushButton *add3;
    QPushButton *done3;
    QLabel *label_4;
    QPushButton *add4;
    QPushButton *done4;
    QLabel *label;
    QLabel *label_5;
    QTextBrowser *task1;
    QTextBrowser *task2;
    QTextBrowser *task3;
    QTextBrowser *task4;
    QTextBrowser *deadline1;
    QTextBrowser *deadline2;
    QTextBrowser *deadline3;
    QTextBrowser *deadline4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(747, 638);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 741, 651));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 202, 18);"));
        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(20, 150, 51, 16));
        add1 = new QPushButton(groupBox);
        add1->setObjectName(QString::fromUtf8("add1"));
        add1->setGeometry(QRect(554, 150, 81, 23));
        done1 = new QPushButton(groupBox);
        done1->setObjectName(QString::fromUtf8("done1"));
        done1->setGeometry(QRect(640, 150, 81, 23));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 270, 51, 16));
        add2 = new QPushButton(groupBox);
        add2->setObjectName(QString::fromUtf8("add2"));
        add2->setGeometry(QRect(550, 270, 81, 23));
        done2 = new QPushButton(groupBox);
        done2->setObjectName(QString::fromUtf8("done2"));
        done2->setGeometry(QRect(640, 270, 81, 23));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 390, 51, 16));
        add3 = new QPushButton(groupBox);
        add3->setObjectName(QString::fromUtf8("add3"));
        add3->setGeometry(QRect(550, 390, 81, 23));
        done3 = new QPushButton(groupBox);
        done3->setObjectName(QString::fromUtf8("done3"));
        done3->setGeometry(QRect(640, 390, 81, 23));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 510, 51, 16));
        add4 = new QPushButton(groupBox);
        add4->setObjectName(QString::fromUtf8("add4"));
        add4->setGeometry(QRect(550, 510, 81, 23));
        done4 = new QPushButton(groupBox);
        done4->setObjectName(QString::fromUtf8("done4"));
        done4->setGeometry(QRect(640, 510, 81, 23));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 560, 91, 20));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 20, 171, 31));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 26, 255);\n"
"font: 75 24pt \"Times New Roman\";\n"
"color: red;"));
        task1 = new QTextBrowser(groupBox);
        task1->setObjectName(QString::fromUtf8("task1"));
        task1->setGeometry(QRect(10, 70, 721, 111));
        task2 = new QTextBrowser(groupBox);
        task2->setObjectName(QString::fromUtf8("task2"));
        task2->setGeometry(QRect(10, 190, 721, 111));
        task3 = new QTextBrowser(groupBox);
        task3->setObjectName(QString::fromUtf8("task3"));
        task3->setGeometry(QRect(10, 310, 721, 111));
        task4 = new QTextBrowser(groupBox);
        task4->setObjectName(QString::fromUtf8("task4"));
        task4->setGeometry(QRect(10, 430, 721, 111));
        deadline1 = new QTextBrowser(groupBox);
        deadline1->setObjectName(QString::fromUtf8("deadline1"));
        deadline1->setGeometry(QRect(70, 140, 141, 31));
        deadline2 = new QTextBrowser(groupBox);
        deadline2->setObjectName(QString::fromUtf8("deadline2"));
        deadline2->setGeometry(QRect(70, 260, 141, 31));
        deadline3 = new QTextBrowser(groupBox);
        deadline3->setObjectName(QString::fromUtf8("deadline3"));
        deadline3->setGeometry(QRect(70, 380, 141, 31));
        deadline4 = new QTextBrowser(groupBox);
        deadline4->setObjectName(QString::fromUtf8("deadline4"));
        deadline4->setGeometry(QRect(70, 500, 141, 31));
        task4->raise();
        task3->raise();
        task2->raise();
        task1->raise();
        label_1->raise();
        add1->raise();
        done1->raise();
        label_2->raise();
        add2->raise();
        done2->raise();
        label_3->raise();
        add3->raise();
        done3->raise();
        label_4->raise();
        add4->raise();
        done4->raise();
        label->raise();
        label_5->raise();
        deadline1->raise();
        deadline2->raise();
        deadline3->raise();
        deadline4->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 747, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "To Do List", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "Deadline:", nullptr));
        add1->setText(QCoreApplication::translate("MainWindow", "Add New Task", nullptr));
        done1->setText(QCoreApplication::translate("MainWindow", "Done", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Deadline:", nullptr));
        add2->setText(QCoreApplication::translate("MainWindow", "Add New Task", nullptr));
        done2->setText(QCoreApplication::translate("MainWindow", "Done", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Deadline:", nullptr));
        add3->setText(QCoreApplication::translate("MainWindow", "Add New Task", nullptr));
        done3->setText(QCoreApplication::translate("MainWindow", "Done", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Deadline:", nullptr));
        add4->setText(QCoreApplication::translate("MainWindow", "Add New Task", nullptr));
        done4->setText(QCoreApplication::translate("MainWindow", "Done", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Project by Rohan", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "TO DO LIST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
