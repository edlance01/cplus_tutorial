#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    int x = 5;
    int y = 10;
    int sum = add(x, y);
    cout << "The sum is: " << sum << endl;

    //remember return 0 is implicit if not provided 
    return 0;
}