#include <iostream>

using namespace std;

int main() {
    long long n;
    cout<<"enter the value of which fabonicca u wamnna see";
    cin>>n;
    long long first=0,second=1,next;
    cout<<"fibonacci sequence"<<endl;
    for(long long i=0;i<n;i++){
        if(i<=1){
            next=1;
        }else{
            next=first+second;
            first=second;
            second=next;
        }
        cout<<next<<endl;
    }

    return 0;
}