#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    long long x;

    while (cin >> x)
    {
        cin.ignore();

        string line;
        getline(cin, line);

        stringstream input(line);

        long long coefficients[10000];
        int numberOfCoefficients = 0;

        while (input >> coefficients[numberOfCoefficients])
        {
            numberOfCoefficients++;
        }

        int degree = numberOfCoefficients - 1;
        long long result = 0;

        for (int i = 0; i < degree; i++)
        {
            int power = degree - i;

            result = result * x
                   + coefficients[i] * power;
        }

        cout << result << '\n';
    }

    return 0;
}