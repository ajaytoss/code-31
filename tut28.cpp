#include <iostream>

using namespace std;

int sum(int , int);
//void g(void);
// can also work as void g();
void g();


int main() {
    int num1, num2;
    cout << "enter the value of num1" << endl;
    cin >> num1;
    cout << "enter the value of num2" << endl;
    cin >> num2;

    cout << "the sum of num1 and num2 is: " << sum(num1, num2) << endl;
    g();
    return 0;
}
int sum(int a, int b) {
    int c = a + b;
    return c;
    
}
void g(void) {
    cout << "hello world" << endl;
}