#include "addtask.h"
#include "ui_addtask.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

addTask::addTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTask)
{
    ui->setupUi(this);

}

addTask::~addTask()
{
    delete ui;
}

void addTask::on_set_clicked()
{
    QFile file1("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task1.txt");
    if(!file1.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"No file","No file like this");
    }
    QTextStream out(&file1);
    QString text=ui->description->toPlainText();
    out<<text;
    file1.flush();
    file1.close();


    QFile dl1("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline1.txt");
    if(!dl1.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"No file","No file like this");
    }

    QTextStream out_dl(&dl1);
    QString text_dl=ui->setDeadline->toPlainText();
    out_dl<<text_dl;
    dl1.flush();
    dl1.close();
}
