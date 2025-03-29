#include <iostream>
using namespace std;

/*
C=(F−32) * 9/5
*/
double celsiusToFarenheit(double fahrenheit){
    fahrenheit--;
    cout << "Fahrenheit minus one in other function: " << fahrenheit << endl;
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main(){
    double fahrenheit = 85.1;
    
    double celsius = celsiusToFarenheit(fahrenheit);
    cout << "Temperature in Celsius: " << celsius << endl;

    cout << "Fahrenheit in main: " << fahrenheit << endl;

    return 0;
}