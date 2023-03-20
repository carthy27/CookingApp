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
    void on_checkBox_2_clicked();//egg
    void on_checkBox_clicked();//milk
    void on_checkBox_5_clicked();//vanilla
    void on_checkBox_4_clicked();//flour
    void on_checkBox_3_clicked();//sugar
    void on_pushButton_3_clicked();


private:
    Ui::MainWindow *ui;

};


#endif // MAINWINDOW_H
