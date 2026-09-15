#include <iostream>

using namespace std;

int main() {
    long long n;
    cout<<"Enter a number: ";
    cin>>n;
    long long fact=1;
    for(long long i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
    
    return 0;
}