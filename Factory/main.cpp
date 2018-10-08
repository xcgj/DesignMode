#include <iostream>
using namespace std;

#include "factory.h"
#include "childfactory.h"
#include "teenfactory.h"
#include "human.h"

int main()
{
    int choise;
    Factory * factory = nullptr;
    Human * human = nullptr;

    while(1)
    {
        cout << "choose number to create character : " << endl << "0 : child" << endl << "1 : teenager" << endl << "other : exit" << endl<< "your choise : ";
        cin >> choise;

        switch (choise) {
        case 0:
            factory = new ChildFactory();   //create specified factory
            break;
        case 1:
            factory = new TeenFactory();    //create specified factory
            break;
        default:
            return 0;
        }

        human = factory->CreateHuman();  //create specified human object

        cout << endl;
        human->Play();
        human->Sleep();
        human->Eat();
        cout << endl << endl;
    }
    return 0;
}
