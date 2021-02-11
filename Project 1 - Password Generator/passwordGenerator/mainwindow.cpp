//Header files used in this project

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <iostream>
#include <string>
#include <QPixmap>
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_genPas_clicked()
{
    //passLen is a QString(similar to the String in C++) Object which stores the String entered in the QLineEdit under the label 'Enter Length'
    QString passLen=ui->inpTxt->text();

    bool converted; //It is a Boolean Variable which stores either true or false

    int len=passLen.toInt(&converted);  //len is an Integer variable whcich stores the integer converted version of the object passLen
    //An interesting thing here, if all the characters of the Qstring passLen is integer then the boolean variable 'converted' is set to 1; otherwise it is set to 0

    if(converted==false)/*If this condtion is true that means that the string is not fully numeric*/{
        QMessageBox::warning(this,"Invalid Input","Please enter Integer");
    }
    else{
        if(len<5){
            QMessageBox::warning(this,"Very Small Length","The length of the password should atleast be 5");
        }
        else if(len >50){
            QMessageBox::warning(this,"Very Large Length","The length of the password should atmost be 50");
        }
        else{
            //First we declare an empty QString Object
            QString password="";

            //With the help of these objects we'll create our password
            QString alphabet_lower="abcdefghijklmnopqrstuvwxyz";
            QString alphabet_upper="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            QString symbols="!@#$%&";
            QString number="0123456789";

            //Ineger objects
            int key,count_alpha_lwr=0,count_alpha_uppr=0,count_symbols=0,count_number=0;

            int c=0;
            while(c<len){
                int k=rand()%4+1;   //Generates a Random Number between 1 to 4

                if(c==0){
                    k%=3;
                    if(k==0)
                        ++k;
                }
                switch(k){
                    case 1:/*This block will help to add lowercase alphabets in the password*/{
                        if((count_alpha_lwr==2)&&(count_number==0||count_alpha_uppr==0||count_alpha_uppr==1||count_symbols==0))
                            break;
                        int key=rand()%26;
                        password=password+alphabet_lower[key];
                        count_alpha_lwr++;
                        c++;
                        break;
                }

                case 2:/*This block will help to add uppercase alphabets in the password*/{
                        if((count_alpha_uppr==2)&&(count_number==0||count_alpha_lwr==0||count_alpha_lwr==1||count_symbols==0))
                            break;
                        key=rand()%26;
                        password=password+alphabet_upper[key];
                        count_alpha_uppr++;
                        c++;
                        break;
                }
                case 3:/*This block will help to add digits in the password*/{
                        if((count_number==1)&&(count_alpha_lwr==0||count_alpha_lwr==1||count_alpha_uppr==1||count_alpha_uppr==0||count_symbols==0))
                            break;
                        key=rand()%10;
                        password=password+number[key];
                        count_number++;
                        c++;
                        break;
                }
                case 4:/*This block will help to symbols in the password*/{
                        if((count_symbols==1)&&(count_alpha_lwr==0||count_alpha_lwr==0||count_alpha_lwr==1||count_alpha_uppr==0||count_alpha_uppr==1||count_number==0))
                            break;
                        key=rand()%6;
                        password=password+symbols[key];
                        count_symbols++;
                        c++;
                        break;
                }
                }
            }
            //After the password creation is complete, this QMesaageBox will show the password
            QMessageBox::information(this,"Your Password is Ready","Thanks for using");
            QFile file("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 1\\passwordGenerator\\password.txt");
            if(!file.open(QFile::WriteOnly|QFile::Text)){
                QMessageBox::warning(this,"No file","No file like this");
            }
            QTextStream out(&file);
            QString text=password;
            out<<text;
            file.flush();
            file.close();

            QFile disp("E:\\Internships\\1. C++ - Codespeedy Technology\\Projects\\Project 1\\passwordGenerator\\password.txt");
            if(!disp.open(QIODevice::ReadOnly))
                QMessageBox::information(0,"No file like this","No file like this");
            QTextStream dsp(&disp);
            ui->textBrowser->setText(dsp.readAll());
        }
    }
}
