#ifndef MYPHONESP_H
#define MYPHONESP_H

#include "MyPhone.h"

class MyPhoneSP : public MyPhone
{
public:
    MyPhoneSP();
    virtual ~MyPhoneSP();
    virtual void Feature();

private:
    void FullScreen();
};

#endif // MYPHONESP_H
