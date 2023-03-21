 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Ingredients.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include<QCheckBox>

bool clear = true;

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
    Egg egg(20,20);
    if(ui->checkBox_2->isChecked()){
        egg.arr.push_back(egg.getName());
        ui->listWidget->addItem(egg.getName());
    }
}

//check box for the milk
void MainWindow::on_checkBox_clicked()
{

    if(ui->checkBox->isChecked()){
        Milk milk(20,20) ;
        milk.arr.push_back(milk.getName());
        //QMessageBox::information(this,milk.name,"Milk");
        ui->listWidget->addItem(milk.getName());
    }

}

//checkbox for the flour
void MainWindow::on_checkBox_5_clicked()
{

    if(ui->checkBox_5->isChecked()){
        WholeF wholeF(2,2);
        wholeF.arr.push_back(wholeF.getName());
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(wholeF.getName());
    }
}
//vanilla
void MainWindow::on_checkBox_4_clicked()
{

    if(ui->checkBox_4->isChecked()){
        Vanilla vanilla(1,1);

        vanilla.arr.push_back(vanilla.getName());
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(vanilla.getName());
    }
}
//Sugar
void MainWindow::on_checkBox_3_clicked()
{
    Sugar sugar(20,20) ;
    if(ui->checkBox_3->isChecked()){

        sugar.arr.push_back(sugar.getName());
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(sugar.getName());
    }
}
void MainWindow::on_checkBox_6_clicked()
{
    if(ui->checkBox_6->isChecked()){
    Semolina semolina(20,20) ;
        semolina.arr.push_back(semolina.getName());
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(semolina.getName());
    }

}


void MainWindow::on_pushButton_3_clicked()
{
    clear = false;
    ui->listWidget->clear();
    ui->checkBox->setChecked(clear);
    ui->checkBox_2->setChecked(clear);
    ui->checkBox_3->setChecked(clear);
    ui->checkBox_4->setChecked(clear);
    ui->checkBox_5->setChecked(clear);
    ui->checkBox_6->setChecked(clear);
}

