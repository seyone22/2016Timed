//Author: S.G.Seyone
//This program will analyze FASS 2017 weekly scores based on gender.
//Time Taken: 1 HR

#include <iostream>
#include <sstream>

using namespace std;

double getinput() //input function with a nice looking prompt. DOES NOT VALIDATE TYPES!!!
{
    double input;
    cout << ">> ";
    cin >> input;
    return input;
}

int main()
{
    int dataTable[4][2]{
        {255, 211},
        {208, 121},
        {272, 292},
        {25, 275}};
    string rowHeaders[4]{"First Level", "Second Level", "Third Level", "Fourth Level"};
    string columnHeaders[]{"Girls", "Boys"};

    int rowMax[4], rowMaxIndex[4], colMaxIndex[2], colMax[2], rowTotals[4], rowTotal, rowTotalIndex;

    //best performance in each level
    for (int i = 0; i < 4; i++)
    {
        int tempMax = 0;
        for (int j = 0; j < 2; j++)
        {
            if (dataTable[i][j] > tempMax)
            {
                tempMax = dataTable[i][j];
                rowMaxIndex[i] = j;
            }
        }
        rowMax[i] = tempMax;
    }

    //best performance by gender
    for (int j = 0; j < 2; j++)
    {
        int tempMax = 0;
        for (int i = 0; i < 4; i++)
        {
            if (dataTable[i][j] > tempMax)
            {
                tempMax = dataTable[i][j];
                colMaxIndex[j] = i;
            }
        }
        colMax[j] = tempMax;
    }

    //calculate the winning level
    for (int i = 0; i < 4; i++)
    {
        int runningTot = 0;
        for (int j = 0; j < 2; j++)
        {
            runningTot += dataTable[i][j];
        }
        rowTotals[i] = runningTot;
    }
    int tempTot = 0, tempTotIndex = 0;
    for (int i = 0; i < 4; i++)
    {
        if (rowTotals[i] >= tempTot)
        {
            tempTot = rowTotals[i];
            tempTotIndex = i;
        }
    }
    rowTotal = tempTot;
    rowTotalIndex = tempTotIndex;

    cout << "The best performance in each level\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "\tThe Best Performance in the " << rowHeaders[i] << " of FASS WEEK 2017: " << columnHeaders[rowMaxIndex[i]] << ", " << rowMax[i] << endl;
    }

    cout << "The best performance by each gender\n";
    for (int i = 0; i < 2; i++)
    {
        cout << "\tThe Best Performance by " << columnHeaders[i] << " in FASS WEEK 2017: " << rowHeaders[colMaxIndex[i]] << ", " << colMax[i] << endl;
    }

    cout << "The overall winner\n";
    cout << "\tThe overall winner is " << rowHeaders[rowTotalIndex] << " with a score of " << rowTotal << " points\n";
    return 0;
}