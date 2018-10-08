#include <iostream>
using namespace std;

#include "strategy.h"

int main()
{
    char type;
    float firstNum, secondNum;

    while(1)
    {
        cout << "Operation type (+ -) : ";
        cin >> type;

        try
        {
            Strategy strategy(type);

            while(1)
            {
                cout  << endl << "firstNum : ";
                cin >> firstNum;
                cout << "secondNum : ";
                cin >> secondNum;

                cout << "result : " << strategy.GetResultOfStrategy(firstNum, secondNum) << endl;

                char change;
                cout << "change strategy ?(y/n) : ";
                cin >> change;
                if ('y' == change)
                {
                    cout  << endl << endl;
                    break;
                }
            }
        }
        catch (char const * e)
        {
            cout << e << endl;
            break;
        }
    }
    cout << "exit" << endl;
    return 0;
}
