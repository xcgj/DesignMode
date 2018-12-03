#ifndef STOCK_H
#define STOCK_H

#include "Investment.h"

//操作股票的子系统
class Stock : public Investment
{
public:
    Stock();

    virtual void Buy();
    virtual void Sell();
};

#endif // STOCK_H
