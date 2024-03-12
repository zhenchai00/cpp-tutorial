#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

int monthValidation(int month) {
    if (month < 0 || month > 12) {
        return 0;
    }
    return month;
}

char separatorValidate(int month, char separator) {
    if (separator != '-') return '-';
    return separator;
}

int yearValidation(int month, char separator, int year) {
    if (year < 1900 || year > 2025) {
        return 0;
    } 
    return year;
}

int FindDaysInMonth(int month, int year) {
    int days = 0;
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month == 2) {
        if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0) {
            days = 29;
        }
        else {
            days = 28;
        }
    } else {
        days = 31;
    }
    return days;
}

#include <string>

void displayWeatherReport(int rainyDays, int sunnyDays, int cloudyDays, int month, int year) {
    cout << string(81, '=') << endl;
    cout << "Analysis of month : " << month << " - " << year << endl;
    cout << string(81, '=') << endl;
    
    cout << "Number of Sunny Day: " << sunnyDays << endl;
    cout << "Number of Rainy Day: " << rainyDays << endl;
    cout << "Number of Cloudy Day: " << cloudyDays << endl;

    cout << "| Sunny Days |";
    for (int i = 1; i <= sunnyDays; i++) {
        cout << " * ";
    }

    cout << endl << "| Rainy Days |";
    for (int i = 1; i <= rainyDays; i++) {
        cout << " * ";
    }

    cout << endl << "| Cloudy Days |";
    for (int i = 1; i <= cloudyDays; i++) {
        cout << " * ";
    }
}

void readWeather(int days, int month, int year) {
    int counter = 1;
    string weather;
    int hot_days = 0, rainy_days = 0, cloudy_days = 0;
    while (counter <= days) {
        cout << "Day " << counter << " : Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloud): ";
        cin >> weather;
        if (weather != "H" && weather != "R" && weather != "C") {
            cout << "Invalid input! Please re-enter again for Day " << counter << endl;
            continue;
        }

        if (weather == "H")
            hot_days++;
        else if (weather == "R")
            rainy_days++;
        else if (weather == "C")
            cloudy_days++;
        else {
        }
        counter++;
    }
    displayWeatherReport(rainy_days, hot_days, cloudy_days, month, year);
}

int main() {
    int year, days, month;
    char separator, reportType;

    cout << "Enter Your Month (e.g. 08-2023): ";
    cin >> month;
    month = monthValidation(month);
    cin >> separator;
    separator = separatorValidate(month, separator);
    cin >> year;
    year = yearValidation(month, separator, year);
    days = FindDaysInMonth(month, year);

    readWeather(days, month, year);
    return 0;
}