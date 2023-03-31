 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Ingredients.h"
#include "Recipe.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include<QCheckBox>
#include <QDoubleSpinBox>
#include "namespaceInt.h"
#include "exceptions.h"

#define YIng true
#define ZIng false

using namespace Int;


bool fl = false ;
bool eggs = false;
bool van = false;
bool m = false;

int slider = 0;
bool Bread = false;
bool Ftoast = false;
bool Ing = YIng;
bool clear = true;  //global functions

int totalCal;
Egg egg(egg.calcCaloricV(Int::slider),Int::slider);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(this->slider);
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
    Egg egg(egg.calcCaloricV(Int::slider),Int::slider);
    if(ui->checkBox_2->isChecked()){
        eggs = true;
        Ing = YIng;
        egg.arr.push_back(egg.getName());
        totalCal += egg.calcCaloricV(Int::slider);
        ui->listWidget->addItem(egg.getName());
        ui->listWidget_3->addItem(QString::number(egg.calcCaloricV(Int::slider)));
    }
}

//check box for the milk
void MainWindow::on_checkBox_clicked()
{

    if(ui->checkBox->isChecked()){
        Ing = YIng;
        m = true ;
        Milk milk(milk.calcCaloricV(Int::slider),Int::slider) ;
        milk.arr.push_back(milk.getName());
        totalCal += milk.calcCaloricV(Int::slider);
        ui->listWidget->addItem(milk.getName());
        ui->listWidget_3->addItem(QString::number(milk.calcCaloricV(Int::slider)));

    }

}

//checkbox for the flour
void MainWindow::on_checkBox_5_clicked()
{

    if(ui->checkBox_5->isChecked()){
        Ing = YIng;
        fl = true;
        WholeF wholeF(wholeF.calcCaloricV(Int::slider),Int::slider);
        wholeF.arr.push_back(wholeF.getName());
        totalCal += wholeF.calcCaloricV(Int::slider);
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(wholeF.getName());
        ui->listWidget_3->addItem(QString::number(wholeF.calcCaloricV(Int::slider)));
        if(ui->checkBox_5->isChecked() || ui->checkBox_7->isChecked()|| ui-> checkBox_6->isChecked()){
            Bread = true ;
        }
    }
}
//vanilla
void MainWindow::on_checkBox_4_clicked()
{
    if(ui->checkBox_4->isChecked()){
        Ing = YIng;
        van = true ;
        Vanilla vanilla(vanilla.calcCaloricV(Int::slider),Int::slider);
        vanilla.arr.push_back(vanilla.getName());
        totalCal += vanilla.calcCaloricV(Int::slider);        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(vanilla.getName());
        ui->listWidget_3->addItem(QString::number(vanilla.calcCaloricV(Int::slider)));

    }
}
//Sugar
void MainWindow::on_checkBox_3_clicked()
{
    Sugar sugar(sugar.calcCaloricV(Int::slider),Int::slider) ;
    if(ui->checkBox_3->isChecked()){
        Ing = YIng;

        sugar.arr.push_back(sugar.getName());
        totalCal += sugar.calcCaloricV(Int::slider);
        ui->listWidget->addItem(sugar.getName());
        ui->listWidget_3->addItem(QString::number(sugar.calcCaloricV(Int::slider)));
    }
}


void MainWindow::on_checkBox_6_clicked()
{
    if(ui->checkBox_6->isChecked()){
        Ing = YIng;
        fl = true;
        Semolina semolina(semolina.calcCaloricV(Int::slider),Int::slider) ;
        semolina.arr.push_back(semolina.getName());
        totalCal += semolina.calcCaloricV(Int::slider);
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(semolina.getName());

        ui->listWidget_3->addItem(QString::number(semolina.calcCaloricV(Int::slider)));

    }

}
void MainWindow::on_checkBox_7_clicked()
{
    if(ui->checkBox_7->isChecked()){
        fl = true;
        Ing = YIng;
    selfRFlour selfR(selfR.calcCaloricV(Int::slider),Int::slider) ;
        selfR.arr.push_back(selfR.getName());
        selfR.totalCal.push_back(selfR.calcCaloricV(Int::slider));
        //QMessageBox::information(this,Flour.name,"worky");
        ui->listWidget->addItem(selfR.getName());
        ui->listWidget_3->addItem(QString::number(selfR.calcCaloricV(Int::slider)));
         if(ui->checkBox_5->isChecked() || ui->checkBox_7->isChecked()|| ui-> checkBox_6->isChecked()){
             Bread = true ;
         }
    }

}

void MainWindow::on_AmountInGrams_valueChanged(double arg1)
{
    Int::slider = arg1 ;
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
    fl = false ;
    eggs = false;
    van = false;
    m = false;

    Bread = false;
    Ftoast = false;

}



void MainWindow::on_pushButton_2_clicked()
{
    ui->lcdNumber->display(totalCal);
}

void MainWindow::on_pushButton_4_clicked()
{

    try {
        if(ui->listWidget->count() == 0){
            throw noIngException();
        }
        if(Bread == false && Ftoast == false){
            throw noRecipe();
       }

    ui->listWidget_2->clear();
    Recipe b("Bread",BREAD);
    Recipe c("Cupcakes",CUPCAKES);
    Recipe f("French Toast",FTOAST);
    Recipe recipes[3] = {b,c,f};
    Recipe x = recipes[0];
    Recipe* recPtr = &x;
    int nonp = 1;
    int* one = &nonp;

    if(ui-> radioButton->isChecked()){
        if(Ing && ((int)(ui->listWidget->count())) >= *one ){
            if(Bread){
            ui->listWidget_2->addItem(recPtr->getBread());
        }

    }
    }
    if(ui->radioButton_2->isChecked()){
        if(Ing && ((int)(ui->listWidget->count())) >= *one ){
            if(Bread){
            ui->listWidget_2->addItem(recPtr->getBread());
            }

            if(fl && eggs && van){
                recPtr = recPtr+1;
                ui->listWidget_2->addItem(recPtr->getFtoast());
                recPtr=recPtr-1;
            }

       }
    }

        //lunch options

    if(ui->radioButton_3->isChecked()){
        //breakfast Options
            if(Ing && ((int)(ui->listWidget->count())) >= *one ){
                if(Bread){
                ui->listWidget_2->addItem(recPtr->getBread());
            }

        }
    }
    }
    catch (noIngException &nI){
        QMessageBox::about(this,"Hey!","You need to add ingredients!") ;
    }
    catch(noRecipe &nR){
        QMessageBox::about(this,"Hey!","You cant make anything with that HA");
    }
}

//QString namespaceInt::operator=(int z){
//    QString x;
//    x = QString::number(z);
//    return x;
//}

//QString MainWindow::operator= (int z){
//    return QString::number(z);
//}

MainWindow::textBox q; //union

void MainWindow::on_verticalSlider_valueChanged(int value)
{ 
    QString y;
    q.text = value;
    QString b = " ";
    ui->AmountInGrams->setValue(q.text); //EZ
    b = q.text2;
    ui->textEdit_5->setText(b);
    ui->textEdit_6->setText(QString::number(MainWindow::mult2(q.text)));
    ui->textEdit_7->setText(y = MainWindow::mult2(q.text2));
    ui->textEdit_8->setText(QString::number(MainWindow::mult2(q.text3)));

}



