 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Ingredients.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include<QCheckBox>
#include <QDoubleSpinBox>

bool clear = true;  //global functions
int weightInGs = 0;

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
    Egg egg(egg.calcCaloricV(weightInGs),weightInGs);
    if(ui->checkBox_2->isChecked()){
        egg.arr.push_back(egg.getName());
        egg.totalCal.push_back(egg.calcCaloricV(weightInGs));

        ui->listWidget->addItem(egg.getName());
        ui->listWidget_3->addItem(QString::number(egg.calcCaloricV(weightInGs)));
    }
}

//check box for the milk
void MainWindow::on_checkBox_clicked()
{

    if(ui->checkBox->isChecked()){
        Milk milk(milk.calcCaloricV(weightInGs),weightInGs) ;
        milk.arr.push_back(milk.getName());
        milk.totalCal.push_back((milk.calcCaloricV(weightInGs)));
        //QMessageBox::information(this,milk.name,"Milk");
        ui->listWidget->addItem(milk.getName());
        ui->listWidget_3->addItem(QString::number(milk.calcCaloricV(weightInGs)));

    }

}

//checkbox for the flour
void MainWindow::on_checkBox_5_clicked()
{

    if(ui->checkBox_5->isChecked()){
        WholeF wholeF(wholeF.calcCaloricV(weightInGs),weightInGs);
        wholeF.arr.push_back(wholeF.getName());
        wholeF.totalCal.push_back((wholeF.calcCaloricV(weightInGs)));

        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(wholeF.getName());
        ui->listWidget_3->addItem(QString::number(wholeF.calcCaloricV(weightInGs)));

    }
}
//vanilla
void MainWindow::on_checkBox_4_clicked()
{
    if(ui->checkBox_4->isChecked()){
        Vanilla vanilla(vanilla.calcCaloricV(weightInGs),weightInGs);

        vanilla.arr.push_back(vanilla.getName());
        vanilla.totalCal.push_back((vanilla.calcCaloricV(weightInGs)));
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(vanilla.getName());
        ui->listWidget_3->addItem(QString::number(vanilla.calcCaloricV(weightInGs)));

    }
}
//Sugar
void MainWindow::on_checkBox_3_clicked()
{
    Sugar sugar(sugar.calcCaloricV(weightInGs),weightInGs) ;
    if(ui->checkBox_3->isChecked()){

        sugar.arr.push_back(sugar.getName());
        sugar.totalCal.push_back(sugar.calcCaloricV(weightInGs));
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(sugar.getName());
        ui->listWidget_3->addItem(QString::number(sugar.calcCaloricV(weightInGs)));
    }
}
void MainWindow::on_checkBox_6_clicked()
{
    if(ui->checkBox_6->isChecked()){
    Semolina semolina(semolina.calcCaloricV(weightInGs),weightInGs) ;
        semolina.arr.push_back(semolina.getName());
        semolina.totalCal.push_back(semolina.calcCaloricV(weightInGs));
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(semolina.getName());

        ui->listWidget_3->addItem(QString::number(semolina.calcCaloricV(weightInGs)));

    }

}
void MainWindow::on_checkBox_7_clicked()
{
    if(ui->checkBox_7->isChecked()){
 selfRFlour selfR(selfR.calcCaloricV(weightInGs),weightInGs) ;
        selfR.arr.push_back(selfR.getName());
        selfR.totalCal.push_back(selfR.calcCaloricV(weightInGs));
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(selfR.getName());
        ui->listWidget_3->addItem(QString::number(selfR.calcCaloricV(weightInGs)));
    }

}

void MainWindow::on_AmountInGrams_valueChanged(double arg1)
{
    weightInGs = arg1 ;
}



void MainWindow::on_pushButton_3_clicked()
{
    clear = false;
    ui->listWidget->clear();
    ui->listWidget_3->clear();
    ui->checkBox->setChecked(clear);
    ui->checkBox_2->setChecked(clear);
    ui->checkBox_3->setChecked(clear);
    ui->checkBox_4->setChecked(clear);
    ui->checkBox_5->setChecked(clear);
    ui->checkBox_6->setChecked(clear);
    ui->checkBox_7->setChecked(clear);
}



/*void MainWindow::on_listWidget_3_itemEntered(QListWidgetItem *item)
{
    double total;
    item->
}*/


void MainWindow::on_pushButton_2_clicked()
{
    Milk milk(0,0);
    ui->lcdNumber->display(milk.getTotalCal());
}

