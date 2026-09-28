#include <iostream>
using namespace std;

int main(){

    long long x1, x2;

    while(cin >> x1 >> x2){

        // Sentinel
        if(x1 == 0 && x2 == 0){
            break;
        }

        // Reset for each pair
        int carry = 0;
        int carryOperation = 0;

        // Process every digit
        while(x1 > 0 || x2 > 0){

            int digit1 = x1 % 10;
            int digit2 = x2 % 10;

            int sum = digit1 + digit2 + carry;

            if(sum >= 10){
                carry = 1;
                carryOperation++;
            }else{
                carry = 0;
            }

            x1 /= 10;
            x2 /= 10;
        }

        // Output for this pair
        if(carryOperation == 0){
            cout << "No carry operation.\n";
        }else if(carryOperation == 1){
            cout << "1 carry operation.\n";
        }else{
            cout << carryOperation << " carry operations.\n";
        }
    }

    return 0;
}