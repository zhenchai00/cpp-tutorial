#include <iostream>
using namespace std;
#define MAXSIZE 10

//use the reference parameter (int array1[])
//(no need return you can directly get back the thing in main function)
void bubblesort(int array1[], int size)
{
	for (int round = 1; round <= size; round++) //best case= o(1) / worst = O(n)
	{
		bool swapresult = false;
		int temp = 0;
		for (int colindex = 0; colindex < size - 1; colindex++)//best case= o(n) / worst = O(n)
		{
			if (array1[colindex] > array1[colindex + 1])
			{
				temp = array1[colindex];
				array1[colindex] = array1[colindex + 1];
				array1[colindex + 1] = temp;
				swapresult = true;
			}
		}
		if (swapresult == false)
		{
			break;
		}
	}
}

int binarysearch(int array1[], int size, int searchvalue)
{
	int lastIndex = size - 1; //upper bound
	int firstIndex = 0; //lower bound
	while (firstIndex <= lastIndex)
	{
		int midIndex = (firstIndex + lastIndex) / 2;

		if (array1[midIndex] == searchvalue)
		{
			return midIndex; //found, return location as proof in main
		}

		if (array1[midIndex] < searchvalue)
		{
			firstIndex = midIndex + 1;
		}
		else
		{
			lastIndex = midIndex - 1;
		}
	}
	return -1; //not found
}

int main()
{
	int array1[MAXSIZE];
	for (int i = 0; i < size(array1); i++)
	{
		cout << "Enter value " << i + 1 << ": ";
		cin >> array1[i];
		for (int j = 0; j < i; j++)
		{
			while (array1[j] == array1[i])
			{
				cout << "Value already in the list! Please choose other value!" << endl;
				cout << "Enter value " << i + 1 << " : ";
				cin >> array1[i];
				j = 0;
			}
		}
	}
	for (int i = 0; i < size(array1); i++)
	{
		cout << array1[i] << ", ";
	}

	cout << endl << "After sorted: " << endl;
	cout << string(100, '-') << endl;
	bubblesort(array1, size(array1));
	for (int i = 0; i < size(array1); i++)
	{
		cout << array1[i] << ", ";
	}
	cout << endl << endl;

	cout << "Enter a search value: ";
	int searchvalue;
	cin >> searchvalue;

	int result = binarysearch(array1, size(array1), searchvalue);

	if (result >= 0)
	{
		cout << searchvalue << " is appear in the index number of " << result << " in the list!" << endl;
	}
	else
	{
		cout << searchvalue << " is NOT appear in the list!" << endl;
	}
	return 0;
}
