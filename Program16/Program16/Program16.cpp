#include <iostream>
using namespace std;

int main()
{
    int damage{};
    int playerLife = 100;
    
    

    cout << "You have " << playerLife << " HP" << endl;
    
    for (int i = 1; i <= 10; i++)
    {
        cout << "Question " << i << ": How much damage should I deal?\n";
        cin >> damage;
        int newplayerLife = playerLife - damage;
        playerLife = newplayerLife;
        if (playerLife <= 0)
        {
            cout << "Early end. Player Died!\n";
            return 0;
        }
        else
        {
            cout << "You have " << playerLife << " HP\n";
            continue;
        }
    }
    cout << "All questions asked. Player survived!\n";
}

