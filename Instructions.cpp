
#include <QtCore>
#include <QtGui>
#include "Instructions.h"




    Instructions::Instructions(int i ):link(i){
        this -> Iinstruction = inst[i];
    }

    QString Instructions::getInstructions(){return Iinstruction;}

    int Instructions::getLink(){return link;}





