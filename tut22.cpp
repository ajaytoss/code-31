//Create a hardcoded "secret number" (e.g., 42). Give the user exactly 5 attempts to guess it using a for loop.//

#include <iostream>

using namespace std;

int main() {
    int secretNumber = 42;
    int guess;
    cout << "You have 5 attempts to guess the secret number." << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Attempt " << (i + 1) << ": Enter your guess: ";
        cin >> guess;
        if (guess == secretNumber) {
            cout << "Congratulations! You've guessed the secret number!" << endl;
            break;
        } else {
            cout << "Incorrect guess. Try again." << endl;
            if(guess < secretNumber) {
                cout << "Hint: The secret number is higher than your guess." << endl;
            } else {
                cout << "Hint: The secret number is lower than your guess." << endl;
            }
        }
        if (i == 4) {
            cout << "Sorry, you've used all your attempts. The secret number was " << secretNumber << "." << endl;
        }
    }
    
    return 0;
}