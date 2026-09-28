#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    int daysInMonth[12] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    string weekDays[7] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };

    while (testCases--) {
        int month, day;
        cin >> month >> day;

        int daysPassed = day - 1;

        for (int i = 0; i < month - 1; i++) {
            daysPassed += daysInMonth[i];
        }

        // January 1, 2011 was Saturday = index 6
        int weekDayIndex = (6 + daysPassed) % 7;

        cout << weekDays[weekDayIndex] << '\n';
    }

    return 0;
}