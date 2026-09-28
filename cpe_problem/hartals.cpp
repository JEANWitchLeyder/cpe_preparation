#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int numberOfDays;
        int numberOfParties;

        cin >> numberOfDays;
        cin >> numberOfParties;

        bool lostDays[3651] = {};

        for (int party = 0; party < numberOfParties; party++)
        {
            int hartalParameter;
            cin >> hartalParameter;

            for (int day = hartalParameter;
                 day <= numberOfDays;
                 day += hartalParameter)
            {
                bool isFriday = day % 7 == 6;
                bool isSaturday = day % 7 == 0;

                if (!isFriday && !isSaturday)
                {
                    lostDays[day] = true;
                }
            }
        }

        int totalLostDays = 0;

        for (int day = 1; day <= numberOfDays; day++)
        {
            if (lostDays[day])
            {
                totalLostDays++;
            }
        }

        cout << totalLostDays << '\n';
    }

    return 0;
}