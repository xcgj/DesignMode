#ifndef FACADE_H
#define FACADE_H

#include "Nationaldebt.h"
#include "P2P.h"
#include "Realty.h"
#include "Stock.h"

//高层接口，这个接口使得这Natoinaldebt系统、P2P系统、Realty系统、Stock系统更加容易使用。
class Facade
{
public:
    Facade();

    void InvestmentPlanA();//接口的具体使用策略
    void InvestmentPlanB();

private:
    NationalDebt nationaldebt;
    P2P p2p;
    Realty realty;
    Stock stock;
};

#endif // FACADE_H
