// https://cplusplus.com/doc/tutorial
// my first program in C++

/* preprocessing directives must be specified in their own line and do not have to end in ;*/
#include <iostream>

using namespace std;

int main()
{
    // std::cout << "Hello World!  ";
    // std::cout << "I'm a C++ program";
    cout << "Hello World!  ";
    cout << "I'm a C++ program";
    cout << endl;

    //variable is a portion of memory to store a value
    //all 3 examples below are valid way to initialize variable
    // int a = 5;
    // int b(2);
    // int c{3};
    int a = 5;               // initial value: 5
    int b(3);             // initial value: 3
    //int c{2}; // Semicolon added here!
    a = a + 1; 
    int result = a - b;

    cout << "result:" << result << endl;

    //terminate the program
    return 0;
}