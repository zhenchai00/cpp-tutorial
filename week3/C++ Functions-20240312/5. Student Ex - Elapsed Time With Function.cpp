#include<iostream>
#include<limits>
using namespace std;

bool checkinputvalidation(int hour, int minutes, int seconds, char separator1, char separator2)
{
	if (separator1 != ':' || separator2 != ':' || cin.fail() || (hour < 0)
		|| (minutes < 0 || minutes >= 60) || (seconds < 0 || seconds >= 60))
	{
		cin.clear(); //remove the input operation
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignore the max content in buffer
		return true;
	}
	return false;
}
int calculateElapsedTime(int hour, int minutes, int seconds)
{
	return (hour * 60 * 60) + (minutes * 60) + seconds;
}

int main()
{
	//00:01:01
	int hour, minutes, seconds;
	char separator1, separator2;

	cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
	cin >> hour >> separator1 >> minutes >> separator2 >> seconds;

	while (checkinputvalidation(hour, minutes, seconds, separator1, separator2))
	{
		cout << "Invalid input!" << endl;
		cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
		cin >> hour >> separator1 >> minutes >> separator2 >> seconds;
	}

	cout << "Elapsed time is: " << calculateElapsedTime(hour, minutes, seconds) << " seconds." << endl;
	return 0;
}
