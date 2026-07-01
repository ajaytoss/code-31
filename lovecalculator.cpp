#include <iostream>
#include <string>
using namespace std;

int main() {
    string name1, name2;
    int sum = 0;

    cout << "--- 💖 WELCOME TO THE LOVE CALCULATOR 💖 ---" << endl;
    
    // Get the first name
    cout << "Enter the first name: ";
    cin >> name1;
    
    // Get the second name
    cout << "Enter the second name: ";
    cin >> name2;

    // Calculate sum of ASCII values for the first name
    for (int i = 0; i < name1.length(); i++) {
        sum += name1[i];
    }

    // Calculate sum of ASCII values for the second name
    for (int i = 0; i < name2.length(); i++) {
        sum += name2[i];
    }

    // Generate a percentage between 0 and 100 using modulo
    // We add a modifier based on length so "John & Mary" isn't the same as "Mary & John"
    int loveScore = (sum + name1.length() * name2.length()) % 101;

    cout << "\nCalculating compatibility..." << endl;
    cout << "------------------------------------------" << endl;
    cout << "💖 " << name1 << " + " << name2 << " = " << loveScore << "% 💖" << endl;
    cout << "------------------------------------------" << endl;

    // Use a switch-case or if-else to give a funny relationship status report
    // Dividing by 10 groups the scores (e.g., 90-100 becomes 9 or 10)
    switch (loveScore / 10) {
        case 10:
        case 9:
            cout << "Status: Perfect Match! True Soulmates. 👩‍❤️‍👨" << endl;
            break;
        case 8:
        case 7:
            cout << "Status: Sparks are flying! Great chemistry. 🔥" << endl;
            break;
        case 6:
        case 5:
            cout << "Status: Good friends, but maybe something more? 👀" << endl;
            break;
        case 4:
        case 3:
            cout << "Status: Awkward silence... Needs some work. 🥶" << endl;
            break;
        default:
            cout << "Status: Oof. Better off staying far, far away! 🚩" << endl;
    }

    return 0;
}