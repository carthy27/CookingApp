#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

namespace Instructions{
class Instructions{
private:
    int link;
    QString instruction;
    QString inst[7] = {"no recipe found yet","www.bbcgoodfood.com/recipes/easy-white-bread","https://www.bbcgoodfood.com/recipes/cupcakes",
                       "https://spunout.ie/health/recipes/french-toast",
                      "https://thehappyfoodie.co.uk/recipes/prodigious-pavlova/",
                      "https://spunout.ie/health/recipes/pancakes","https://www.bbcgoodfood.com/recipes/perfect-scrambled-eggs-recipe"};
public :

    Instructions(int i = 0):link(i){
        this -> instruction = inst[i];
    }

    int getLink(){return link;}

    //void setRecipeInstructions( Recipe z,int y){ z.instructions = inst[y]; }
    friend class Recipe;
};
}




#endif // INSTRUCTIONS_H
