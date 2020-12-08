#include <iostream>
using namespace std;

int main()
{
	int Numbers[10];	
	int input;
	int smallest{};

	for (int i = 0; i < 10; i++)
	{
		cout << "Please input a number\n";
		cin >> input;

		Numbers[i] = input;
		
		if (input == 1)
		{
			Numbers[i] == smallest;
			continue;
		}
		else
			continue;
	}

	
	cout << "Your numbers are: " << endl;
	
	for (int ii = 0; ii < 10; ii++)
	{
		cout << Numbers[ii] << endl;
	}
	cout << "The smallest number is 1, its position in the array is: " << smallest << endl;
}

