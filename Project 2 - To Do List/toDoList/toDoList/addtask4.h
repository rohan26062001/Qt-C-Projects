#ifndef ADDTASK4_H
#define ADDTASK4_H

#include <QDialog>

namespace Ui {
class addTask4;
}

class addTask4 : public QDialog
{
    Q_OBJECT

public:
    explicit addTask4(QWidget *parent = nullptr);
    ~addTask4();

private slots:
    void on_set_clicked();

private:
    Ui::addTask4 *ui;
};

#endif // ADDTASK4_H
