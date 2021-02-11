/********************************************************************************
** Form generated from reading UI file 'addtask3.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASK3_H
#define UI_ADDTASK3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addTask3
{
public:
    QLabel *label_1;
    QLabel *label_2;
    QTextEdit *setDeadline;
    QPushButton *set;
    QTextEdit *description;

    void setupUi(QDialog *addTask3)
    {
        if (addTask3->objectName().isEmpty())
            addTask3->setObjectName(QString::fromUtf8("addTask3"));
        addTask3->resize(400, 300);
        label_1 = new QLabel(addTask3);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(50, 60, 51, 16));
        label_2 = new QLabel(addTask3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 90, 61, 21));
        setDeadline = new QTextEdit(addTask3);
        setDeadline->setObjectName(QString::fromUtf8("setDeadline"));
        setDeadline->setGeometry(QRect(100, 50, 221, 31));
        set = new QPushButton(addTask3);
        set->setObjectName(QString::fromUtf8("set"));
        set->setGeometry(QRect(160, 260, 75, 23));
        description = new QTextEdit(addTask3);
        description->setObjectName(QString::fromUtf8("description"));
        description->setGeometry(QRect(100, 90, 221, 151));

        retranslateUi(addTask3);

        QMetaObject::connectSlotsByName(addTask3);
    } // setupUi

    void retranslateUi(QDialog *addTask3)
    {
        addTask3->setWindowTitle(QCoreApplication::translate("addTask3", "Dialog", nullptr));
        label_1->setText(QCoreApplication::translate("addTask3", "Deadline:", nullptr));
        label_2->setText(QCoreApplication::translate("addTask3", "Description:", nullptr));
        set->setText(QCoreApplication::translate("addTask3", "Set", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addTask3: public Ui_addTask3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASK3_H
