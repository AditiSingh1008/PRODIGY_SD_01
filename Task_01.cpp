//  Build a Temperature Conversion Program:

#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
double celsiusToFahrenheit(double celsius);
double celsiusToKelvin(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToCelsius(double kelvin);
double kelvinToFahrenheit(double kelvin);

int main() {
    double temperature;
    char unit;

    // Prompt the user for the temperature and the original unit
    cout << "Enter temperature value: ";
    cin >> temperature;
    cout << "Enter the unit of measurement (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    // Convert and display the temperature in the other two units
    switch (unit) {
        case 'C':
        case 'c':
            cout << fixed << setprecision(2);
            cout << temperature << " Celsius is equivalent to " 
                 << celsiusToFahrenheit(temperature) << " Fahrenheit and " 
                 << celsiusToKelvin(temperature) << " Kelvin." << endl;
            break;
        case 'F':
        case 'f':
            cout << fixed << setprecision(2);
            cout << temperature << " Fahrenheit is equivalent to " 
                 << fahrenheitToCelsius(temperature) << " Celsius and " 
                 << fahrenheitToKelvin(temperature) << " Kelvin." << endl;
            break;
        case 'K':
        case 'k':
            cout << fixed << setprecision(2);
            cout << temperature << " Kelvin is equivalent to " 
                 << kelvinToCelsius(temperature) << " Celsius and " 
                 << kelvinToFahrenheit(temperature) << " Fahrenheit." << endl;
            break;
        default:
            cout << "Invalid unit of measurement." << endl;
            break;
    }

    return 0;
}

// Function definitions
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}
