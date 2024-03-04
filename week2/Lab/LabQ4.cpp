#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{
	//step 1: initialize the variables for this calendar
	//step 2: input validation for both year and month
	//step 2.1: check the year input first
	//step 2.1: check the month input first
	//step 3: start build the calendar.
	//step 3.1: find the days of the month you mentioned above.
	//step 3.2: change the month value from int to become text value
	//step 4: display the result
	//step 4.1: display calendar header section
	//step 4.2：display calendar contents
	//step 4.2.1：where is the first day drop in the calendar
	//step 4.2.2：find how many space before drop the first day to the calendar 
	//step 4.2.3：put all the numbers in the calendar


	int decision = 1, month = -1, year = 1899;	// input
	int days = 0;			// output
	string month_word = "";	// output

	do {
		cout << "Enter calender's year: ";
		cin >> year;
		if (cin.fail() || year < 1900 || year > 2025) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid year! Year should between 1900 to 2023!" << endl << endl;
			system("pause");
			system("cls");
		}

	} while (year < 1900 || year > 2025);

	do {
		cout << "Enter calender's month: ";
		cin >> month;
		if (cin.fail() || month < 1 || month > 12) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid month! Month should between 1 to 12!" << endl << endl;
			system("pause");
			system("cls");
			cout << "Enter calender's year: " << year << endl;
		}

	} while (month < 1 || month > 12);

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		days = 31;
	}
	else if (month == 2) {
		if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0) {
			days = 29;
		}
		else {
			days = 28;
		}
	}
	else {
		days = 30;
	}

	switch (month)
	{
	case 1: 
		month_word = "January";
		break;
	case 2: 
		month_word = "February";
		break;
	case 3: 
		month_word = "March";
		break;
	case 4: 
		month_word = "April";
		break;
	case 5: 
		month_word = "May";
		break;
	case 6: 
		month_word = "June";
		break;
	case 7: 
		month_word = "July";
		break;
	case 8: 
		month_word = "August";
		break;
	case 9: 
		month_word = "September";
		break;
	case 10: 
		month_word = "October";
		break;
	case 11: 
		month_word = "November";
		break;
	case 12: 
		month_word = "December";
		break;
	default:
		break;
	}

	cout << "\t\t\t Calendar Title : " << month_word << " - " << year << endl;
	cout << string(106, '-') << endl;
	cout << setw(11) << "Sunday\t";
	cout << setw(11) << "Monday\t";
	cout << setw(11) << "Tuesday\t";
	cout << setw(11) << "Wednesday\t";
	cout << setw(11) << "Thursday\t";
	cout << setw(11) << "Friday\t";
	cout << setw(11) << "Saturday\t";
	cout << endl << string(106, '-') << endl;

	unsigned a, y, m;
	a = (14 - month) / 12;
	y = year - a;
	m = month + (12 * a) - 2;
	int startDay = ((31 + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7);

	switch (startDay)
	{
	case 0: 
		startDay = 5;
		break;
	case 1: 
		startDay = 6;
		break;
	case 2: 
		startDay = 0;
		break;
	case 3: 
		startDay = 1;
		break;
	case 4: 
		startDay = 2;
		break;
	case 5: 
		startDay = 3;
		break;
	case 6: 
		startDay = 4;
		break;
	}

	int count = 0;
	for (int i = 0; i < startDay; i++)
	{
		cout << setw(11) << "\t";
		count++;
	}

	for (int i = 1; i <= days; i++) {
		cout << setw(11) << i;
		count++;
		if (count % 7 == 0) {
			cout << endl;
		}
		else {
			cout << "\t";
		}
	}

	cout << endl << string(106, '-') << endl;
	//cout << "Do you want to see other month? 1 = Yes, others = No: 0";
	
	return 0;
}
