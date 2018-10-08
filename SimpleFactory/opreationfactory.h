#ifndef OPREATIONFACTORY_H
#define OPREATIONFACTORY_H
#include "opration.h"

class OpreationFactory
{
public:
    OpreationFactory();
    ~OpreationFactory();
    Opration * CreateOpration(char opt);
};

#endif // OPREATIONFACTORY_H
