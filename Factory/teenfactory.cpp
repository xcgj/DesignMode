#include "teenfactory.h"

TeenFactory::TeenFactory()
{

}

Human *TeenFactory::CreateHuman()
{
    return new Teen();
}
