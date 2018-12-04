#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
using namespace std;

//接口基类
class Interface
{
public:
    Interface();
    virtual ~Interface();

    virtual void BuyMilk() = 0;
    virtual void BuyCosmetics() = 0;
};

#endif // INTERFACE_H
