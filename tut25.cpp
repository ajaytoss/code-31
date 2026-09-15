// pointers

#include <iostream>

using namespace std;

int main() {
      int a=3;
      int*b=&a;
      //cout<<b;
      // & is used to get the address of a variable

      cout<<"the address of a is "<<&a<<endl;
      cout<<"the address of a is "<<b<<endl;


      // * is used to get the value at the address stored in a pointer
      cout<<"the value at the address stored in b is "<<*b<<endl;

// pointer to pointer
      int**c=&b;
      cout<<"the address of b is "<<&b<<endl;
      cout<<"the address of b is "<<c<<endl;   
      cout<<"the value at the address stored in c is "<<**c<<endl; 


    return 0;
}