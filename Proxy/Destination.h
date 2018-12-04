#ifndef DESTINATION_H
#define DESTINATION_H

#include <string>
using namespace std;

class Destination
{
public:
    Destination(string name);
    string GetDestinationName();

private:
    string name;
};

#endif // DESTINATION_H
