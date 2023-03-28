#include <QtCore>
#include <QtGui>
#include "Instructions.h"
#include "Recipe.h"
    Instructions y(0);
    Recipe::Recipe(QString name, int inst){
        this -> name = name;
        this -> option = inst;

    }

    void Recipe::setName(QString name){
        this -> name = name;
    }

    void Recipe::setInstructions(int i){

        instruction = y.getInstructions();

    }

    QString Recipe::getName()const{
    return name;
    }

    QString Recipe::displayInstructions(){
        return instruction;
    }

    QString Recipe::getRecipes(){

        return name + "/n" + instruction;
    }
