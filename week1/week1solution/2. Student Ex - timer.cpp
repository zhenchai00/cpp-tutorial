//task 1: calculate the timer result
//task 2: improve to have the input validation
#include<iostream>
#include<limits>
using namespace std;

//int main()
//{
//	//00:01:01
//	int hour, minutes, seconds;
//	char separator1, separator2;
//
//	cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
//	cin >> hour >> separator1 >> minutes >> separator2 >> seconds;
//
//	while (separator1 != ':' || separator2 != ':' || cin.fail() || (hour < 0 ) ||
//		(minutes < 0 || minutes >60) || (seconds < 0 || seconds >60))
//	{
//		cin.clear(); //remove the input operation
//		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //remove content
//		cout << "Invalid input!" << endl;
//		cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
//		cin >> hour >> separator1 >> minutes >> separator2 >> seconds;
//	}
//
//	int ElapsedTime = (hour * 60 * 60) + (minutes * 60) + seconds;
//	cout << "Elapsed time is: " << ElapsedTime << " seconds." << endl;
//	return 0;
//}