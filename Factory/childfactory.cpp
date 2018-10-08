#include "childfactory.h"

ChildFactory::ChildFactory()
{

}

Human *ChildFactory::CreateHuman()
{
    return new Child();
}
