#ifndef P2P_H
#define P2P_H

#include "Investment.h"

//操作P2P的子系统
class P2P : public Investment
{
public:
    P2P();

    virtual void Buy();
    virtual void Sell();
};

#endif // P2P_H
