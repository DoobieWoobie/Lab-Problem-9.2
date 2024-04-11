#include <iostream>
using namespace std;
bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);
bool duplicates = false;

int main()
{
	const int arraynumber = 6;
	int array[arraynumber];
	for (int i = 0; i < arraynumber; i++)
	{
		cout << "Enter integer #" << i+1 << ": ";
		cin >> array[i];
	}
	isSortedIncreasing(array, arraynumber);
	isSortedDecreasing(array, arraynumber);
	hasAdjacentDuplicates(array, arraynumber);
	hasDuplicates(array, arraynumber);
	if (duplicates == true)
	{
		cout << "There are duplicates" << endl;
	}
	else
	{
		cout << "There are no duplicates" << endl;
	}
}
bool isSortedIncreasing(int values[], int size)
{
	for (int i = 0; i < size; i++)
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
	for (int i = 0; i < size; i++)
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
	for (int i = 0; i < size; i++)
	{
		if (values[i] == values[i + 1])
		{
			cout << "The data has adjacent duplicates" << endl;
		}
		else
		if (values[i + 1] == values[i + 2])
		{
			cout << "The data has adjacent duplicates" << endl;
		}
		else
		if (values[i + 2] == values[i + 3])
		{
			cout << "The data has adjacent duplicates" << endl;
			return values[i];
		}
		else
		if (values[i + 3] == values[i + 4])
		{
			cout << "The data has adjacent duplicates" << endl;
			return values[i];
		}
		else
		if (values[i + 4] == values[i + 5])
		{
			cout << "The data has adjacent duplicates" << endl;
			return values[i];
		}
		else
		{
			cout << "The data has no adjacent duplicates" << endl;
			return values[i];
		}
	}
}
bool hasDuplicates(int values[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 1; j < size; j++)
		{
			if (values[j] == values[i])
			{
				duplicates == true;
			}
			else
			{
				duplicates == false;
			}
		}
	}return duplicates;
}