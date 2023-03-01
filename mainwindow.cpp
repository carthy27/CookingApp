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
    ui->checkBox->setChecked(false);
    ui->checkBox_2->setChecked(false);
    ui->checkBox_3->setChecked(false);
    ui->checkBox_4->setChecked(false);
    ui->checkBox_5->setChecked(false);

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

//add the item to a vector so we can decide what recipe to give the user




//check box for the egg
void MainWindow::on_checkBox_2_clicked()
{
    Ingredient egg;
    egg.name = "Egg";
    if(ui->checkBox_2->isChecked()){
        egg.arr.push_back(egg.name);
        ui->listWidget->addItem(egg.name);
    }
}

//check box for the milk
void MainWindow::on_checkBox_clicked()
{
    Ingredient milk;
    milk.name = "Milk";
    if(ui->checkBox->isChecked()){
        milk.arr.push_back(milk.name);
        //QMessageBox::information(this,milk.name,"Milk");
        ui->listWidget->addItem(milk.name);
    }

}

//checkbox for the flour
void MainWindow::on_checkBox_5_clicked()
{
    Ingredient Flour;
    Flour.name = "Flour";
    if(ui->checkBox_5->isChecked()){

        Flour.arr.push_back(Flour.name);
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(Flour.name);
    }
}
//vanilla
void MainWindow::on_checkBox_4_clicked()
{
    Ingredient Vanilla;
    Vanilla.name = "Vanilla";
    if(ui->checkBox_4->isChecked()){

        Vanilla.arr.push_back(Vanilla.name);
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(Vanilla.name);
    }
}
//Sugar
void MainWindow::on_checkBox_3_clicked()
{
    Ingredient Sugar;
    Sugar.name = "Sugar";
    if(ui->checkBox_3->isChecked()){

        Sugar.arr.push_back(Sugar.name);
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(Sugar.name);
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->listWidget->clear();
    ui->checkBox->setChecked(false);
    ui->checkBox_2->setChecked(false);
    ui->checkBox_3->setChecked(false);
    ui->checkBox_4->setChecked(false);
    ui->checkBox_5->setChecked(false);
}



