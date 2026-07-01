//Ask the user to input a positive integer $n$. Use a for loop to calculate and print its factorial.
#include <iostream>
using namespace std;
int main(){
    long long n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    long long facr=1;
    for(long long i=1;i<=n;i++){
        facr*=i;
    }
    cout<<"The factorial of "<<n<<" is "<<facr<<endl;
    return 0;
}