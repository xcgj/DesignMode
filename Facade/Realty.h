#ifndef REALTY_H
#define REALTY_H

#include "Investment.h"

//操作房地产的子系统
class Realty : public Investment
{
public:
    Realty();

    virtual void Buy();
    virtual void Sell();
};

#endif // REALTY_H
