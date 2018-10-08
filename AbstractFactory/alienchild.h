#ifndef ALIENCHILD_H
#define ALIENCHILD_H
#include "child.h"

class AlienChild : public Child
{
public:
    AlienChild();

    virtual void Play();
    virtual void Eat();
};

#endif // ALIENCHILD_H
