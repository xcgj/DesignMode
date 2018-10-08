#ifndef MINUS_H
#define MINUS_H
#include "operation.h"

class Minus : public Operation
{
public:
    Minus();

     virtual float GetResult(float, float);
};

#endif // MINUS_H
