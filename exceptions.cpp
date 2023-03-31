#include "exceptions.h"
#include <QException>


    zeroThings::zeroThings(){}
    zeroThings::~zeroThings(){}
    zeroThings *zeroThings::clone() const { return new zeroThings(*this); }
    void zeroThings::raise() const { throw *this; }



    youSkippedSteps::youSkippedSteps(){}
    youSkippedSteps::~youSkippedSteps(){}

    void youSkippedSteps::raise() const {throw *this;}




    noIngException::noIngException(){}
    noIngException::~noIngException(){}




    noRecipe::noRecipe(){}
    noRecipe::~noRecipe(){}






