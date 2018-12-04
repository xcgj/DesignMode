#ifndef IPHONE6SP_H
#define IPHONE6SP_H

#include "Iphone.h"

class Iphone6SP : public Iphone
{
public:
    Iphone6SP();
    virtual ~Iphone6SP();
    virtual void Feature();

private:
    void FastReaction();
};

#endif // IPHONE6SP_H
