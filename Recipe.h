#ifndef RECIPE_H
#define RECIPE_H


#define BREAD 1
#define CUPCAKES 2
#define FTOAST 3
#define PAVLOVA 4
#define PANCAKES 5
#define SCRAMBLEDEGG 6

#include "Instructions.h"
#include "Ingredients.h"

//using namespace Instructions;

class Recipe{
private :
    QString name;
    int option;
    QString Rinstruction;
    std::vector<QString> ing;
public :
    Recipe(QString name, int inst);
    QString getBread();
    QString getCupCakes();
    void setName(QString name);
    void setInstructions(int option);
    QString getName() const ;
    QString displayInstructions();
    QString getIngAt(int i);
    QString getRecipes();


};



#endif // RECIPE_H
