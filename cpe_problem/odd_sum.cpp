#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for(int testCase = 1; testCase <= testCases; testCase++)
    {
        int a, b;
        cin >> a >> b;

        int sum = 0;

        for(int i = a; i <= b; i++)
        {
            if(i % 2 != 0)
            {
                sum += i;
            }
        }

        cout << "Case " << testCase << ": " << sum << '\n';
    }

    return 0;
}