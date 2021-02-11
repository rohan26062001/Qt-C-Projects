#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_add1_clicked();

    void on_add2_clicked();

    void on_add3_clicked();

    void on_add4_clicked();

    void on_done1_clicked();

    void on_done2_clicked();

    void on_done3_clicked();

    void on_done4_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
