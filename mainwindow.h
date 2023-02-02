#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();

//eggs
    void on_checkBox_2_clicked();

    void on_checkBox_clicked();

    void on_checkBox_5_clicked();


private:
    Ui::MainWindow *ui;
};

class Ingredient {
    public:
    std::vector< QString > arr ;
    QString name ;

    void boob(){
        QString str;
        for(QString x : arr){

            str.append(x);
            str.append(", ");
    }
    }

};

class Recipe {
    public:
    QString name;



};


#endif // MAINWINDOW_H
