#ifndef MYPHONEX_H
#define MYPHONEX_H

#include "MyPhone.h"

class MyPhoneX : public MyPhone
{
public:
    MyPhoneX();
    virtual ~MyPhoneX();
    virtual void Feature();

private:
    void FunctionCamera();
};

#endif // MYPHONEX_H
