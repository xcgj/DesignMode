#ifndef FACTORY_H
#define FACTORY_H
#include "child.h"
#include "teen.h"

class Factory
{
public:
    Factory();

    virtual Child * CreateChild();
    virtual Teen *CreateTeen();
};

#endif // FACTORY_H
