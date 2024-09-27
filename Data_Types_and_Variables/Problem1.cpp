/*
✅ Problem 1: Write a program to demonstrate the use of different data types (int, float, char, etc.).

 */

#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{
    int a;
    float b;
    char c;
    double d;
    bool e;
    string f;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter a float: ";
    cin >> b;
    cout << "Enter a character: ";
    cin >> c;
    cout << "Enter a double: ";
    cin >> d;
    cout << "Enter a boolean: ";
    cin >> e;
    cout << "Enter a string: ";
    cin >> f;
    cout << a << " " << typeid(a).name() << " " << b  << " " << typeid(b).name()<< " " << c << " " << typeid(c).name() << " " << d << " " << typeid(d).name() << " " << e << " " << typeid(e).name()<< " " << f << " " << typeid(f).name() << endl;
    return 0;
}