//Write a program that prints all odd numbers from 19 down to 1 in descending order.

#include <iostream>
using namespace std;
int main(){
    for(int i=19;i>=1;i--){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
    return 0;
}