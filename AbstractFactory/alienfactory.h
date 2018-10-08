#ifndef ALIENFACTORY_H
#define ALIENFACTORY_H
#include "factory.h"
#include "alienchild.h"
#include "alienteen.h"

class AlienFactory : public Factory
{
public:
    AlienFactory();

    virtual Child *CreateChild();
    virtual Teen *CreateTeen();
};

#endif // ALIENFACTORY_H
