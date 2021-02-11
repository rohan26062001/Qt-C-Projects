#ifndef ADDTASK_H
#define ADDTASK_H

#include <QDialog>

namespace Ui {
class addTask;
}

class addTask : public QDialog
{
    Q_OBJECT

public:
    explicit addTask(QWidget *parent = nullptr);
    ~addTask();

private slots:

    void on_set_clicked();

private:
    Ui::addTask *ui;
};

#endif // ADDTASK_H
