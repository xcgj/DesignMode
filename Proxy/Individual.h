#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include "Interface.h"
#include "Destination.h"

class Individual : public Interface
{
public:
    Individual(Destination * destination);
    virtual ~Individual();

    virtual void BuyMilk();
    virtual void BuyCosmetics();

private:
    Destination * destination;
};

#endif // INDIVIDUAL_H
