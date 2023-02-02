#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include<QCheckBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//this is for the dinner button
void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Dinner","This is whats for dinner");
}



//check box for the egg
void MainWindow::on_checkBox_2_clicked()
{
    if(ui->checkBox->isChecked()){
        Ingredient egg;
        egg.name = "Egg";
        egg.arr.push_back(egg.name);
        //QMessageBox::information(this,eggs.name,"Boob");
        ui->listWidget->addItem(egg.name);

    }
}

//check box for the milk
void MainWindow::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked()){
        Ingredient milk;
        milk.name = "Milk";
        milk.arr.push_back(milk.name);
        //QMessageBox::information(this,milk.name,"Milk");
        milk.boob();
        ui->listWidget->addItem(milk.name);
    }

}

//checkbox for the flour
void MainWindow::on_checkBox_5_clicked()
{
    if(ui->checkBox->isChecked()){
        Ingredient Flour;
        Flour.name = "Flour";
        Flour.arr.push_back(Flour.name);
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(Flour.name);
    }



}



void MainWindow::on_pushButton_2_clicked()
{
    if(mnSelected != -1){
    QListWidgetItem *it= ui->listWidget->takeItem(mnSelected);
    delete it;

    ui->listWidget->setCurrentRow(-1);
    }
}


void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    mnSelected = currentRow;
}

