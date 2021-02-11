/********************************************************************************
** Form generated from reading UI file 'addtask2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASK2_H
#define UI_ADDTASK2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addTask2
{
public:
    QTextEdit *setDeadline;
    QLabel *label_1;
    QPushButton *set;
    QTextEdit *description;
    QLabel *label_2;

    void setupUi(QDialog *addTask2)
    {
        if (addTask2->objectName().isEmpty())
            addTask2->setObjectName(QString::fromUtf8("addTask2"));
        addTask2->resize(400, 300);
        setDeadline = new QTextEdit(addTask2);
        setDeadline->setObjectName(QString::fromUtf8("setDeadline"));
        setDeadline->setGeometry(QRect(110, 60, 221, 31));
        label_1 = new QLabel(addTask2);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(60, 70, 51, 16));
        set = new QPushButton(addTask2);
        set->setObjectName(QString::fromUtf8("set"));
        set->setGeometry(QRect(170, 270, 75, 23));
        description = new QTextEdit(addTask2);
        description->setObjectName(QString::fromUtf8("description"));
        description->setGeometry(QRect(110, 100, 221, 151));
        label_2 = new QLabel(addTask2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 100, 61, 21));

        retranslateUi(addTask2);

        QMetaObject::connectSlotsByName(addTask2);
    } // setupUi

    void retranslateUi(QDialog *addTask2)
    {
        addTask2->setWindowTitle(QCoreApplication::translate("addTask2", "Dialog", nullptr));
        label_1->setText(QCoreApplication::translate("addTask2", "Deadline:", nullptr));
        set->setText(QCoreApplication::translate("addTask2", "Set", nullptr));
        label_2->setText(QCoreApplication::translate("addTask2", "Description:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addTask2: public Ui_addTask2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASK2_H
