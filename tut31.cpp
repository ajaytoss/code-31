
// do not use inline function in static variable because static variable is initialized only once and inline function is called multiple times. So, if we use inline function in static variable, then the value of static variable will be changed every time the inline function is called. This will lead to unexpected results. Therefore, it is not recommended to use inline function in static variable. 
#include <iostream>

using namespace std;
 int product(int a, int b) {
//static int c=1;
//c = c + 1;
return a * b;
}

float moneyReceived(int currentMoney,float factor=1.04){
    return currentMoney * factor;
}

int main() {
 int a,b;
    //cout<< "Enter two numbers to find their product: ";
    //cin>>a>>b;
    //cout<< "The product of " << a << " and " << b << " is " << product(a, b) << endl; 
    //cout<< "The product of " << a << " and " << b << " is " << product(a, b) << endl; 
    //cout<< "The product of " << a << " and " << b << " is " << product(a, b) << endl; 
    //cout<< "The product of " << a << " and " << b << " is " << product(a, b) << endl; 
    //cout<< "The product of " << a << " and " << b << " is " << product(a, b) << endl; 
        
int money = 100000;
cout<< "If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money) << " Rs after 1 year" << endl;
cout<<"for vip: "<<"if you have"<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money,1.1)<<" Rs after 1 year" << endl;

return 0;
}