#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H
#include <QException>

class zeroThings : public QException{

public:

    zeroThings();
    ~zeroThings();

    void raise() const ;
    zeroThings *clone() const;

};

class youSkippedSteps: public QException{

public:
    youSkippedSteps();
    ~youSkippedSteps();

    void raise() const ;
 };


class noIngException : public zeroThings,youSkippedSteps{

public:
    noIngException();
    ~noIngException();

};


class noRecipe : public zeroThings,youSkippedSteps{

public:
    noRecipe();
    ~noRecipe();
};





#endif // EXCEPTIONS_H
