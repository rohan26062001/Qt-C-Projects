#include "addtask4.h"
#include "ui_addtask4.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

addTask4::addTask4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTask4)
{
    ui->setupUi(this);
}

addTask4::~addTask4()
{
    delete ui;
}

void addTask4::on_set_clicked()
{
    QFile file4("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task4.txt");
    if(!file4.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"No file","No file like this");
    }
    QTextStream out(&file4);
    QString text=ui->description->toPlainText();
    out<<text;
    file4.flush();
    file4.close();


    QFile dl4("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline4.txt");
    if(!dl4.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"No file","No file like this");
    }

    QTextStream out_dl(&dl4);
    QString text_dl=ui->setDeadline->toPlainText();
    out_dl<<text_dl;
    dl4.flush();
    dl4.close();
}
