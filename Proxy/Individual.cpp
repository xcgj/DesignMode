#include "Individual.h"

Individual::Individual(Destination * destination)
{
    this->destination = destination;
}

Individual::~Individual()
{

}

void Individual::BuyMilk()
{
    cout << "real person need to buy SAFE milk in " << destination->GetDestinationName() << endl;
}

void Individual::BuyCosmetics()
{
    cout << "real person want to buy quality cosmetics in" << destination->GetDestinationName() << endl;
}
