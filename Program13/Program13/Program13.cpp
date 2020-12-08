#include <iostream>
using namespace std;

int main()
{
	char userStatus;
	int gameChoice;
	cout << "Please tell me your status with 's' for student, 't' for teacher or 'o' for other\n";
	cin >> userStatus;


	if (userStatus = 's' || 't')
	{
		cout << "Which game would you like, 1 or 2?\n";
		cin >> gameChoice;
		if (gameChoice == 1)
			cout << "You can get a 20% discount!\n";
		else if (gameChoice == 2)
			cout << "You can get a 10% discount!\n";
	}
	else
		cout << "You are not entitled to a discount\n";
	return 0;
}

