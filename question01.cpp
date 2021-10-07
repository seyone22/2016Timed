//Author: S.G.Seyone
//This program will calculate the BMI and display overweight, underweight, normal, or obese
//Time Taken: 30 MIN

#include <iostream>
#include <sstream>

using namespace std;

double convertunit(double input, string from, string to) //universal, easily extensible unit converter
{
    double output;
    if (from == "lbs")
    {
        if (to == "kg")
        {
            output = input * 0.45359237;
        }
    }
    else if (from == "in")
    {
        if (to == "m")
        {
            output = input * 0.0264;
        }
    }
    return output;
}

double getinput() //input function with a nice looking prompt. DOES NOT VALIDATE TYPES!!!
{
    double input;
    cout << ">> ";
    cin >> input;
    return input;
}

int main()
{
    double height, weight, BMI;
    string BMIVal;

    cout << "BMI CALCULATOR\n";

    cout << "Please enter your height in inches\n";
    height = convertunit(getinput(), "in", "m");
    cout << "Please enter your weight in pounds\n";
    weight = convertunit(getinput(), "lbs", "kg");

    BMI = weight / (height * height);
    if (BMI >= 30)
    {
        BMIVal = "obese";
    }
    else if (BMI >= 25)
    {
        BMIVal = "overweight";
    }
    else if (BMI >= 18.5)
    {
        BMIVal = "normal";
    }
    else if (BMI >= 0)
    {
        BMIVal = "underweight";
    }
    cout << "Your BMI is " << BMI << ", and your BMI class is " << BMIVal;
    return 0;
}