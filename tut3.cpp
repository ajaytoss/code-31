#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    //we are learning manipulators
    int a = 20, b = 110, c = 3330;
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;

    //with setw() manipulator

    cout << "The value of a is: "<<setw(4)<<a << endl;
    cout << "The value of b is: " <<setw(4)<< b << endl;
    cout << "The value of c is: " <<setw(4)<< c << endl;
    return 0;
}    