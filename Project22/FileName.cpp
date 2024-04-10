#include <iostream>
using namespace std;
bool isSortedIncreasing(int values[], int size)
{
	for(int i = 0; i < 4; i++)
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
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);

int main()
{
	const int arraynumber = 5;
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
	isSortedIncreasing(array, arraynumber);
}