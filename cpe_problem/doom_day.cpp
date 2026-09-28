#include <iostream>
#include <string>
using namespace std;

int main()
{
    int daysInMonth[13] = {
        0, 31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    string weekday[7] = {
        "Saturday", "Sunday", "Monday", "Tuesday",
        "Wednesday", "Thursday", "Friday"
    };

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int month, day;
        cin >> month >> day;

        int daysSinceJanuaryFirst = day - 1;

        for (int previousMonth = 1; previousMonth < month; previousMonth++)
        {
            daysSinceJanuaryFirst += daysInMonth[previousMonth];
        }

        cout << weekday[daysSinceJanuaryFirst % 7] << '\n';
    }

    return 0;
}