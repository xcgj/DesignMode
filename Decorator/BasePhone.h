#ifndef BASEPHONE_H
#define BASEPHONE_H

#include <iostream>
using namespace std;

//手机功能基类
class BasePhone
{
public:
    BasePhone();
    virtual ~BasePhone();

    virtual void Feature();
};

#endif // BASEPHONE_H
