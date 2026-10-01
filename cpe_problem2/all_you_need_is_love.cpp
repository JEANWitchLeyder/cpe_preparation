#include <iostream>
#include <string>
using namespace std;

long long binaryToDecimal(string binary)
{
    long long decimal = 0;

    for (int i = 0; i < binary.length(); i++)
    {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    return decimal;
}

long long GCD(long long m, long long n)
{
    while (m != n)
    {
        if (m >= n)
        {
            m -= n;
        }
        else
        {
            n -= m;
        }
    }

    return m;
}

int main()
{
    int testCases;
    cin >> testCases;

    for (int testCase = 1; testCase <= testCases; testCase++)
    {
        string binary1, binary2;
        cin >> binary1 >> binary2;

        long long number1 = binaryToDecimal(binary1);
        long long number2 = binaryToDecimal(binary2);

        cout << "Pair #" << testCase << ": ";

        if (GCD(number1, number2) > 1)
        {
            cout << "All you need is love!\n";
        }
        else
        {
            cout << "Love is not all you need!\n";
        }
    }

    return 0;
}