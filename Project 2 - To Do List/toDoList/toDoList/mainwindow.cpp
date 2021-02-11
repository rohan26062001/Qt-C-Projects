#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addtask.h"
#include "addtask2.h"
#include "addtask3.h"
#include "addtask4.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFile task1("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task1.txt");
    if(!task1.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream tsk1(&task1);
    ui->task1->setText(tsk1.readAll());


    QFile task2("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task2.txt");
    if(!task2.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream tsk2(&task2);
    ui->task2->setText(tsk2.readAll());


    QFile task3("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task3.txt");
    if(!task3.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream tsk3(&task3);
    ui->task3->setText(tsk3.readAll());


    QFile task4("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task4.txt");
    if(!task4.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream tsk4(&task4);
    ui->task4->setText(tsk4.readAll());



    QFile dline1("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline1.txt");
    if(!dline1.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream dl1(&dline1);
    ui->deadline1->setText(dl1.readAll());


    QFile dline2("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline2.txt");
    if(!dline2.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream dl2(&dline2);
    ui->deadline2->setText(dl2.readAll());


    QFile dline3("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline3.txt");
    if(!dline3.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream dl3(&dline3);
    ui->deadline3->setText(dl3.readAll());


    QFile dline4("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline4.txt");
    if(!dline4.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream dl4(&dline4);
    ui->deadline4->setText(dl4.readAll());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_add1_clicked()
{
    addTask task1;
    task1.setModal(true);
    task1.exec();

    QFile task_1("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task1.txt");
    if(!task_1.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream tsk_1(&task_1);
    ui->task1->setText(tsk_1.readAll());

    QFile dline_1("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline1.txt");
    if(!dline_1.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream dl_1(&dline_1);
    ui->deadline1->setText(dl_1.readAll());
}

void MainWindow::on_add2_clicked()
{
    addTask2 task2;
    task2.setModal(true);
    task2.exec();

    QFile task_2("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task2.txt");
    if(!task_2.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream tsk_2(&task_2);
    ui->task2->setText(tsk_2.readAll());

    QFile dline_2("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline2.txt");
    if(!dline_2.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream dl_2(&dline_2);
    ui->deadline2->setText(dl_2.readAll());
}

void MainWindow::on_add3_clicked()
{
    addTask3 task3;
    task3.setModal(true);
    task3.exec();

    QFile task_3("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task3.txt");
    if(!task_3.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream tsk_3(&task_3);
    ui->task3->setText(tsk_3.readAll());

    QFile dline_3("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline3.txt");
    if(!dline_3.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream dl_3(&dline_3);
    ui->deadline3->setText(dl_3.readAll());
}

void MainWindow::on_add4_clicked()
{
    addTask4 task4;
    task4.setModal(true);
    task4.exec();

    QFile task_4("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task4.txt");
    if(!task_4.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream tsk_4(&task_4);
    ui->task4->setText(tsk_4.readAll());

    QFile dline_4("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline4.txt");
    if(!dline_4.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"No file like this","No file like this");
    QTextStream dl_4(&dline_4);
    ui->deadline4->setText(dl_4.readAll());
}

void MainWindow::on_done1_clicked()
{
    QMessageBox::information(0,"Congratulations","Wohoo!!! You have completed the task.....");
    QFile file("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task1.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << "";
    ui->task1->setText(out.readAll());

    QFile file_("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline1.txt");
    file_.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out_(&file_);
    out_ << "";
    ui->deadline1->setText(out_.readAll());
}

void MainWindow::on_done2_clicked()
{
    QMessageBox::information(0,"Congratulations","Wohoo!!! You have completed the task.....");
    QFile file("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task2.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << "";
    ui->task2->setText(out.readAll());

    QFile file_("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline2.txt");
    file_.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out_(&file_);
    out_ << "";
    ui->deadline2->setText(out_.readAll());
}

void MainWindow::on_done3_clicked()
{
    QMessageBox::information(0,"Congratulations","Wohoo!!! You have completed the task.....");
    QFile file("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task3.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << "";
    ui->task3->setText(out.readAll());

    QFile file_("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline3.txt");
    file_.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out_(&file_);
    out_ << "";
    ui->deadline3->setText(out_.readAll());
}

void MainWindow::on_done4_clicked()
{
    QMessageBox::information(0,"Congratulations","Wohoo!!! You have completed the task.....");
    QFile file("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\task4.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << "";
    ui->task4->setText(out.readAll());

    QFile file_("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 2\\toDoList\\toDoList\\Files\\deadline4.txt");
    file_.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out_(&file_);
    out_ << "";
    ui->deadline4->setText(out_.readAll());
}
