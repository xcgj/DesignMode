#ifndef MINUS_H
#define MINUS_H
#include "opration.h"

class Minus : public Opration
{
public:
    Minus();
    ~Minus();

    float GetResult(float firstNum, float seconNum);
};

#endif // MINUS_H
