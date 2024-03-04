#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int newGame = 1;
    do
    {
        system("cls");
        srand(time(NULL));
        int randomNum = (rand() % 100) + 1;
        int number = -1;
        int startValue = 1;
        int endValue = 100;

        while (number != randomNum)
        {
            system("cls");
            cout << "Guess Number Game Started Now!" << endl;
            cout << string(81, '-') << endl;
            cout << "Guess Number between " << startValue << " to " << endValue << endl;
            cout << "Your answer: ";
            cin >> number;

            while (cin.fail() || number < 1 || number > 100)
            {
                cout << "Invalid Input" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                system("pause");
                system("cls");
                cout << "Guess Number Game Started Now!" << endl;
                cout << string(81, '-') << endl;
                cout << "Guess Number between " << startValue << " to " << endValue << endl;
                cout << "Your answer: ";
                cin >> number;
            }

            if (number < randomNum)
            {
                startValue = number;
            }
            else
            {
                endValue = number;
            }
        }
        cout << endl
             << "Congratulations! You have guessed the number correctly!" << endl;
        cout << "Do you want to play again? (1 for Yes, 0 for No): ";
        cin >> newGame;
    } while (newGame != 0);
}