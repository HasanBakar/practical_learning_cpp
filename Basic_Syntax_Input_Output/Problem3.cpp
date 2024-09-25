/*
✅ Problem 3: Write a program to print the ASCII value of a given character.
 */
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "ASCII value of " << ch << " is " << int(ch) << endl;
    return 0;
}