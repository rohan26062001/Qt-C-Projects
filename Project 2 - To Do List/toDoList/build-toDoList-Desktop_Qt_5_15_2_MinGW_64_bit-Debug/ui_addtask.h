/********************************************************************************
** Form generated from reading UI file 'addtask.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASK_H
#define UI_ADDTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addTask
{
public:
    QLabel *label_1;
    QLabel *label_2;
    QTextEdit *description;
    QPushButton *set;
    QTextEdit *setDeadline;

    void setupUi(QDialog *addTask)
    {
        if (addTask->objectName().isEmpty())
            addTask->setObjectName(QString::fromUtf8("addTask"));
        addTask->resize(400, 300);
        label_1 = new QLabel(addTask);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(60, 70, 51, 16));
        label_2 = new QLabel(addTask);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 100, 61, 21));
        description = new QTextEdit(addTask);
        description->setObjectName(QString::fromUtf8("description"));
        description->setGeometry(QRect(110, 100, 221, 151));
        set = new QPushButton(addTask);
        set->setObjectName(QString::fromUtf8("set"));
        set->setGeometry(QRect(170, 270, 75, 23));
        setDeadline = new QTextEdit(addTask);
        setDeadline->setObjectName(QString::fromUtf8("setDeadline"));
        setDeadline->setGeometry(QRect(110, 60, 221, 31));

        retranslateUi(addTask);

        QMetaObject::connectSlotsByName(addTask);
    } // setupUi

    void retranslateUi(QDialog *addTask)
    {
        addTask->setWindowTitle(QCoreApplication::translate("addTask", "Dialog", nullptr));
        label_1->setText(QCoreApplication::translate("addTask", "Deadline:", nullptr));
        label_2->setText(QCoreApplication::translate("addTask", "Description:", nullptr));
        set->setText(QCoreApplication::translate("addTask", "Set", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addTask: public Ui_addTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASK_H
