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

    Ingredient (QString objName, QString objMainMacro , int objCaloricV , int objWeight){
        name = objName;

        mainMacro = objMainMacro;

        caloricV = objCaloricV ;
    }

    int getWeightInGrams(){
        return weight;
    }

    QString getName(){
        return name;
    }

    void setmainMacro(QString objMacro){
        mainMacro = objMacro;
    }

    void setName(QString objName){
        name = objName;
    }

    void setWeight(int objWeight){
        weight = objWeight;
    }

    virtual int getCalories() = 0;
};


class Egg : public Ingredient
{
    public:
    int caloricV;
    int weight;
    Egg(){
        Ingredient("Egg", "Protein", getCalories();,  )
    }
    void getCalories(){
        caloricV = getWeightInGrams() * 2 ;
    }


};

class Milk : public Ingredient
{
public :
    int getCalories(){
        caloricV = getWeightInGrams() * 0.6;
        return caloricV;
    }

};

class Sugar : public Ingredient
{
public :
    int getCalories(){
        caloricV = getWeightInGrams() * 4;
        return caloricV;
    }
};

class Flour : public Ingredient
{
public:
    QString macro = "Carbohydrate";
    setmainMacro(macro);

};

class WholeF : public Flour
{
    int getCalories(){
        caloricV = getWeightInGrams() * 3.4;
        return caloricV ;
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
