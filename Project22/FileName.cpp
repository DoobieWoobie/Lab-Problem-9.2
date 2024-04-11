#include <iostream>
using namespace std;
bool duplicates = false;
bool adjacentduplicates = false;
bool decreasing = false;
bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);



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
	decreasing = isSortedDecreasing(array, arraynumber);
	adjacentduplicates = hasAdjacentDuplicates(array, arraynumber);
	duplicates = hasDuplicates(array, arraynumber);
	if (decreasing == true)
	{
		cout << "The data are decreasing" << endl;
	}
	else
	{
		cout << "The data are not decreasing" << endl;
	}
	if (adjacentduplicates == true)
	{
		cout << "There are adjacent duplicates" << endl;
	}
	else
	{
		cout << "There are no adjacent duplicates" << endl;
	}
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
			decreasing = true;
			return decreasing;
		}
		else
		{
			decreasing = false;
			return decreasing;
		}
	}
}
bool hasAdjacentDuplicates(int values[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (values[i] == values[i + 1])
		{
			adjacentduplicates = true;
			return adjacentduplicates;
		}	
	}return adjacentduplicates;
}

bool hasDuplicates(int values[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (values[j] == values[i] && i != j)
			{
				duplicates = true;
				return duplicates;
			}
		}
	}return duplicates;
}
//a