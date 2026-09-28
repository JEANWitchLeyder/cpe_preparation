#include <iostream>
using namespace std;

int main() {
    long long x1, x2;

    while (cin >> x1 >> x2) {

        if (x1 == 0 && x2 == 0) {
            break;
        }

        int carry = 0;
        int carryOperations = 0;

        while (x1 > 0 || x2 > 0) {

            int digit1 = x1 % 10;
            int digit2 = x2 % 10;

            int sum = digit1 + digit2 + carry;

            if (sum >= 10) {
                carry = 1;
                carryOperations++;
            } else {
                carry = 0;
            }

            x1 /= 10;
            x2 /= 10;
        }

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