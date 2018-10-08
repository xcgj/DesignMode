#include "strategy.h"
#include <assert.h>
#include "plus.h"
#include "minus.h"

Strategy::Strategy(char type)
{
    operation = nullptr;
    switch (type) {
    case '+':
        operation = new Plus();
        break;
    case '-':
        operation = new Minus();
        break;
    default:
        break;
    }
    //assert(operation != nullptr);
    if (nullptr == operation)
        throw "get strategy fail";
}

Strategy::~Strategy()
{

}

float Strategy::GetResultOfStrategy(float firstNum, float seconNum)
{
    return operation->GetResult(firstNum, seconNum);
}
