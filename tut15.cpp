//Write a program that asks the user how many terms of the Fibonacci sequence they want to see, then prints that many numbers. The sequence starts with 0 and 1, and every number after that is the sum of the two preceding ones.
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number of terms of the Fibonacci sequence you want to see: ";
    cin>>n;

    long long first=0, second=1, next;

    cout<<"Fibonacci Sequence: "<<endl;
    for(int i=0;i<n;i++){
        if(i<=1){
            next=i;
        } else {
            next=first+second;
            first=second;
            second=next;
        }
        cout<<next<<endl;
    }
    return 0;

}