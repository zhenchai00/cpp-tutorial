#include <iostream>
#include <limits>
using namespace std;

int monthValidation(int month)
{
	while (cin.fail() || month > 12 || month < 1)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "wrong input!" << endl;
		system("pause");
		system("cls");
		cout << "Enter Your Month (e.g. 08-2023):";
		cin >> month;
	}
	return month;
}
char separatorValidate(int month, char separator)
{
	while (cin.fail() || separator != '-')
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "wrong input!" << endl;
		system("pause");
		system("cls");
		cout << "Enter Your Month (e.g. 08-2023):" << month;
		cin >> separator;
	}
	return separator;
}
int yearValidation(int month, char separator, int year)
{
	while (cin.fail() || year != 2023)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "wrong input!" << endl;
		system("pause");
		system("cls");
		cout << "Enter Your Month (e.g. 08-2023):" << month << separator;
		cin >> year;
	}
	return year;
}
int FindDaysInMonth(int month, int year)
{
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		return 30;
	}
	else if (month == 2)
	{
		if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		{
			return 29;
		}
		return 28;
	}
	else
	{
		return 31;
	}
}
void displayWeatherReport(int rainyDays, int sunnyDays, int cloudyDays, int month, int year)
{
	cout << string(50, '=');
	cout << endl << "Analysis of month : " << month << " - " << year << endl;
	cout << string(50, '=') << endl;
	cout << "Number of Sunny Day: " << sunnyDays << endl;
	cout << "Number of Rainy Day: " << rainyDays << endl;
	cout << "Number of Cloudy Day: " << cloudyDays << endl;
	cout << endl << endl;

	cout << "| Sunny Days | ";
	for (int i = 1; i <= sunnyDays; i++)
	{
		cout << " * ";
	}
	cout << endl << "| Rainy Days | ";
	for (int i = 1; i <= rainyDays; i++)
	{
		cout << " * ";
	}
	cout << endl << "| Cloudy Days | ";
	for (int i = 1; i <= cloudyDays; i++)
	{
		cout << " * ";
	}
	cout << endl << endl;
}
void readWeather(int days, int month, int year)
{
	char daytype;  int rainyDays = 0, sunnyDays = 0, cloudyDays = 0;
	for (int i = 1; i <= days; i++)
	{
		cout << "Day " << i << " ( H - Hot Day, R - Rainy Day, C - Cloudy Day ) : ";
		cin >> daytype;

		switch (daytype)
		{
		case 'H': rainyDays++; break;
		case 'R': sunnyDays++; break;
		case 'C': cloudyDays++; break;
		default:
			cout << "Invalid input! Please re-enter again for Day " << i << "!" << endl;
			i--;
		}
	}
	displayWeatherReport(rainyDays, sunnyDays, cloudyDays, month, year);
}

int main()
{
	int year, days, month;
	char separator, reporttype;

	cout << "Enter Your Month (e.g. 08-2023):";
	cin >> month;
	month = monthValidation(month);
	cin >> separator;
	separator = separatorValidate(month, separator);
	cin >> year;
	year = yearValidation(month, separator, year);
	days = FindDaysInMonth(month, year);

	readWeather(days, month, year);
	return 0;
}