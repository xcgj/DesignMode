#include <iostream>
using namespace std;
#include "factory.h"
#include "humanfactory.h"
#include "alienfactory.h"
#include "child.h"
#include "teen.h"

int main()
{
    Factory * factory = nullptr;
    Child * chihld = nullptr;
    Teen * teen = nullptr;
    int choise;

    while(1)
    {
        cout << "choose a race : " << endl << "0 : human" << endl << "1 : alien" << endl << "other : exit" << endl<< "your choise : ";
        cin >> choise;

        switch (choise) {
        case 0:
            factory = new HumanFactory();
            break;
        case 1:
            factory = new AlienFactory();
            break;
        default:
            cout << "exit ok" << endl;
            return 0;
        }
        cout << "-------------------------" << endl;
        chihld = factory->CreateChild();
        teen = factory->CreateTeen();
        chihld->Play();
        chihld->Eat();
        teen->Sleep();
        teen->Walk();
        cout << "-------------------------" << endl << endl;
    }

    return 0;
}
