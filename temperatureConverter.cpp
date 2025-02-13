#include<iostream>
using namespace std;
double farenheitToCelsius(double farenheit){
    double celsius;
    celsius = (farenheit - 32.0) * 5.0 / 9.0;
    return celsius;
}
double celsiusToFarenheit(double celsius){
    double farenheit;
    farenheit = (celsius + 32.0) * 5.0 / 9.0;
    return farenheit;
}


int main() {
double farenheit;
double celsius;

cout << "Enter your temperature in Farenheit: " << endl;
cin >> farenheit;
cout << "Your temperature in Celsius is: " << farenheitToCelsius(farenheit) << endl; 

cout << "Enter your temperature in Celsius: " << endl;
cin >> celsius;
cout << "Your temperature in Farenheit is: " << celsiusToFarenheit(celsius) << endl;

return 0;
}

