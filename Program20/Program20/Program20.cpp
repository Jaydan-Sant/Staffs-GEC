#include <iostream>
using namespace std;

int playerHealth = 1000;
int enemyHealth = 2000;
void attack(int choice);
bool playState(int enemyHP, int playerHP);
bool playing = true;

int main()
{
    int playerChoice;
    
    cout << "You have encountered an angry troll! What will you do?\n";
    

    while (playing == true)
    {
            cout << "1) Use your sword (300 damage). 2) Use magic (650 damage). 3) Use your axe (450 damage).\n";
            cin >> playerChoice;

            attack(playerChoice);
            continue;
    }
}

void attack(int choice)
{
    const int sword_damage = 300, magic_damage = 650, axe_damage = 450, troll_sword = 350, troll_magic = 50, troll_axe = 100;

    switch (choice)
    {
    case 1:
        enemyHealth = -sword_damage;
        playerHealth = -troll_sword;
        cout << "You slash the troll with your sword, dealt 300 damage!\n";
        cout << "The troll attacks viciously, you took 350 damage!\n";
        break;

    case 2:
        enemyHealth = -magic_damage;
        playerHealth = -troll_magic;
        cout << "You launch an arcane projectile at the troll, dealt 650 damage!\n";
        cout << "The troll was left dazed and faultered their attack, you took 50 damage!\n";
        break;
    
    case 3:
        enemyHealth = -axe_damage;
        playerHealth = -troll_axe;
        cout << "You deliver a crushing blow with your axe, dealt 450 damage!\n";
        cout << "The troll was crippled by your hit and retaliates weakly, you took 100 damage!\n";
        break;
    }
}

bool playState(int enemyHP, int playerHP)
{
    char play_again;
    if (enemyHealth <= 0)
    {
        cout << "The troll has been slain. You win!\n";
        cout << "Press Y to play again.\n";
        cin >> play_again;

        if (play_again == 'Y' || 'y')
        {
            enemyHealth = 2000;
            playerHealth = 1000;
            return true;
        }
        else
        {
            cout << "Goodbye!\n";
            return false;
        }
    }
    else
    {
        playing = true;
    }
    if (playerHealth <= 0)
    {
        cout << "The troll has defeated you. Game Over!\n";
        cout << "Press Y to play again.\n";
        cin >> play_again;

        if (play_again == 'Y' || 'y')
        {
            enemyHealth = 2000;
            playerHealth = 1000;
            playing = true;
        }
        else
        {
            cout << "Goodbye!\n";
            playing = false;
        }
    }
    else
    {
        playing = true;
    }

}
