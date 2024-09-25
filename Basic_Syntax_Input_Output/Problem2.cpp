/*
✅ Problem 2: Write a program to take input of a character and check whether it is a vowel or consonant.
 */

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<< "Enter a character: ";
    cin>> ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout<< "It is a vowel " << ch << endl;
} else{
    cout << "It is a consonant " << ch << endl;
}
    return 0;
}