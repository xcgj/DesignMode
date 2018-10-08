#ifndef TEEN_H
#define TEEN_H
#include "human.h"

class Teen : public Human
{
public:
    Teen();

    virtual void Play();
    virtual void Sleep();
    virtual void Eat();
};

#endif // TEEN_H
