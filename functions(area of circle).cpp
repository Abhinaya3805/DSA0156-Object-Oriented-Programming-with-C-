#include <iostream>
using namespace std;

const double PI = 3.14159265358979323846;
double calculateArea(double radius) 
{
    return PI * radius * radius;
}

int main() 
{
    double radius, area;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = calculateArea(radius);
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;
    return 0;
}

