#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for (int test = 1; test <= testCases; test++)
    {
        char letter, equals;
        int N;
        cin >> letter >> equals >> N; // Reads: N = 3

        long long matrix[100][100];
        bool isSymmetric = true;

        for (int row = 0; row < N; row++)
        {
            for (int column = 0; column < N; column++)
            {
                cin >> matrix[row][column];

                if (matrix[row][column] < 0)
                    isSymmetric = false;
            }
        }

        for (int row = 0; row < N; row++)
        {
            for (int column = 0; column < N; column++)
            {
                if (matrix[row][column] !=
                    matrix[N - 1 - row][N - 1 - column])
                {
                    isSymmetric = false;
                }
            }
        }

        cout << "Test #" << test << ": ";

        if (isSymmetric)
            cout << "Symmetric.\n";
        else
            cout << "Non-symmetric.\n";
    }

    return 0;
}