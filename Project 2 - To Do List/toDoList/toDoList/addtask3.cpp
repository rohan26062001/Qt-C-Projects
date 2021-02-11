#include "addtask3.h"
#include "ui_addtask3.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

addTask3::addTask3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTask3)
{
    ui->setupUi(this);
}

addTask3::~addTask3()
{
    delete ui;
}

void addTask3::on_set_clicked()
{
    QFile file3("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task3.txt");
    if(!file3.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"No file","No file like this");
    }
    QTextStream out(&file3);
    QString text=ui->description->toPlainText();
    out<<text;
    file3.flush();
    file3.close();


    QFile dl3("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline3.txt");
    if(!dl3.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"No file","No file like this");
    }

    QTextStream out_dl(&dl3);
    QString text_dl=ui->setDeadline->toPlainText();
    out_dl<<text_dl;
    dl3.flush();
    dl3.close();
}
