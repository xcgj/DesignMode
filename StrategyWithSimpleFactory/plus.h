#ifndef PLUS_H
#define PLUS_H
#include "operation.h"

class Plus : public Operation
{
public:
    Plus();

    virtual float GetResult(float, float);
};

#endif // PLUS_H
