#include <iostream>
#include<limits>
using namespace std;

void main() {
    int hour, minutes, seconds;
    char separator1, separator2;

    cout << "Enter the time in the format HH:MM:SS: ";
    cin >> hour >> separator1 >> minutes >> separator2 >> seconds;

    while (separator1 != ':' || separator2 != ':' || hour < 0 || hour > 23 || minutes < 0 || minutes > 59 || seconds < 0 || seconds > 59) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter the time in the format HH:MM:SS: ";
        cin >> hour >> separator1 >> minutes >> separator2 >> seconds;
    }

    int elapsedSeconds = hour * 3600 + minutes * 60 + seconds;
    cout << "The time in seconds is: " << elapsedSeconds << endl;
}