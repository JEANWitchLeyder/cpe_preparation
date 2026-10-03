#include <iostream>
using namespace std;

int main(){
    long long number1,number2;
    while(cin >> number1 >> number2){
        if(number1 == 0 && number2 == 0){
            break;
         }
            int carry = 0;
            int carryOperations = 0;
        
        while(number1 > 0 || number2 > 0){

            int digit1 = number1 % 10;
            int digit2 = number2 % 10;

            int sum = digit1 + digit2 + carry;

            if(sum >= 10){
                carry = 1;
                carryOperations++;
            }else{
                carry = 0;
            }
            number1 /= 10;
            number2 /= 10;
        }
        if(carryOperations == 0){
            cout << "No carry operation.\n";
        }else if(carryOperations == 1){
            cout << "1 carry operation.\n";
        }else{
            cout << carryOperations << " carry operations.\n";
        }
        
    }
    return 0;
}