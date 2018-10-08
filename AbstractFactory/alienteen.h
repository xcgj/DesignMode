#ifndef ALIENTEEN_H
#define ALIENTEEN_H
#include "teen.h"

class AlienTeen : public Teen
{
public:
    AlienTeen();

    virtual void Sleep();
    virtual void Walk();
};

#endif // ALIENTEEN_H
