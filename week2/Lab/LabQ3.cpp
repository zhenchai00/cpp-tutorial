#include <iostream>
#include <string>

using namespace std;

int main2() {
    int smallNum = 1;
    int bigNum = 100;
    int num = rand() % 100 + 1;
    int guess;
    bool win = false;

    do {
        cout << "Guess Number Game Started Now!" << endl;
        cout << string(81, '-') << endl;
        cout << "Guess Number between" << smallNum << " to " << bigNum << endl;

        cin >> guess;
        if (guess > num && guess > smallNum) {
            smallNum = guess;
        }
        else if (guess < num && guess < bigNum ) {
            bigNum = guess;
        }
        system("cls");
    } while (num != guess);

    cout << "Here ....";

    return 0;
}