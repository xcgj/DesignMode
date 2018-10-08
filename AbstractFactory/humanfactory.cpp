#include "humanfactory.h"

HumanFactory::HumanFactory()
{

}

Child *HumanFactory::CreateChild()
{
    return new HumanChild();
}

Teen *HumanFactory::CreateTeen()
{
    return new HumanTeen();
}
