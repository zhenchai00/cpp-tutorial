#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int decision = 1; //asking whether you need to see other month or not
	int year = 1899, month= 1;
	while (decision == 1)
	{
		system("cls");

		do //input validation: year
		{
			cout << "Enter calendar's year (1900 - 2023):";
			cin >> year;

			if (cin.fail() || year < 1900 || year > 2023)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid year! Year should between 1900 to 2023!"<< endl << endl;
			}
		} while (year < 1900 || year > 2023);

		do //input validation : month
		{
			cout << "Enter calendar's month (1- 12) :";
			cin >> month;

			if (cin.fail() || month < 1 || month > 12)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid month! Month should between 1 to 12!" << endl << endl;
			}
		} while (month < 1 || month > 12);

		//start build the calendar.
		//1. find the days of the month you mentioned above
		int days = 0;

		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			days = 31;
		}
		else if (month == 2)
		{
			//1.1. calculate whether the year is leap year or not! if yes, 29 days, else 28 days
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

		//2. change the month value from int to become text value
		string month_word;
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

		//3. display the calendar header section
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

		//4. display calendar contents 
		//calculate the first date  actually started on which day during that mentioned month
		unsigned a, y, m;
		a = (14 - month) / 12;
		y = year - a;
		m = month + (12 * a) - 2;
		int startday = ((31 + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7); 

		//How the startday value indicate?
		//0 - friday //1 - saturday //2 - Sunday //3 - monday //4 - tuesday //5 - Wednesday //6 - Thursday
		switch (startday)
		{
		case 0: startday = 5; break;
		case 1: startday = 6; break;
		case 2: startday = 0; break;
		case 3: startday = 1; break;
		case 4: startday = 2; break;
		case 5: startday = 3; break;
		case 6: startday = 4; break;
		}

		int count = 0;	
		//print out the spaces before first day
		for (int i = 0; i< startday; i ++)//sunday - 0, monday =1; tuesday = 2; wednesday = 3; thursday = 4
		{
			cout << setw(11) << "\t";
			count++;
		}

		//start to print the first day until the last day
		for (int i = 1; i <= days; i++)
		{
			cout << setw(11) << i;
			count++;
			//to check whether we need to go to the next line or not
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
		cout << endl << "Do you still want to print other month calender or not? 1 - yes, 0 - No : ";
		cin >> decision;

	}
	return 0;
}