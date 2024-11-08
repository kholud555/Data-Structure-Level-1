

#include <iostream>
using namespace std;

union MyUnion
{
    int IntValue;
    float FloatValue;
    char CharValue;

};


int main()
{
    MyUnion myUnion;

    myUnion.IntValue = 42;

    cout << "Inter value = " << myUnion.IntValue << endl;

    myUnion.FloatValue = 1.254;

    cout << "Float value = " << myUnion.FloatValue << endl;

    myUnion.CharValue = 'K';

    cout << "Char value = " << myUnion.CharValue << endl;

}

