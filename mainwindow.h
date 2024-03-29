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
int slider = 0;

QString operator<<(int x);

union textBox{
    int text;
    char text2;
    float text3;
};

template <typename T> T mult2(T x)
{
    if (x < 64){
    return x+x ;
    }
    else{
        int temp = x*2-128;
        return temp;
    }
}


private slots:
   // void on_pushButton_clicked();
    void on_checkBox_2_clicked();//egg
    void on_checkBox_clicked();//milk
    void on_checkBox_5_clicked();//vanilla
    void on_checkBox_4_clicked();//flour
    void on_checkBox_3_clicked();//sugar
    void on_pushButton_3_clicked();


    void on_checkBox_6_clicked();

    void on_checkBox_7_clicked();

    void on_AmountInGrams_valueChanged(double arg1);

    //void on_listWidget_3_itemEntered(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_verticalSlider_valueChanged(int value);



private:
    Ui::MainWindow *ui;

};


#endif // MAINWINDOW_H
