#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    string month = "";
    int days = -1, year = 1899;
    cout << "Enter Your Month (e.g. August 2019): ";
    cin >> month >> year;

    for (int i = 0; month[i] != '\0'; i++)
    {
        month[i] = tolower(month[i]);
    }

    if (month == "january" || month == "march" || month == "may" || month == "july" || month == "august" || month == "october" || month == "december")
        days = 31;
    else if (month == "february" && year % 4 == 0)
        days = 29;
    else if (month == "february" && year % 4 != 0)
        days = 28;
    else
        days = 30;

    int hot_days = 0, rainy_days = 0, cloudy_days = 0;
    int counter = 1;
    char weather;

    while (counter <= days) {
        cout << "Day " << counter << " : Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (\"E\" to end): ";
        cin >> weather;
        weather = toupper(weather);
        if (weather == 'H')
            hot_days++;
        else if (weather == 'R')
            rainy_days++;
        else if (weather == 'C')
            cloudy_days++;
        else
            break;

        counter++;
    }

    cout << "Number of hot days this month: " << hot_days << endl;
    cout << "Number of rainy days this month: " << rainy_days << endl;
    cout << "Number of cloud days this month: " << cloudy_days << endl;
    system("pause");
    return 0;
}