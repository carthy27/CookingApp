#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H
#include <QtCore>
#include <QtGui>
using namespace std;


class Instructions{
private:
    int link;
    QString Iinstruction;
    QString inst[7] = {"no recipe found yet","www.bbcgoodfood.com/recipes/easy-white-bread","https://www.bbcgoodfood.com/recipes/cupcakes",
                       "https://spunout.ie/health/recipes/french-toast",
                      "https://thehappyfoodie.co.uk/recipes/prodigious-pavlova/",
                      "https://spunout.ie/health/recipes/pancakes","https://www.bbcgoodfood.com/recipes/perfect-scrambled-eggs-recipe"};
public :

    Instructions(int i);

    QString getInstructions();

    int getLink();


    friend class Recipe;
};





#endif // INSTRUCTIONS_H
