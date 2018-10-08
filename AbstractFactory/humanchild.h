#ifndef HUMANCHILD_H
#define HUMANCHILD_H
#include "child.h"

class HumanChild : public Child
{
public:
    HumanChild();

    virtual void Play();
    virtual void Eat();
};

#endif // HUMANCHILD_H
