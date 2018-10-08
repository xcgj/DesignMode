#include "opreationfactory.h"
#include "plus.h"
#include "minus.h"

OpreationFactory::OpreationFactory()
{

}

Opration * OpreationFactory::CreateOpration(char opt)
{
    switch (opt) {
    case '+':
        return new Plus();
    case '-':
        return new Minus();
    default:
        break;
    }
    return nullptr;
}
