#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int factorCount = 0;
    int properSum = 0;

    cout << "Factors: ";

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            cout << i << " ";
            factorCount++;

            if (i != N) {
                properSum += i;
            }
        }
    }

    cout << '\n';
    cout << "Factor Count: " << factorCount << '\n';
    cout << "Proper Factor Sum: " << properSum << '\n';

    if (factorCount == 2)
        cout << "PRIME\n";
    else
        cout << "NOT PRIME\n";

    if (properSum == N)
        cout << "PERFECT\n";
    else
        cout << "NOT PERFECT\n";

    return 0;
}