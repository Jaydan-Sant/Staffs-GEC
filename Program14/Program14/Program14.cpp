#include <iostream>
using namespace std;

int main()
{
    int num1{};
    int num2{};

    cout << "Please choose a number\n";
    cin >> num1;

    cout << "Please choose a second number\n";
    cin >> num2;

    int total = num1 + num2;
    int mean = (num1 + num2 + total) / 3;

    cout << "Your total is: " << total << endl;
    cout << "The mean of your numbers is: " << mean << endl;

    while (num1 and num2 > 0)
    {
        int num3;
        int num4;

        cout << "Please choose another number" << endl;
        cin >> num3;
        if (num3 == 0)
            break;
        else
        {
            cout << "Please choose an additional number" << endl;
            cin >> num4;
            if (num4 == 0)
                break;
            else
            {
                int total2 = num3 + num4 + total;
                int mean2 = (num3 + num4 + total2) / 3;

                cout << "Your total is: " << total2 << endl;
                cout << "The mean of your numbers is: " << mean << endl;
            }
        }       
    }
  
}

