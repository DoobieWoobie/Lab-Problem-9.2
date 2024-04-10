#include <iostream>
using namespace std;
bool isSortedIncreasing(int values[], int size)
{
	for(int i = 0; i < 5; i++)
	{
		if (values[i] < values[i + 1])
		{
			cout << "The data are increasing" << endl;
			return values[i];
		}
		else
		{
			cout << "The data are not increasing" << endl;
			return values[i];
		}
	}
}
bool isSortedDecreasing(int values[], int size)
{
	for (int i = 0; i < 5; i++)
	{
		if (values[i] > values[i + 1] && values[i + 1] > values[i + 2])
		{
			cout << "The data are decreasing" << endl;
			return values[i];
		}
		else
		{
			cout << "The data are not decreasing" << endl;
			return values[i];
		}
	}
}
bool hasAdjacentDuplicates(int values[], int size)
{
	for (int i = 0; i < 5; i++)
	{
		if (values[i] == values[i+1])
		{
			cout << "The data has adjacent duplicates" << endl;
			return values[i];
		}
		else
			if (values[i+1] == values[i + 2])
			{
				cout << "The data has adjacent duplicates" << endl;
				return values[i];
			}
		else
			if (values[i+2] == values[i + 3])
			{
				cout << "The data has adjacent duplicates" << endl;
				return values[i];
			}
		else
			if (values[i+3] == values[i + 4])
			{
				cout << "The data has adjacent duplicates" << endl;
				return values[i];
			}
		else
			if (values[i+4] == values[i + 5])
			{
				cout << "The data has adjacent duplicates" << endl;
				return values[i];
			}
		{
			cout << "The data has no adjacent duplicates" << endl;
			return values[i];
		}
	}
}
bool hasDuplicates(int values[], int size);

int main()
{
	const int arraynumber = 6;
	int array[arraynumber];
	int input;
	cout << "Enter integer #1: ";
	cin >> array[0];
	cout << "Enter integer #2: ";
	cin >> array[1];
	cout << "Enter integer #3: ";
	cin >> array[2];
	cout << "Enter integer #4: ";
	cin >> array[3];
	cout << "Enter integer #5: ";
	cin >> array[4];
	cout << "Enter integer #6: ";
	cin >> array[5];
	isSortedIncreasing(array, arraynumber);
	isSortedDecreasing(array, arraynumber);
	hasAdjacentDuplicates(array, arraynumber);
}