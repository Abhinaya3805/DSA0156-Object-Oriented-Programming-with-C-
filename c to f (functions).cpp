#include <iostream>
using namespace std;
double celsiusToFahrenheit(double celsius) 
{
    return (celsius * 9.0 / 5.0) + 32.0;
}
double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() 
{
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = celsiusToFahrenheit(celsius);
    cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit" << endl;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = fahrenheitToCelsius(fahrenheit);
    cout << fahrenheit << " Fahrenheit is equal to " << celsius << " Celsius" << endl;

    return 0;
}

