#ifndef MAINCONTROLLCLASS_H
#define MAINCONTROLLCLASS_H

#include <QMainWindow>

namespace Ui {
class MainControllClass;
}

class MainControllClass : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainControllClass(QWidget *parent = 0);
    ~MainControllClass();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::MainControllClass *ui;
};

#endif // MAINCONTROLLCLASS_H
