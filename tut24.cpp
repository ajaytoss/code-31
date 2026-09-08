//Ask the user to input a single character. Use a switch-case statement to check whether the character is a vowel (a, e, i, o, u - both lowercase and uppercase) or a consonant.
#include <iostream>

using namespace std;

int main() {
    
    char ch;
    cout<<"enter character:"<<endl;
    cin>>ch;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "The character is a vowel." << endl;
        break;
    
    default:
        cout << "The character is a consonant." << endl;
        break;
    }
    return 0;
}