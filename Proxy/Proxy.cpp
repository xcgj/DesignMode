#include "Proxy.h"

Proxy::Proxy(Destination * destination)
{
    individual = new Individual(destination);
}

void Proxy::BuyMilk()
{
    cout << "this is proxy, " << endl;
    individual->BuyMilk();
}

void Proxy::BuyCosmetics()
{
    cout << "this is proxy, " << endl;
    individual->BuyCosmetics();
}

Proxy::~Proxy()
{
    if (NULL != individual)
    {
        delete individual;
        individual = NULL;
    }
}
