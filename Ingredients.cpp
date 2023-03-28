#include "Ingredients.h"
#include<numeric> //for accumulate
#include "Recipe.h"
#include <algorithm>
#include <QObject>
#include <QtCore>
#include <QtGui>
#include <QString>


Ingredient::Ingredient(){}

Ingredient::Ingredient(QString mainMacro){
        this -> mainMacro = mainMacro;
    }

    Ingredient::Ingredient (QString name, QString mainMacro){ //for all the other Ingredientss
        this -> name = name;
        this -> mainMacro = mainMacro;
    }

    Ingredient::~Ingredient(){}

    QString Ingredient::getName(){
        return name;
    }

    void Ingredient::setWeight(int weight){
        this->weight = weight;
    }

    QString Ingredient::getArr(QString comp){
        for(int i =0; i < sizeof(arr)/sizeof(QString); i++  ){
            if(comp == arr[i]){
                Recipe r("bleh", 0);
                return r.displayInstructions();
            }
        }
    }
/*
    Ingredients operator+(const Ingredients& x,const Ingredients& y){
        return x.calcCaloricV(x.weight) + y.calcCaloricV(y.weight);
    }
*/


Vanilla::Vanilla(int caloricV, int weight) :
    Ingredient("Vanilla", "NULL"){
    this->caloricV=caloricV;
    this->weight = weight;
}

int Vanilla::calcCaloricV(int weightX){
    int caloricV;
    caloricV = weightX * 3;
    return caloricV;
}




    Egg::Egg(int caloricV, int weight) :
        Ingredient("Egg", "protein"){
        this->caloricV = caloricV;
        this->weight = weight;

    }

    int Egg::calcCaloricV(int weightX){
        int caloricV;
        caloricV = weightX * 2;
        return caloricV;
    }




 Milk::Milk(int caloricV, int weight) :
        Ingredient("Milk", "protein"){
        this-> caloricV = caloricV;
        this-> weight = weight;

    }

   int Milk::calcCaloricV(int weightX){
        int caloricV;
        caloricV = weightX * 3.6;
        return caloricV;
    }



    Sugar::Sugar(int caloricV, int weight) :
        Ingredient("Sugar", "Carbohydrate"){
        this->weight = weight;
        this->caloricV = caloricV;
    }

    int Sugar::calcCaloricV(int weightX){
        int caloricV;
        caloricV = weightX * 4;
        return caloricV;
    }



        Flour::Flour(QString name, int weight) :
        Ingredient(name,"Carbohydrate" ){

            this-> weight = weight;
    }



    WholeF::WholeF(int caloricV, int weight) :
        Flour("Whole Flour",weight){
        this -> caloricV = caloricV;

    }

    int WholeF::calcCaloricV(int weightX){
        int caloricV;
        caloricV = weightX * 3.6;
        return caloricV;
    }


    selfRFlour::selfRFlour(int caloricV, int weight) :
        Flour("Self Raising Flour", weight){
        this -> caloricV = caloricV;
        }

    int selfRFlour::calcCaloricV(int weightX){
        int caloricV;
        caloricV = weightX * 3.54;
        return caloricV;
    }



    Semolina::Semolina(int caloricV, int weight) :
        Flour("Semolina", weight){
        this->caloricV = caloricV;
        }

    int Semolina::calcCaloricV(int weightX){
        int caloricV;
        caloricV = weightX * 3.6;
        return caloricV;
    }


