#ifndef OPRATION_H
#define OPRATION_H

class Opration
{
public:
    Opration();
    virtual ~Opration();

    virtual float GetResult(float firstNum, float seconNum);
};

#endif // OPRATION_H
