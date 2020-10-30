#include <iostream>


using namespace std;
int main()
{
    int cost;
	cost = 13000;
	enum CarMake
	{
		FORD = 1,
		FIAT,
		TESLA,
		VW,
		BMW,
		ASTONMARTIN,
		HONDA,
		NISSAN,
		TOYOTA,
		AUDI,
		JAGUAR,
		DODGE
	   };
	int CarMake = HONDA;
	cout << "The cost of my car is: " << cost << endl;
	cout << "My car id is: " << HONDA << endl;
	
	return 0;
}

