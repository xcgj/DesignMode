#ifndef FACTORY_H
#define FACTORY_H
#include "human.h"

class Factory
{
public:
    Factory();

    virtual Human * CreateHuman();
};

#endif // FACTORY_H
