#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int x;

    while (cin >> x)
    {
        string line;
        getline(cin, line); // Finish the line containing x
        getline(cin, line); // Read the coefficient line

        istringstream input(line);
        vector<long long> coefficients;
        long long coefficient;

        while (input >> coefficient)
        {
            coefficients.push_back(coefficient);
        }

        long long value = coefficients[0];
        long long derivative = 0;

        for (int i = 1; i < static_cast<int>(coefficients.size()); i++)
        {
            derivative = derivative * x + value;
            value = value * x + coefficients[i];
        }

        cout << derivative << '\n';
    }

    return 0;
}