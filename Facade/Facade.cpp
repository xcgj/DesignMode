#include "Facade.h"

Facade::Facade()
{

}

void Facade::InvestmentPlanA()
{
    std::cout << "InvestmentPlanA" << std::endl;
    nationaldebt.Buy();
    p2p.Buy();
    realty.Sell();
    stock.Buy();
}

void Facade::InvestmentPlanB()
{
    std::cout << "InvestmentPlanB" << std::endl;
    nationaldebt.Sell();
    p2p.Buy();
    realty.Buy();
    stock.Sell();
}
