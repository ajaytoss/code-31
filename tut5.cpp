//we are learning about if else statement in c++ programming language

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age<18){
        cout<<"you can't enter the party you are underage"<<endl;
    }
    else if(age==18){
        cout<<"you can enter the party you are just 18 but can't drink"<<endl;
    }
    else{
        cout<<"you can enter the party you are above 18"<<endl;
    }
    return 0;
}

