#include <iostream>
using namespace std;

// Function declaration and definition
void printEvenNumbers(int limit) {
    cout << "Even numbers up to " << limit << ":" << endl;
    
    for (int i = 0; i <= limit; i++) {
        // Check if the number is divisible by 2
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl; // New line at the end
}

int main() {
    int maxLimit = 20;

    // Call the function and pass the limit
    printEvenNumbers(maxLimit);

    return 0;
}