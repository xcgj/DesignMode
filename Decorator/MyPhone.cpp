#include "MyPhone.h"

MyPhone::MyPhone()
{
    cout << "this is MyPhone";
}

MyPhone::~MyPhone()
{

}

void MyPhone::Feature()
{
    //BasePhone::Feature();
    if (NULL != basePhone)
    {
        basePhone->Feature();
    }
}

void MyPhone::SetBasePhone(BasePhone *basePhone)
{
    this->basePhone = basePhone;
}
