#ifndef TEENFACTORY_H
#define TEENFACTORY_H
#include "factory.h"
#include "teen.h"

class TeenFactory : public Factory
{
public:
    TeenFactory();

    virtual Human * CreateHuman();
};

#endif // TEENFACTORY_H
