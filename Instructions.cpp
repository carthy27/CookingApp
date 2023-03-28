
#include <QtCore>
#include <QtGui>
#include "Instructions.h"
using namespace std;



    Instructions::Instructions(int i ):link(i){
        this -> Iinstruction = inst[i];
    }

    QString Instructions::getInstructions(){return Iinstruction;}

    int Instructions::getLink(){return link;}





