#ifndef HUMANTEEN_H
#define HUMANTEEN_H
#include "teen.h"

class HumanTeen : public Teen
{
public:
    HumanTeen();

    virtual void Sleep();
    virtual void Walk();
};

#endif // HUMANTEEN_H
