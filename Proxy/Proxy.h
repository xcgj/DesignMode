#ifndef PROXY_H
#define PROXY_H

#include "Interface.h"
#include "Individual.h"
#include "Destination.h"

class Proxy : public Interface
{
public:
    Proxy(Destination * destination);
    virtual ~Proxy();

    virtual void BuyMilk();
    virtual void BuyCosmetics();

private:
    Individual * individual;
};

#endif // PROXY_H
