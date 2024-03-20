#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
	int dataset[] = { 5, 1, 1, 3, 66, 3, 2, 77, 9, 118, 33, 4, 5, 6, 88, 22,
	14, 17, 45, 34, 6, 88, 3, 2, 1, 66, 48, 49, 33, 37, 44, 77, 80,
	30, 31, 3, 10, 6, 9, 88 };

	//step 1: declare variables
	int key;
	int currentemptycolindex;

	//step 2: sort process - insertion sort //best case = N*1= N; worst case = N*N = N^2
	auto start = high_resolution_clock::now();
	for (int round = 1; round <= size(dataset) - 1; round++) //best case = O(N), worst case = O(N)
	{
		currentemptycolindex = round;
		key = dataset[currentemptycolindex];

		cout << "Round " << round << " : ";
		while (currentemptycolindex > 0 && dataset[currentemptycolindex - 1] > key) //best case = O(1), worst case = O(N)
		{
			dataset[currentemptycolindex] = dataset[currentemptycolindex - 1];
			currentemptycolindex--;
		}
		for (int i = 0; i < size(dataset); i++)
		{
			cout << dataset[i] << ", ";
		}
		cout << endl;
		dataset[currentemptycolindex] = key;
	}
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);

	//step 3: display result and time execution
	for (int i = 0; i < size(dataset); i++)
	{
		cout << dataset[i] << ", ";
	}
	cout << endl << endl;
	cout << "Time execution for insertion sort in this dataset: " << duration.count() << " microseconds. " << endl;
 	return 0;
}