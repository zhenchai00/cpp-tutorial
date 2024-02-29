#include <iostream>     // input output stream library
#include <sstream>      // string stream library

using namespace std;    // standard namespace

int main()
{
    // declare variable
    string time;
    int hours, minutes, seconds;
    char colon1, colon2;

    // convert string to stringstream object
    istringstream iss(time);

    // do while loop to validate the input and prompt the user to re-enter the input
    // if the input is invalid will prompt the user to re-enter the input
    // if the input is valid will break the loop
    do {
        cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
        getline(cin, time);

        // to clear the string stream object and re-convert the user input to stringstream object
        iss.clear();
        iss.str(time);

        // condition to check the input is valid or not
        if (
            !(iss >> hours >> colon1 >> minutes >> colon2 >> seconds) ||    // check the input format with stringstream object
            colon1 != ':' || colon2 != ':' ||                               // check the colon 
            hours < 0 || hours > 23 ||                                      // check the hours                            
            minutes < 0 || minutes > 59 ||                                  // check the minutes
            seconds < 0 || seconds > 59                                     // check the seconds
        ) {
            cout << "Invalid input.\n";
        } else {
            break;
        }
    } while (
            !(iss >> hours >> colon1 >> minutes >> colon2 >> seconds) ||    // check the input format with stringstream object
            colon1 != ':' || colon2 != ':' ||                               // check the colon 
            hours < 0 || hours > 23 ||                                      // check the hours                            
            minutes < 0 || minutes > 59 ||                                  // check the minutes
            seconds < 0 || seconds > 59                                     // check the seconds
    );

    // calculate the elapsed time in seconds
    int timeElapsed = hours * 3600 + minutes * 60 + seconds;

    // display the elapsed time in seconds
    cout << "Elapsed time is: " << timeElapsed << " seconds." << endl;

    return 0;
}