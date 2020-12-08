#include <iostream>
using namespace std;

int num1 = 0, numOfOdd = 0, oddTotal = 0, numOfEven = 0, evenTotal = 0;

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);
bool oddEven(int num1);

int main()
{
	int i;

	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter a number\n";
		cin >> num1;

		if (oddEven(num1) == true)
		{
			numOfOdd++;
			oddTotal = oddTotal + num1;
		}
		else
		{
			numOfEven++;
			evenTotal = evenTotal + num1;
		}
	}
	
	outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
}

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	cout << "There are " << numOfOdd << " odd numbers\n";
	cout << "The odd numbers add up to " << oddTotal << endl;
	cout << "There are " << numOfEven << " even numbers\n";
	cout << "The even numbers add up to " << evenTotal << endl;
}

bool oddEven(int num1)
{
	if ((num1 % 2) == 1)
		return true;
	else
		return false;
}