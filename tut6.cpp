//we are learning about if else statement in c++ programming language


#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age<18){
        cout<<"you can't vote"<<endl;
    }
    else if(age==18){
        cout<<"you can vote"<<endl;
    }
    else{
        cout<<"you can vote"<<endl;
    }
    return 0;
}