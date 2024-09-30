/*
Problem 2: Write a program to calculate the area of a circle using float.

 */

#include <iostream>
using namespace std;
int main(){
    float radius, area;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "The area of the circle is: " << area << endl;
    return 0;
}