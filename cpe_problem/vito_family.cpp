#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int numberOfRelatives;
        cin >> numberOfRelatives;

        int addresses[500];

        // Read all relatives' street numbers
        for (int i = 0; i < numberOfRelatives; i++)
        {
            cin >> addresses[i];
        }

        // Put addresses in increasing order
        sort(addresses, addresses + numberOfRelatives);

        // Pick the median
        int median = addresses[numberOfRelatives / 2];

        // Calculate total distance from the median
        int totalDistance = 0;

        for (int i = 0; i < numberOfRelatives; i++)
        {
            totalDistance += abs(addresses[i] - median);
        }

        cout << totalDistance << '\n';
    }

    return 0;
}