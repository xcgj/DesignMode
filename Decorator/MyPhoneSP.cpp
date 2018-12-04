#include "MyPhoneSP.h"

MyPhoneSP::MyPhoneSP()
{
    cout << " MyPhoneSP" << endl;
}

MyPhoneSP::~MyPhoneSP()
{

}

void MyPhoneSP::Feature()
{
    MyPhone::Feature();
    FullScreen();
}

void MyPhoneSP::FullScreen()
{
    cout << "have FullScreen" << endl;
}
