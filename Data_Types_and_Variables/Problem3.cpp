/*
✅✅ Problem 3: Write a program to convert a temperature given in Fahrenheit to Celsius.
🚀 °C = (°F - 32) × 5/9; 
*/

#include <iostream>
using namespace std;

int main()
{
    float f, c;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> f;
    c = (f - 32) * 5 / 9;
    cout << "The temperature in Celsius is: " << c << endl;
    return 0;
}