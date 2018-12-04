#include "IphoneX.h"

IphoneX::IphoneX()
{
    cout << " IphoneX" << endl;
}

IphoneX::~IphoneX()
{

}

void IphoneX::Feature()
{
    Iphone::Feature();
    BangScreen();
}

void IphoneX::BangScreen()
{
    cout << "have ugly BangScreen" << endl;
}
