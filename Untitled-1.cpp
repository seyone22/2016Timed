//Author: S.G.Seyone
//This program will count the number of digits in a given number N.
//Time Taken: 20MIN

#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
   /* int a = 50, b = -20;
    a = b - a;
    b = b - a;
    a = b + a;

    cout << a << " " << b;
    return 0;*/

    int a = -500, b = 20;
    a = a*b;
    b = a/b;
    a = a/b;

    cout << a << " " << b;
    
    return 0;
}

&a will modify the value. then  so a+=10 will set a as something, and you can use that in the rest of the program