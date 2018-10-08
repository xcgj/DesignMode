#ifndef PLUS_H
#define PLUS_H
#include "opration.h"

class Plus : public Opration
{
public:
    Plus();
    ~Plus();

    float GetResult(float firstNum, float seconNum);
};

#endif // PLUS_H
