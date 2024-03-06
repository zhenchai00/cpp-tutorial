#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    int newgame = 1;
    do //restart game
    {
        system("cls");
        srand(time(NULL)); //time
        int randomNum = (rand() % 100) + 1;
        int number = -1;
        int startvalue = 1;
        int endvalue = 100;

        while (number != randomNum) //game content
        {
            system("cls");
            cout << "Guess Number Game Started Now!" << endl;
            cout << string(50, '-') << endl;
            cout << "Guess Number between " << startvalue << " to " << endvalue << endl;
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
                cout << string(50, '-') << endl;
                cout << "Guess Number between " << startvalue << " to " << endvalue << endl;
                cout << "Your answer: ";
                cin >> number;
            }

            if (number < randomNum)
            {
                startvalue = number;
            }
            else
            {
                endvalue = number;
            }
        }
        cout << endl << "Congratulation! You won!" << endl;
        cout << "Do you still want to start a new game? 0 - No, 1 - Yes : ";
        cin >> newgame;
    } while (newgame != 0);

    return 0;
}
