#ifndef MYPHONE_H
#define MYPHONE_H

#include "BasePhone.h"

class MyPhone : public BasePhone
{
public:
    MyPhone();
    virtual ~MyPhone();
    virtual void Feature();
    void SetBasePhone(BasePhone * basePhone);

protected:
    BasePhone * basePhone;
};

#endif // MYPHONE_H
