#include <iostream>
using namespace std;

int main() {
    long long n;

    // Keep reading until the sentinel 0
    while (cin >> n && n != 0) {

        // Keep reducing until n becomes one digit
        while (n >= 10) {

            long long sumDigits = 0;

            // Extract and add every digit
            while (n > 0) {
                int remainder = n % 10;
                sumDigits += remainder;
                n = n / 10;
            }

            // The sum becomes our new number
            n = sumDigits;
        }

        cout << n << '\n';
    }

    return 0;
}