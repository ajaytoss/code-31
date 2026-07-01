// we are practicing switch case  in C++

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number, operator (+, -, *, /), and second number: ";
    cin >> num1 >> op >> num2;

    switch (op){
        case '+':
        cout<< num1<<" + "<<num2<<" = "<<num1+num2<<endl;
        break;
        case '-':
        cout<< num1<<" - "<<num2<<" = "<<num1-num2<<endl;
        break;
        case '*':
        cout<< num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        break;
        case '/':
        if(num2!=0){
            cout<< num1<<" / "<<num2<<" = "<<num1/num2<<endl;
        } else {
            cout<<"Error: Division by zero is not allowed."<<endl;
        }
        break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }
  
    return 0;
}

