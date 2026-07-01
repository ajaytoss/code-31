//Problem Statement: Write a program that asks the user to enter an integer from 1 to 12 representing a month of the year (1 for January, 2 for February, etc.). Use a switch-case statement to print:

#include <iostream>
using namespace std;
int main() {
    int num;

    cout<<"Enter your LEGENDARY NUMBER Master: ";
    cin>>num;

    switch(num){
        case 1:
        cout<<"You entered 1 that is JANUARY"<<endl;
        break;
        case 2:
        cout<<"You entered 2 that is FEBRUARY"<<endl;
        break;
        case 3:
        cout<<"You entered 3 that is MARCH"<<endl;
        break;
        case 4:
        cout<<"You entered 4 that is APRIL"<<endl;
        break;
        case 5:
        cout<<"You entered 5 that is MAY"<<endl;
        break;
        case 6:
        cout<<"You entered 6 that is JUNE"<<endl;
        break;
        case 7:
        cout<<"You entered 7 that is JULY"<<endl;
        break;
        case 8:
        cout<<"You entered 8 that is AUGUST"<<endl;
        break;
        case 9:
        cout<<"You entered 9 that is SEPTEMBER"<<endl;
        break;
        case 10:
        cout<<"You entered 10 that is OCTOBER"<<endl;
        break;
        case 11:
        cout<<"You entered 11 that is NOVEMBER"<<endl;
        break;
        case 12:
        cout<<"You entered 12 that is DECEMBER"<<endl;
        break;
        default:
            cout << "Error: Invalid month number!" << endl;
    }
    return 0;
}