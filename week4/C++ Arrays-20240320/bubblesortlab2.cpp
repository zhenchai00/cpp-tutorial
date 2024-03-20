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
	int temp;
	bool swapresult;

	//step 2: sort process - bubble sort - best case = 1 * n = n; worst case = n*n = n^2
	auto start = high_resolution_clock::now();
	for (int round = 1; round <= size(dataset); round++) //best case= o(1) / worst = O(n)
	{
		swapresult = false;
		cout << "Round " << round << " : ";
		for (int colindex = 0; colindex < size(dataset) - 1; colindex++)//best case= o(n) / worst = O(n)
		{
			if (dataset[colindex] > dataset[colindex + 1])
			{
				temp = dataset[colindex];
				dataset[colindex] = dataset[colindex + 1];
				dataset[colindex + 1] = temp;
				swapresult = true;
			}
		}
		for (int i = 0; i < size(dataset); i++)
		{
			cout << dataset[i] << ", ";
		}
		cout << endl;
		if (swapresult == false)
		{
			break;
		}
	}
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	//step 3: display result and time execution
	for (int i = 0; i < size(dataset); i++)
	{
		cout << dataset[i] << ", ";
	}
	cout << endl << endl;
	cout << "Time execution for bubble sort in this dataset = " << duration.count() << " microseconds." << endl << endl;
	return 0;
}