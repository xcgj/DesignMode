#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
using namespace std;

class Human
{
public:
    Human();

    virtual void Play();
    virtual void Sleep();
    virtual void Eat();
};

#endif // HUMAN_H
