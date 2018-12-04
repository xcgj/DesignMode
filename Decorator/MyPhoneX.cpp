#include "MyPhoneX.h"

MyPhoneX::MyPhoneX()
{
    cout << " MyPhoneX" << endl;
}

MyPhoneX::~MyPhoneX()
{

}

void MyPhoneX::Feature()
{
    MyPhone::Feature();
    FunctionCamera();
}

void MyPhoneX::FunctionCamera()
{
    cout << "the Camera function is strong" << endl;
}
