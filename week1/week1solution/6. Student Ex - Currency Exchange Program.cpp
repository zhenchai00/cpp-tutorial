#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double xchangerate, dollar, RMB;
	int choice = 3;
	cout << "Enter the exchange rate from dollar to RMB : ";
	cin >> xchangerate;

	while (choice != 0 && choice != 1)
	{
		cout << "Enter 0 to convert dollars to RMB and 1 vice versa : ";
		cin >> choice;

		if (choice != 0 && choice != 1)
		{
			cout << "Invalid input! ";
			system("pause");
			system("cls");
			cout << "Enter the exchange rate from dollar to RMB : ";
			cin >> xchangerate;
		}
	}
	cout << fixed << setprecision(2);
	switch (choice )
	{
		case 0: cout << "Enter the dollars amount : $ ";
				cin >> dollar;
				RMB = dollar * xchangerate;
				cout << "$ " << dollar << " is " << RMB << " yuan.";
				break;

		case 1: cout << "Enter the RMB amount : ";
				cin >> RMB;
				dollar = RMB / xchangerate;
				cout << RMB << " yuan" << " is " <<  "$ " << dollar << ".";
	}

	return 0;
}