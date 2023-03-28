#ifndef INGREDIENTS_H
#define INGREDIENTS_H

#include <numeric> //for accumulate
#include <algorithm>
#include <QObject>
#include <QString>

class Ingredient : public QObject
{

protected:
    QString mainMacro;  //main macro
    QString name ;      // name
    int weight ;        //weight
    int caloricV;


public :
    std::vector<QString> arr ; //a vector of all the current ingredients
    std::vector<double> totalCal;
    int listTotalCal ;

    Ingredient(); //def const


    Ingredient(QString mainMacro);

    Ingredient(QString name, QString mainMacro);

    ~Ingredient();

    QString getName();
    QString getArr();
    void setWeight(int weight);
/*
    Ingredient operator+(const Ingredient& x,const Ingredient& y){
        return x.calcCaloricV(x.weight) + y.calcCaloricV(y.weight);
    }
*/
    virtual int calcCaloricV(int x) = 0; //this makes ingredient an abstract class allows each ingredients calorie value to be different
    friend class Recipe ;
    friend class mainwindow;
};


class Vanilla: public Ingredient
{
public:
Vanilla(int caloricV, int weight);

int calcCaloricV(int weightX);


};


class Egg : public Ingredient
{
    public:
    Egg(int caloricV, int weight);

    int calcCaloricV(int weightX) override;


};

class Milk : public Ingredient
{
public :
    Milk(int caloricV, int weight);


    int calcCaloricV(int weightX);
};

class Sugar : public Ingredient
{

public :
    Sugar(int caloricV, int weight) ;

    int calcCaloricV(int weightX);
};

class Flour : public Ingredient
{

public:
        Flour(QString name, int weight);

};


class WholeF : public Flour
{

public:
    WholeF(int caloricV, int weight) ;

    int calcCaloricV(int weightX);
};

class selfRFlour : public Flour {

public:
    selfRFlour(int caloricV, int weight) ;

    int calcCaloricV(int weightX);

};

class Semolina : public Flour {

public:
    Semolina(int caloricV, int weight);

    int calcCaloricV(int weightX);

};

#endif // INGREDIENTS_H
