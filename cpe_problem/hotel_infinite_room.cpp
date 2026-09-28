#include <iostream>
using namespace std;

int main()
{
    long long groupSize, day;

    while (cin >> groupSize >> day)
    {
        while (day > groupSize)
        {
            day -= groupSize;
            groupSize++;
        }

        cout << groupSize << '\n';
    }

    return 0;
}