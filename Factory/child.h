#ifndef CHILD_H
#define CHILD_H
#include "human.h"

class Child : public Human
{
public:
    Child();

    virtual void Play();
    virtual void Sleep();
    virtual void Eat();
};

#endif // CHILD_H
