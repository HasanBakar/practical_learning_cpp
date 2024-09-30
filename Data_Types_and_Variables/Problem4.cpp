/*
✅✅ Problem 4: Write a program to demonstrate type casting from int to float and vice-versa.

 */

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float b = 2.5;
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of a is: " << float(a) << endl;
    cout << "The value of b is: " << int(b) << endl;
    return 0;   
}