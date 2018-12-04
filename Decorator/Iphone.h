#ifndef IPHONE_H
#define IPHONE_H

#include "BasePhone.h"

class Iphone : public BasePhone
{
public:
    Iphone();
    virtual ~Iphone();
    virtual void Feature();
};

#endif // IPHONE_H
