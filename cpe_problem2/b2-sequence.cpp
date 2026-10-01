#include <iostream>
using namespace std;

int main()
{
    int N;
    int caseNumber = 1;

    while (cin >> N)
    {
        int b[100];

        for (int i = 0; i < N; i++)
        {
            cin >> b[i];
        }

        bool isB2 = true;

        // Check positivity and increasing order
        if (b[0] < 1)
        {
            isB2 = false;
        }

        for (int i = 1; i < N; i++)
        {
            if (b[i] <= b[i - 1])
            {
                isB2 = false;
            }
        }

        // Maximum sum: 10000 + 10000
        bool seenSums[20001] = {};

        for (int i = 0; i < N; i++)
        {
            for (int j = i; j < N; j++)
            {
                int sum = b[i] + b[j];

                if (seenSums[sum] == true)
                {
                    isB2 = false;
                }
                else
                {
                    seenSums[sum] = true;
                }
            }
        }

        cout << "Case #" << caseNumber << ": ";

        if (isB2)
        {
            cout << "It is a B2-Sequence.\n\n";
        }
        else
        {
            cout << "It is not a B2-Sequence.\n\n";
        }

        caseNumber++;
    }

    return 0;
}