#ifndef ADDTASK3_H
#define ADDTASK3_H

#include <QDialog>

namespace Ui {
class addTask3;
}

class addTask3 : public QDialog
{
    Q_OBJECT

public:
    explicit addTask3(QWidget *parent = nullptr);
    ~addTask3();

private slots:
    void on_set_clicked();

private:
    Ui::addTask3 *ui;
};

#endif // ADDTASK3_H
