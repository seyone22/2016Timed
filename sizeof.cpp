//Author: S.G.Seyone
//This program will count the number of digits in a given number N.
//Time Taken: 20MIN

#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

void print(char m[])
{
    
    for (int i = 0; i < (sizeof(m)/sizeof(char)); i++)
    {
        cout << m[i];
    }
    
}

int main()
{
    char msg[10] = {'H', 'i', ' ', 'H', 'o', 'w', ' ', 'a', 'r', 'e'};

    print(msg);

    return 0;
}