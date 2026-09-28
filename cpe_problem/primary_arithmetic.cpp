#include <iostream>
using namespace std;

int main() {

    long long x1, x2;

    while (cin >> x1 >> x2) {

        // Sentinel: stop only when BOTH are 0
        if (x1 == 0 && x2 == 0) {
            break;
        }

        int carry = 0;
        int carryOperations = 0;

        // Continue as long as at least one number has digits
        while (x1 > 0 || x2 > 0) {

            // Extract last digits
            int digit1 = x1 % 10;
            int digit2 = x2 % 10;

            // Add digits + carry from previous column
            int sum = digit1 + digit2 + carry;

            if (sum >= 10) {
                carry = 1;
                carryOperations++;
            }
            else {
                carry = 0;
            }

            // Remove last digits
            x1 /= 10;
            x2 /= 10;
        }

        // Exact UVA output
        if (carryOperations == 0) {
            cout << "No carry operation.\n";
        }
        else if (carryOperations == 1) {
            cout << "1 carry operation.\n";
        }
        else {
            cout << carryOperations << " carry operations.\n";
        }
    }

    return 0;
}