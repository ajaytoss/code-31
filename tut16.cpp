//Create a hardcoded "secret number" (e.g., 42). Give the user exactly 5 attempts to guess it using a for loop.
#include <iostream>
using namespace std;
int main() {
    int secretNumber = 42;
    int guess;
    const int maxAttempts = 5;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "You have " << maxAttempts << " attempts to guess the secret number." << endl;

    for (int attempt = 1; attempt <= maxAttempts; ++attempt) {
        cout << "Attempt " << attempt << ": Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You've guessed the secret number!" << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }

        if (attempt == maxAttempts) {
            cout << "Sorry, you've used all your attempts. The secret number was " << secretNumber << "." << endl;
        }
    }

    return 0;
}