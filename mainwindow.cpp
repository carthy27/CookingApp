 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Ingredients.h"
#include "Recipe.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include<QCheckBox>
#include <QDoubleSpinBox>

#define YIng true
#define ZIng false


bool Ing = YIng;
bool clear = true;  //global functions
int weightInGs = 0;
int totalCal;
Egg egg(egg.calcCaloricV(weightInGs),weightInGs);

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

//check box for the egg
void MainWindow::on_checkBox_2_clicked()
{
    Egg egg(egg.calcCaloricV(weightInGs),weightInGs);
    if(ui->checkBox_2->isChecked()){
        Ing = YIng;
        egg.arr.push_back(egg.getName());
        totalCal += egg.calcCaloricV(weightInGs);
        ui->listWidget->addItem(egg.getName());
        ui->listWidget_3->addItem(QString::number(egg.calcCaloricV(weightInGs)));
    }
}

//check box for the milk
void MainWindow::on_checkBox_clicked()
{

    if(ui->checkBox->isChecked()){
        Ing = YIng;
        Milk milk(milk.calcCaloricV(weightInGs),weightInGs) ;
        milk.arr.push_back(milk.getName());
        totalCal += milk.calcCaloricV(weightInGs);
        ui->listWidget->addItem(milk.getName());
        ui->listWidget_3->addItem(QString::number(milk.calcCaloricV(weightInGs)));

    }

}

//checkbox for the flour
void MainWindow::on_checkBox_5_clicked()
{

    if(ui->checkBox_5->isChecked()){
        Ing = YIng;
        WholeF wholeF(wholeF.calcCaloricV(weightInGs),weightInGs);
        wholeF.arr.push_back(wholeF.getName());
        totalCal += wholeF.calcCaloricV(weightInGs);
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(wholeF.getName());
        ui->listWidget_3->addItem(QString::number(wholeF.calcCaloricV(weightInGs)));

    }
}
//vanilla
void MainWindow::on_checkBox_4_clicked()
{
    if(ui->checkBox_4->isChecked()){
        Ing = YIng;
        Vanilla vanilla(vanilla.calcCaloricV(weightInGs),weightInGs);

        vanilla.arr.push_back(vanilla.getName());
        totalCal += vanilla.calcCaloricV(weightInGs);        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(vanilla.getName());
        ui->listWidget_3->addItem(QString::number(vanilla.calcCaloricV(weightInGs)));

    }
}
//Sugar
void MainWindow::on_checkBox_3_clicked()
{
    Sugar sugar(sugar.calcCaloricV(weightInGs),weightInGs) ;
    if(ui->checkBox_3->isChecked()){
        Ing = YIng;

        sugar.arr.push_back(sugar.getName());
        totalCal += sugar.calcCaloricV(weightInGs);
        ui->listWidget->addItem(sugar.getName());
        ui->listWidget_3->addItem(QString::number(sugar.calcCaloricV(weightInGs)));
    }
}
void MainWindow::on_checkBox_6_clicked()
{
    if(ui->checkBox_6->isChecked()){
        Ing = YIng;
    Semolina semolina(semolina.calcCaloricV(weightInGs),weightInGs) ;
        semolina.arr.push_back(semolina.getName());
        totalCal += semolina.calcCaloricV(weightInGs);
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(semolina.getName());

        ui->listWidget_3->addItem(QString::number(semolina.calcCaloricV(weightInGs)));

    }

}
void MainWindow::on_checkBox_7_clicked()
{
    if(ui->checkBox_7->isChecked()){
        Ing = YIng;
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
    totalCal = 0;
    on_pushButton_2_clicked();
    ui->listWidget->clear();
    ui->listWidget_3->clear();
    ui->checkBox->setChecked(clear);
    ui->checkBox_2->setChecked(clear);
    ui->checkBox_3->setChecked(clear);
    ui->checkBox_4->setChecked(clear);
    ui->checkBox_5->setChecked(clear);
    ui->checkBox_6->setChecked(clear);
    ui->checkBox_7->setChecked(clear);
    ui->listWidget_2->clear();
}



void MainWindow::on_pushButton_2_clicked()
{
    ui->lcdNumber->display(totalCal);
}

void MainWindow::on_pushButton_4_clicked()
{
    Recipe r("Bread",BREAD);
    int nonp = 1;
    int* one = &nonp;
    if(ui-> radioButton->isChecked()){
        if(Ing && ((int)(ui->listWidget->count())) >= *one ){
            ui->listWidget_2->addItem(r.getBread());
        }

    }
    if(ui->radioButton_2->isChecked()){
        if(Ing && ((int)(ui->listWidget->count())) >= *one ){
                ui->listWidget_2->addItem(r.getBread());
}

    }
        //lunch options

    if(ui->radioButton_3->isChecked()){
        //breakfast Options
            if(Ing && ((int)(ui->listWidget->count())) >= *one ){
                ui->listWidget_2->addItem(r.getBread());

        }
    }
}


