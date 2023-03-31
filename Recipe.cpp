#include <QtCore>
#include <QtGui>
#include "Instructions.h"
#include "Recipe.h"


    Recipe::Recipe(QString name, int inst){
        this -> name = name;
        this -> option = inst;

    }


    void Recipe::setName(QString name){
        this -> name = name;
    }

//    void Recipe::setInstructions(int i){
//        Rinstruction = y.getInstructions();
//    }

    QString Recipe::getBread(){
        Instructions i(BREAD);
        return i.getInstructions() ;
    }

    QString Recipe::getCupCakes(){
        Instructions c(CUPCAKES);
        return c.getInstructions();
    }

    QString Recipe::getFtoast(){
        Instructions f(FTOAST);
        return f.getInstructions();
    }




    QString Recipe::getName()const{
    return name;
    }

    QString Recipe::displayInstructions(){
        return Rinstruction;
    }

    QString Recipe::getIngAt(int i){
        return ing[i];
    }

    QString Recipe::getRecipes(){

        return name + "/n" + Rinstruction;
    }
