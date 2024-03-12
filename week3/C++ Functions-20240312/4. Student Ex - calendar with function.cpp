//#include <iostream>
//#include <iomanip>
//using namespace std;
//
////function prototyping
//int monthInputValidation(int month, int year)
//{
//	while (cin.fail() || month < 1 || month > 12)
//	{
//		cin.clear();
//		cin.ignore(numeric_limits<streamsize>::max(), '\n');
//		cout << "Invalid input!" << endl;
//		system("pause");
//		system("cls");
//		cout << "Enter calendar's year: " << year << endl;
//		cout << "Enter calendar's month: ";
//		cin >> month;
//	}
//	return month;
//}
//int yearInputValidation(int year)
//{
//	while (cin.fail() || year < 1900 || year > 2050)
//	{
//		cin.clear();
//		cin.ignore(numeric_limits<streamsize>::max(), '\n');
//		cout << "Invalid input!" << endl;
//		system("pause");
//		system("cls");
//		cout << "Enter calendar's year: ";
//		cin >> year;
//	}
//	return year;
//}
//bool isLeapYear(int year)
//{
//	if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
//		return true;
//
//	return false;
//}
//int findDaysInMonth(int month, int year)
//{
//	if (month == 4 || month == 6 || month == 9 || month == 11)
//	{
//		return 30;
//	}
//	else if (month == 2)
//	{
//		if (isLeapYear(year))
//		{
//			return 29;
//		}
//		return 28;
//	}
//	else
//	{
//		return 31;
//	}
//}
//int findFirstDaylocation(int month, int year)
//{
//	unsigned a, y, m;
//	a = (14 - month) / 12;
//	y = year - a;
//	m = month + (12 * a) - 2;
//	return (((31 + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) + 5) % 7);
//}
//string ChangeNameForMonth(int month)
//{
//	string monthWord;
//	switch (month)
//	{
//	case 1: monthWord = "January"; break;
//	case 2: monthWord = "February"; break;
//	case 3: monthWord = "March"; break;
//	case 4: monthWord = "April"; break;
//	case 5: monthWord = "May"; break;
//	case 6: monthWord = "June"; break;
//	case 7: monthWord = "July"; break;
//	case 8: monthWord = "August"; break;
//	case 9: monthWord = "September"; break;
//	case 10: monthWord = "October"; break;
//	case 11: monthWord = "November"; break;
//	case 12: monthWord = "December"; break;
//	}
//	return monthWord;
//}
//void displayCalendar(string monthWord, int year, int days, int startday)
//{
//	//heading
//	cout << endl << "\t\t\tCalendar Title : " << monthWord << " - " << year << endl;
//	cout << string(112, '-') << endl;
//	cout << setw(11) << " Sunday\t" << setw(11) << "Monday\t" << setw(11) << "Tuesday\t";
//	cout << setw(11) << "Wednesday\t" << setw(11) << "Thursday\t" << setw(11) << "Friday\t";
//	cout << setw(11) << " Saturday\t";
//	cout << endl << string(112, '-') << endl;
//	//body
//	int countday = 0;
//
//	for (int i = 0; i < startday; i++)
//	{
//		cout << setw(11) << "\t";
//		countday++;
//	}
//
//	for (int i = 1; i <= days; i++)
//	{
//		cout << setw(11) << i << "\t";
//		countday++;
//
//		if (countday % 7 == 0)
//		{
//			cout << endl;
//		}
//	}
//	cout << endl << string(112, '=') << endl;
//}
//
//int main()
//{
//	//step 1: declare the required variables
//	int year, month, days;
//	string monthWord;
//
//	//step 2: enter year & month, and check input validation
//	cout << "Enter calendar's year: ";
//	cin >> year;
//	year = yearInputValidation(year);
//
//	cout << "Enter calendar's month: ";
//	cin >> month;
//	month = monthInputValidation(month, year);
//
//	//Step 3: process
//	days = findDaysInMonth(month, year);
//	monthWord = ChangeNameForMonth(month);
//	int startday = findFirstDaylocation(month, year);
//
//	//step 4: display Calendar content
//	displayCalendar(monthWord, year, days, startday);
//	return 0;
//}