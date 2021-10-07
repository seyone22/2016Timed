//Author: S.G.Seyone
//This program will count the number of digits in a given number N.
//Time Taken: 20MIN

#include <iostream>
#include <sstream>

using namespace std;

int getinput() //input function with a nice looking prompt. DOES NOT VALIDATE TYPES!!!
{
    int input;
    cout << ">> ";
    cin >> input;
    return input;
}

int digitcount(int n)
{
    return to_string(n).length();
}

int main()
{
    cout << "Please type in an integer";
    int number = getinput();
    cout << "Number of digits in the number " << number << " is " << digitcount(number);
    return 0;
}