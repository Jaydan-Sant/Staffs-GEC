#include <iostream>
using namespace std;

int main()
{
    int player_input;
    cout << "Please choose an option: 1. Sunny 2. Cloudy 3. Raining 4. Exit" << endl;
    cin >> player_input;

    switch (player_input)
    {
    case 1:
        cout << "Don't forget sunscreen!\n";
    break;
    
    case 2:
        cout << "Watch out for rain!\n";
    break;
    
    case 3:
        cout << "Be sure to pack an umbrella!\n";
    break;
    
    case 4:
        cout << "Enjoy your day!\n";
    break;
    }

    return 0;
}

