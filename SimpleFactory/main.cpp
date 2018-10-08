#include <iostream>
#include "opreationfactory.h"
#include "opration.h"

using namespace std;

int main()
{
    OpreationFactory * opreationFactory = new OpreationFactory();
    Opration * opration = nullptr;
    char opt;
    float firstNumber;
    float secondNumber;
    float result;

    while (1)
    {
        cout << "firstNumber : " << endl;
        cin >> firstNumber;
        cout << "opt : " << endl;
        cin >> opt;
        cout << "secondNumber : " << endl;
        cin >> secondNumber;

        opration = opreationFactory->CreateOpration(opt);
        if (nullptr == opration)
        {
            cout << "unsupport opration, program exit" << endl;
            break;
        }

        result = opration->GetResult(firstNumber, secondNumber);

        cout << "result : " << result << endl << endl;
    }

    return 0;
}
