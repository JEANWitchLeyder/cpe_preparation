#include <iostream>
using namespace std;

int getCycleLength(long long n)
{
    int count = 1;

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }

        count++;
    }

    return count;
}

int main()
{
    int i, j;

    while (cin >> i >> j)
    {
        int start = i;
        int end = j;

        // Make sure start is smaller
        if (start > end)
        {
            int temp = start;
            start = end;
            end = temp;
        }

        int maximumCycle = 0;

        for (int n = start; n <= end; n++)
        {
            int cycleLength = getCycleLength(n);

            if (cycleLength > maximumCycle)
            {
                maximumCycle = cycleLength;
            }
            cout << i << " " << j << " " << maximumCycle << '\n';
        }   
    }
    return 0;
}