#include <iostream>
#include "Proxy.h"
#include "Destination.h"
using namespace std;

int main(int argc, char *argv[])
{
    Destination * destination = new Destination("HK");
    Proxy * proxy = new Proxy(destination);
    proxy->BuyMilk();
    proxy->BuyCosmetics();

    delete destination;
    delete proxy;
    return 0;
}
