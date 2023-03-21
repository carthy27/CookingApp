#ifndef INGREDIENTS_H
#define INGREDIENTS_H

#include<numeric>

class Ingredient : public QObject {


public :
    QString mainMacro;  //main macro
    QString name ;      // name
    int weight ;        //weight
    int caloricV;       //value of object in calories
    std::vector<QString> arr ; //a vector of all the current ingredients
    std::vector<double> totalCal;
    int listTotalCal ;

    Ingredient(); //def const


    Ingredient(QString mainMacro){
        this -> mainMacro = mainMacro;
    }

    Ingredient (QString name, QString mainMacro){ //for all the other ingredients
        this -> name = name;
        this -> mainMacro = mainMacro;
    }

    QString getName(){
        return name;
    }

    void setWeight(int weight){
        this->weight = weight;
    }

    double getTotalCal(){
       listTotalCal = std::accumulate(totalCal.begin(),totalCal.end(),0);
       return listTotalCal;
    }



    virtual int calcCaloricV(int x)=0; //this makes ingredient an abstract class allows each ingredients calorie value to be different
};

class Vanilla: public Ingredient
{
public:
Vanilla(int caloricV, int weight) :
    Ingredient("Vanilla", "NULL"){
    this->caloricV=caloricV;
    this->weight = weight;
}

int calcCaloricV(int weightX){
    int caloricV;
    caloricV = weightX * 3;
    return caloricV;
}


};


class Egg : public Ingredient
{
    public:
    Egg(int caloricV, int weight) :
        Ingredient("Egg", "protein"){
        this->caloricV = caloricV;
        this->weight = weight;

    }

    int calcCaloricV(int weightX){
        int caloricV;
        caloricV = weightX * 2;
        return caloricV;
    }


};

class Milk : public Ingredient
{
public :
    Milk(int caloricV, int weight) :
        Ingredient("Milk", "protein"){
        this-> caloricV = caloricV;
        this-> weight = weight;

    }

    int calcCaloricV(int weightX){
        int caloricV;
        caloricV = weightX * 3.6;
        return caloricV;
    }
};

class Sugar : public Ingredient
{
public :
    Sugar(int caloricV, int weight) :
        Ingredient("Sugar", "Carbohydrate"){
        this->weight = weight;
        this->caloricV = caloricV;
    }

    int calcCaloricV(int weightX){
        int caloricV;
        caloricV = weightX * 4;
        return caloricV;
    }
};

class Flour : public Ingredient
{
public:
        Flour(QString name, int weight) :
        Ingredient(name,"Carbohydrate" ){
            //this->ingName = name;
            this-> weight = weight;
    }
};


class WholeF : public Flour
{
public:
    WholeF(int caloricV, int weight) :
        Flour("Whole Flour",weight){
        this -> caloricV = caloricV;

    }

    int calcCaloricV(int weightX){
        int caloricV;
        caloricV = weightX * 3.6;
        return caloricV;
    }
};

class selfRFlour : public Flour {
public:
    selfRFlour(int caloricV, int weight) :
        Flour("Self Raising Flour", weight){
        this -> caloricV = caloricV;
        }

    int calcCaloricV(int weightX){
        int caloricV;
        caloricV = weightX * 3.54;
        return caloricV;
    }


};

class Semolina : public Flour {
public:
    Semolina(int caloricV, int weight) :
        Flour("Semolina", weight){
        this->caloricV = caloricV;
        }

    int calcCaloricV(int weightX){
        int caloricV;
        caloricV = weightX * 3.6;
        return caloricV;
    }

};





class Recipe {


};

#endif // INGREDIENTS_H
