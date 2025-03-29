#include <iostream>
using namespace std;

/*
To gain access to its arguments, the function declares its parameters as references. In C++, references are indicated with an ampersand (&) following the parameter type, as in the parameters taken by duplicate in the example above.

When a variable is passed by reference, what is passed is no longer a copy, but the variable itself, the variable identified by the function parameter, becomes somehow associated with the argument passed to the function, and any modification on their corresponding local variables within the function are reflected in the variables passed as arguments in the call.
*/

void doubleThem(int &a, int &b){
   a *= 2;
   b *= 2;
    cout << "Inside doubleThem: a = " << a << ", b = " << b << endl;
}

int  main(){
    int x = 5;
    int y = 10;

    cout << "Before double them : x = " << x << ", y = " << y << endl;

    // Call the function
   doubleThem(x, y);

    cout << "After double them : x = " << x << ", y = " << y << endl;

    return 0;
}