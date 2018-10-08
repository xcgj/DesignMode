#ifndef HUMANFACTORY_H
#define HUMANFACTORY_H
#include "factory.h"
#include "humanchild.h"
#include "humanteen.h"

class HumanFactory : public Factory
{
public:
    HumanFactory();

    virtual Child * CreateChild();
    virtual Teen * CreateTeen();
};

#endif // HUMANFACTORY_H
