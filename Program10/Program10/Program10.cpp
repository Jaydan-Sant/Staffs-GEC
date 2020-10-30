#include <iostream>
using namespace std;

int main()
{
	int Haribo = 40;
	int Students = 14;
	int Share = Haribo / Students;
	int Leftover = Haribo - (Share * Students);

	cout << "Each student gets " << Share << " Haribos." << endl;
	cout << "There are " << Leftover << " Haribos leftover." << endl;

	return 0;

}

