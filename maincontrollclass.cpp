#include "maincontrollclass.h"
#include "ui_maincontrollclass.h"

MainControllClass::MainControllClass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainControllClass)
{
    ui->setupUi(this);
}

MainControllClass::~MainControllClass()
{
    delete ui;
}




void MainControllClass::on_pushButton_2_clicked()
{
    delete ui;
}
