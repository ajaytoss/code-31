//Problem Statement: Write a program that simulates a traffic light system. Prompt the user to enter a single character representing the current color of the light: R or r for Red, Y or y for Yellow, and G or g for Green.

#include <iostream>
using namespace std;
int main() {
    char light;
    cout << "Enter the traffic light color (R for Red, Y for Yellow, G for Green): ";
    cin >> light;

    switch (light){
        case 'R':
        cout<<"Stop! The light is Red."<<endl;
        break;
        case'Y':
        cout<<"Caution! The light is Yellow."<<endl;
        break;
        case 'G':
        cout<<"Go! The light is Green."<<endl;
        break;
        default:
            cout << "Error: Invalid traffic light color!" << endl;

    }
}