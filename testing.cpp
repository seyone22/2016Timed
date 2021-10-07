//Author: S.G.Seyone
//This program will count the number of digits in a given number N.
//Time Taken: 20MIN

#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
    string sGreeting = "Hello Test";
    char greeting[] = "Hello";
    cout << sizeof(greeting) << endl;
    cout << sGreeting.c_str() << endl;
    cout << sizeof(sGreeting.c_str()) << endl;

    strcpy(greeting, sGreeting.c_str());
    cout << sizeof(greeting) << endl;
    cout << greeting;
    return 0;
}