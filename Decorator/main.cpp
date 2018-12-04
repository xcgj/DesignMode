#include <iostream>
#include "Iphone6SP.h"
#include "MyPhoneSP.h"
#include "IphoneX.h"
#include "MyPhoneX.h"
using namespace std;

int main(int argc, char *argv[])
{
    cout << "----------Iphone6SP----------" << endl;
    Iphone6SP * iphone6SP = new Iphone6SP();
    iphone6SP->Feature();
    cout << "\n----------MyPhoneSP----------" << endl;
    MyPhoneSP * myPhoneSP = new MyPhoneSP();
    myPhoneSP->SetBasePhone(iphone6SP);
    myPhoneSP->Feature();
    cout << "\n----------IphoneX----------" << endl;
    IphoneX * iphoneX = new IphoneX();
    iphoneX->Feature();
    cout << "\n----------MyPhoneX----------" << endl;
    MyPhoneX * myPhoneX = new MyPhoneX();
    myPhoneX->SetBasePhone(iphoneX);
    myPhoneX->Feature();
    delete iphone6SP;
    delete myPhoneSP;
    delete iphoneX;
    delete myPhoneX;
    return 0;
}
