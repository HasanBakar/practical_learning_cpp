/*
✅Problem 4: Write a program to swap two numbers using a third variable.

 */
#include <iostream>
using namespace std;
int main(){
    int a, b, c=0;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "After swapping: " << a << " " << b;
    return 0;
}