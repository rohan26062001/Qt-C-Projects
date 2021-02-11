/********************************************************************************
** Form generated from reading UI file 'addtask4.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASK4_H
#define UI_ADDTASK4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addTask4
{
public:
    QTextEdit *description;
    QTextEdit *setDeadline;
    QPushButton *set;
    QLabel *label_2;
    QLabel *label_1;

    void setupUi(QDialog *addTask4)
    {
        if (addTask4->objectName().isEmpty())
            addTask4->setObjectName(QString::fromUtf8("addTask4"));
        addTask4->resize(400, 300);
        description = new QTextEdit(addTask4);
        description->setObjectName(QString::fromUtf8("description"));
        description->setGeometry(QRect(110, 90, 221, 151));
        setDeadline = new QTextEdit(addTask4);
        setDeadline->setObjectName(QString::fromUtf8("setDeadline"));
        setDeadline->setGeometry(QRect(110, 50, 221, 31));
        set = new QPushButton(addTask4);
        set->setObjectName(QString::fromUtf8("set"));
        set->setGeometry(QRect(170, 260, 75, 23));
        label_2 = new QLabel(addTask4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 90, 61, 21));
        label_1 = new QLabel(addTask4);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(60, 60, 51, 16));

        retranslateUi(addTask4);

        QMetaObject::connectSlotsByName(addTask4);
    } // setupUi

    void retranslateUi(QDialog *addTask4)
    {
        addTask4->setWindowTitle(QCoreApplication::translate("addTask4", "Dialog", nullptr));
        set->setText(QCoreApplication::translate("addTask4", "Set", nullptr));
        label_2->setText(QCoreApplication::translate("addTask4", "Description:", nullptr));
        label_1->setText(QCoreApplication::translate("addTask4", "Deadline:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addTask4: public Ui_addTask4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASK4_H
