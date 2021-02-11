#include "addtask2.h"
#include "ui_addtask2.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

addTask2::addTask2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTask2)
{
    ui->setupUi(this);
}

addTask2::~addTask2()
{
    delete ui;
}

void addTask2::on_set_clicked()
{
    QFile file2("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task2.txt");
    if(!file2.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"No file","No file like this");
    }
    QTextStream out(&file2);
    QString text=ui->description->toPlainText();
    out<<text;
    file2.flush();
    file2.close();


    QFile dl2("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline2.txt");
    if(!dl2.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"No file","No file like this");
    }

    QTextStream out_dl(&dl2);
    QString text_dl=ui->setDeadline->toPlainText();
    out_dl<<text_dl;
    dl2.flush();
    dl2.close();
}
