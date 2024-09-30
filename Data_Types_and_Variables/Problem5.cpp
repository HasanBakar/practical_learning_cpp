/*
✅✅ Problem 5: Write a program to perform operations on large integers using long long int.
 */

#include <iostream>
using namespace std;
int main()
{
    long long int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    cout << "Quotient: " << a / b << endl;
    cout << "Remainder: " << a % b << endl;
    return 0;
}