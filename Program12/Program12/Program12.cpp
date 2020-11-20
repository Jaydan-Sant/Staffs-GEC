#include <iostream>
using namespace std;

int main()
{
	int rain = 1;
	int snow = 2;
	int playerInput;
	int temperature;
	
	cout << "Is it raining (1) or snowing (2)?" << endl;
	cin >> playerInput;

	switch (playerInput)
	{
	case 1:
		cout << "It is raining. What is the current temperature (in Celsius)?\n";
		break;
	case 2:
		cout << "It is snowing. What is the current temperature (in Celsius)?\n";
		break;
	default:
		cout << "Have a nice day!\n";
		return 0;
		break;
	}
	cin >> temperature;

	if (playerInput == 1)
	{
		if (temperature > 15)
			cout << "Wear a light raincoat\n";
		else if(temperature < 16)
			cout << "Wear a thick coat\n";
	}
	
	else if (playerInput == 2)
	{
		if (temperature > 5)
			cout << "Wear something warm\n";
		else if (temperature > 0)
			cout << "Wrap up well\n";
		else if (temperature < 1)
			cout << "Stay at home\n";
	}
	return 0;
}

