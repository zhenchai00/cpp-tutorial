#include <iostream>
#include <string>
using namespace std;

int main() {

	//step 1: initialize the variables.
	int counter = 1;
	char weather; 
	string month; 
	int year, days;
	int hot_days = 0, rainy_days = 0, cloudy_days = 0;

	//step 2: determine the final days in the given month by user.
	cout << "Enter Your Month (e.g. August 2019): ";
	cin >> month >> year;
	//2.1. convert the letter in the string.
	for (int i = 0;month[i] != '\0';i++)
	{
		month[i] = toupper(month[i]);
	}
	//2.2. compare the month and find the correct days
	if ((month.compare("JANUARY") == 0) || (month.compare("MARCH") == 0) || 
		(month.compare("MAY") == 0) || (month.compare("JULY") == 0)
		|| (month.compare("AUGUST") == 0) || (month.compare("OCTOBER") == 0) || 
		(month.compare("DECEMBER") == 0))
		days = 31;
	else if ((month.compare("FEBRUARY") == 0) && (year % 4 == 0))
		days = 29;
	else if ((month.compare("FEBRUARY") == 0) && (year % 4 != 0))
		days = 28;
	else
		days = 30;

	//step 3: determine how many rainy day, sunny day and cloudy day in that month
	while (counter <= days) 
	{
		cout << "Day " << counter << " : Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (\"E\" to end): ";
		cin >> weather;
		weather = toupper(weather);
		if (weather == 'H')
			hot_days++;
		else if (weather == 'R')
			rainy_days++;
		else if (weather == 'C')
			cloudy_days++;
		else
			break;
		counter++;
	}

	//last step: display the result
	cout << "Number of hot days this month: " << hot_days << endl;
	cout << "Number of rainy days this month: " << rainy_days << endl;
	cout << "Number of cloud days this month: " << cloudy_days << endl;
	system("PAUSE");

	return 0;
}

