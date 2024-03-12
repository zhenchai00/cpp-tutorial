#include <iostream>
using namespace std;

void RecursiveReverseDisplayNumber(int number1, int number2)//5 10
{
	if (number2 < number1)
	{
		return;
	}
	cout << number2;

	if (number1 != number2)
		cout << " + ";
	else
		cout << " = ";

	RecursiveReverseDisplayNumber(number1, number2-1);
}
int RecursiveCalSum(int number1, int number2)
{
	if (number1 > number2)
		return 0;

	return number1 + RecursiveCalSum(number1 + 1, number2);
}
int main()
{
	int startvalue, endvalue;
	cout << "Enter a start value: ";
	cin >> startvalue; //5
	cout << "Enter a end value: ";
	cin >> endvalue; //8
	cout << endl;
	//e.g display same as figure 3: " 8 + 7 + 6 + 5 "
	RecursiveReverseDisplayNumber(startvalue, endvalue);
	//e.g display same as figure 3: " = 26 "
	cout << RecursiveCalSum(startvalue, endvalue) << endl;
	return 0;
}
