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


class Ingredient : public QObject {

public :
    QString mainMacro;
    QString name ;
    int weight ;
    int caloricV;
    std::vector<QString> arr ;

    Ingredient();

    Ingredient(QString mainMacro){
        mainMacro = this-> mainMacro;
    }

    Ingredient (QString name, QString objMainMacro){
        name = this->name;

        mainMacro = this-> mainMacro;

    }

//    int getWeightInGrams(){
//        return weight;
//    }

//    QString getName(){
//        return name;
//    }

//    void setmainMacro(QString objMacro){
//        mainMacro = objMacro;
//    }

//    void setName(QString objName){
//        name = objName;
//    }

//    void setWeight(int objWeight){
//        weight = objWeight;
//    }
};


class Egg : public Ingredient
{
    public:
    int caloricV;
    int weight;
    Egg(QString name, QString mainMacro, int caloricV, int weight) :
        Ingredient("egg", "protein"){
        caloricV = weight * 2;
        weight = this->weight;
    }


};

class Milk : public Ingredient
{
public :
    Milk(QString mainMacro, int caloricV, int weight) :
        Ingredient("Milk", "protein"){
        caloricV = weight * 2;
        weight = this->weight;
    }

};

class Sugar : public Ingredient
{
public :
    Sugar(QString mainMacro, int caloricV, int weight) :
        Ingredient("Sugar", "Carbohydrate"){
        caloricV = weight * 2;
        weight = this->weight;
    }
};

class Flour : public Ingredient
{
public:
        Flour(QString name,QString mainMacro, int caloricV, int weight) :
        Ingredient("Carbohydrate"){

        weight = this->weight;
    }

};

class WholeF : public Flour
{
    WholeF(QString name, QString mainMacro, int caloricV, int weight) :
        Ingredient("Whole Flour", "Carbohydrate"){
        caloricV = weight * 3.6;
        }
};

class selfRFlour : public Flour {

    int getCalories(){
        caloricV = getWeightInGrams() * 3.54;
        return caloricV ;
    }
};

class semolina : public Flour {

    int getCalories(){
        caloricV = getWeightInGrams() *3.6 ;
        return caloricV;
    }
};





class Recipe {

    public:
    QString name;




    friend class MacroType;
};


#endif // MAINWINDOW_H
