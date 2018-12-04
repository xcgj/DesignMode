#ifndef IPHONEX_H
#define IPHONEX_H

#include "Iphone.h"

class IphoneX : public Iphone
{
public:
    IphoneX();
    virtual ~IphoneX();
    virtual void Feature();

private:
    void BangScreen();
};

#endif // IPHONEX_H
