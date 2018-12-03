#ifndef INVESTMENT_H
#define INVESTMENT_H

#include <iostream>
using namespace std;

//投资的抽象基类
class Investment
{
public:
    Investment();

    virtual void Buy() = 0;
    virtual void Sell() = 0;
};

#endif // INVESTMENT_H
