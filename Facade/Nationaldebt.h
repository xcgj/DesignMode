#ifndef NATIONALDEBT_H
#define NATIONALDEBT_H

#include "Investment.h"

//操作国债的子系统
class NationalDebt : public Investment
{
public:
    NationalDebt();

    virtual void Buy();
    virtual void Sell();
};

#endif // NATIONALDEBT_H
