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


    void on_pushButton_2_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_pushButton_3_clicked();



private:
    Ui::MainWindow *ui;

    int mnSelected= -1;
};

    class Ingredient {


        public:

        Ingredient(QString name, int MacroType, int amount );

        QString getName(){return name ; }
        int getMacroType(){return MacroType ;}
        int getAmount(){return amount ; }
    };

    class MacroType{


    };

    class Recipe {
        QString name;

        public:
        Recipe(vector<Ingredient> x);
        void createRecipe(vector<Ingredient> x){return recipe ;}
        void showSteps(Recipe){return steps;}
        QString getMacros(){return macros;}

    };



#endif // MAINWINDOW_H
