//Author: S.G.Seyone
//This program will count the number of digits in a given number N.
//Time Taken: 20MIN

#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

string getinput() //input function with a nice looking prompt. VALIDATES FOR INTEGERS!!
{
    string input;
    cout << ">> ";
    cin >> input;
    //validation part
    char inputArray[input.length()];
    strcpy(inputArray, input.c_str()); //the following whitespace when c_str copying is done is dropped, as input.length is not long enough to accept it.
    for (int i = 0; i < input.length(); i++)
    {
        if (inputArray[i] == '0' || inputArray[i] == '1' || inputArray[i] == '2' || inputArray[i] == '3' || inputArray[i] == '4' || inputArray[i] == '5' || inputArray[i] == '6' || inputArray[i] == '7' || inputArray[i] == '8' || inputArray[i] == '9')
        {
            return input;
        }
        else
            return "ERROR";
    }
}

int digitcount(string n)
{
    return n.length();
}

int main()
{
    cout << "Please type in an integer";
    string number = getinput();

    //ugly error detection fix it later plx
    if (number == "ERROR")
    {
        cout << "you have not entered a number. Please try again.";
        return 0;
    }

    cout << "Number of digits in the number " << number << " is " << digitcount(number);
    return 0;
}