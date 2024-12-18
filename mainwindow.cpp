#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton1->setText("Option 1");
     ui->radioButton2->setText("Option 2");
    for(int i=1; i<=5;++i)
     {
         ui->comboBox->addItem("Item: "+ QString::number(i));
    }
    ui->pushButton->setText("Toogle progress");
    ui->pushButton->setCheckable(true);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(10);
    ui->progressBar->setValue(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int currentValue= ui->progressBar->value();
    int maxValue = ui->progressBar->maximum();
     qDebug() << "Button clicked. Current value: " << currentValue;

    if(currentValue>=maxValue)


    {

        ui->progressBar->setValue(0);

    }else
    {
        ui->progressBar->setValue(currentValue+1);
    }

}

