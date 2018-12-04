#include "Iphone6SP.h"

Iphone6SP::Iphone6SP()
{
    cout << " Iphone6SP" << endl;
}

Iphone6SP::~Iphone6SP()
{

}

void Iphone6SP::Feature()
{
    Iphone::Feature();
    FastReaction();
}

void Iphone6SP::FastReaction()
{
    cout << "have FastReaction" << endl;
}
