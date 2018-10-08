#ifndef STRATEGY_H
#define STRATEGY_H
#include "operation.h"

class Strategy
{
public:
    Strategy(char type);
    ~Strategy();
    float GetResultOfStrategy(float, float);

private:
    Operation * operation;
};

#endif // STRATEGY_H
