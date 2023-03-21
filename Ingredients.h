#ifndef INGREDIENTS_H
#define INGREDIENTS_H


class Ingredient : public QObject {


public :
    QString mainMacro;  //main macro
    QString name ;      // name
    int weight ;        //weight
    int caloricV;       //value of object in calories
    std::vector<QString> arr ; //a vector of all the current ingredients

    Ingredient(); //def const


    Ingredient(QString mainMacro){
        this -> mainMacro = mainMacro;
    };

    Ingredient (QString name, QString mainMacro){ //for all the other ingredients
        this -> name = name;
        this -> mainMacro = mainMacro;
    }

    virtual QString getName(){
        return name;
    }

    virtual int calcCaloricV()=0; //this makes ingredient an abstract class allows each ingredients calorie value to be different
};

class Vanilla: public Ingredient
{
public:
Vanilla(int caloricV, int weight) :
    Ingredient("Vanilla", "NULL"){

    weight = this->weight;
    caloricV = calcCaloricV();
}

int calcCaloricV(){
    int caloricV;
    caloricV = weight * 3;
    return caloricV;
}


};


class Egg : public Ingredient
{
    public:
    Egg(int caloricV, int weight) :
        Ingredient("Egg", "protein"){

        weight = this->weight;
        caloricV = calcCaloricV();
    }

    int calcCaloricV(){
        int caloricV;
        caloricV = weight * 2;
        return caloricV;
    }


};

class Milk : public Ingredient
{
public :
    Milk(int caloricV, int weight) :
        Ingredient("Milk", "protein"){
        weight = this->weight;
        caloricV = calcCaloricV();
    }

    int calcCaloricV(){
        int caloricV;
        caloricV = weight * 3.6;
        return caloricV;
    }
};

class Sugar : public Ingredient
{
public :
    Sugar(int caloricV, int weight) :
        Ingredient("Sugar", "Carbohydrate"){
        weight = this->weight;
        caloricV = calcCaloricV();
    }

    int calcCaloricV(){
        int caloricV;
        caloricV = weight * 4;
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
        this -> caloricV = calcCaloricV();

    }

    int calcCaloricV(){
        int caloricV;
        caloricV = weight * 3.6;
        return caloricV;
    }
};

class selfRFlour : public Flour {
    selfRFlour(int caloricV, int weight) :
        Flour("Self Raising Flour", weight){
        this -> caloricV = calcCaloricV();
        }

    int calcCaloricV(){
        int caloricV;
        caloricV = weight * 3.54;
        return caloricV;
    }

};

class Semolina : public Flour {
public:
    Semolina(int caloricV, int weight) :
        Flour("Semolina", weight){
        this->caloricV = calcCaloricV();
        }

    int calcCaloricV(){
        int caloricV;
        caloricV = weight * 3.6;
        return caloricV;
    }
};





class Recipe {

    public:
    QString name;




    friend class MacroType;
};

#endif // INGREDIENTS_H
