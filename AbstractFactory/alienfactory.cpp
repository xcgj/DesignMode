#include "alienfactory.h"

AlienFactory::AlienFactory()
{

}

Child *AlienFactory::CreateChild()
{
    return new AlienChild();
}

Teen *AlienFactory::CreateTeen()
{
    return new AlienTeen();
}
