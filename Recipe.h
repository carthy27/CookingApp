#ifndef RECIPE_H
#define RECIPE_H

#include "Instructions.h"

class Recipe{
private :
    QString name;
    QString instructions;
    int whichRecipe;
public :
    Recipe(QString name, Instructions inst){
        this -> name = name;
    }

     QString getRecipe(std::vector<QString> arr){
        return name + "/n" + instructions;
    }
    QString getName() const {return name;}
        QString displayInstructions() const {return instructions;}

    friend class Instructions;
};



#endif // RECIPE_H
