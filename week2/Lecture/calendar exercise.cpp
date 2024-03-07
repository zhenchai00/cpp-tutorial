#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{
	//step 1: initialize the variables for this calendar
	//input 
	int month, year, decision;
	//output
	int days; string month_word;

	//step 2: input validation for both year and month.
	cout << "Enter calendar's year = ";
	cin >> year;

	while (cin.fail() || year < 1899 || year > 2030)
	{
		cout << "Invalid input! Year should between 1990 - 2030!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("pause");
		system("cls");
		cout << "Enter calendar's year = ";
		cin >> year;
	}

	cout << "Enter calendar's month = ";
	cin >> month;

	while (cin.fail() || month < 1 || month > 12)
	{
		cout << "Invalid input! Month should between 1 - 12!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("pause");
		system("cls");
		cout << "Enter calendar's year = " << year << endl;
		cout << "Enter calendar's month = ";
		cin >> month;
	}

	//step 3: start build the calendar.
	//step 3.1. find the days of the month you mentioned above.
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		days = 31;
	}
	else if (month == 2)
	{
		//is it leap year or not
		if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		{
			days = 29;
		}
		else
		{
			days = 28;
		}
	}
	else
	{
		days = 30;
	}
	//step 3.2. change the month value from int to become text value
	switch (month)
	{
	case 1: month_word = "January"; break;
	case 2: month_word = "February"; break;
	case 3: month_word = "March"; break;
	case 4: month_word = "April"; break;
	case 5: month_word = "May"; break;
	case 6: month_word = "June"; break;
	case 7: month_word = "July"; break;
	case 8: month_word = "August"; break;
	case 9: month_word = "September"; break;
	case 10: month_word = "October"; break;
	case 11: month_word = "November"; break;
	case 12: month_word = "December"; break;
	}
	//step 4: display the result
	//step 4.1. display the calendar header section
	cout << endl << "\t\t\tCalendar Title : " << month_word << " " << year << endl;
	cout << string(106, '-') << endl;
	cout << setw(11) << "Sunday\t";
	cout << setw(11) << "Monday\t";
	cout << setw(11) << "Tuesday\t";
	cout << setw(11) << "Wednesday\t";
	cout << setw(11) << "Thursday\t";
	cout << setw(11) << "Friday\t";
	cout << setw(11) << "Saturday\t";
	cout << endl << string(106, '-') << endl;

	//step 4.2. display calendar contents
	//4.2.1 find the first day location in the calendar
	unsigned a, y, m;
	a = (14 - month) / 12;
	y = year - a;
	m = month + (12 * a) - 2;
	int startday = ((31 + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7);

	switch (startday) //reset the start day location in accurate day
	{
	case 0: startday = 5; break;
	case 1: startday = 6; break;
	case 2: startday = 0; break;
	case 3: startday = 1; break;
	case 4: startday = 2; break;
	case 5: startday = 3; break;
	case 6: startday = 4; break;
	}

	//4.2.2 is the time to display all days in the calendar
	int count = 0;
	for (int i = 0; i < startday; i++)
	{
		cout << setw(11) << "\t";
		count++;
	}

	for (int i = 1; i <= days; i++)
	{
		cout << setw(11) << i;
		count++;
		if (count % 7 == 0)
		{
			cout << endl;
		}
		else
		{
			cout << "\t";
		}
	}
	cout << endl << string(106, '-') << endl;
	return 0;
}
