#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if(i == 5) {
            break;
        }
        cout<<i<<endl;
    
}
return 0;
}

//if we write cout<<i<<endl; after the break statement then it will not print 5.