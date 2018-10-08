#ifndef CHILDFACTORY_H
#define CHILDFACTORY_H
#include "factory.h"
#include "child.h"

class ChildFactory : public Factory
{
public:
    ChildFactory();

    virtual Human * CreateHuman();
};

#endif // CHILDFACTORY_H
