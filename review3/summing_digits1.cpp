#include <iostream>
using namespace std;

int main(){
    long long n;
    while(cin >> n && n != 0){
        while(n >= 10){
             int sumDigit = 0;
            while(n > 0){
              long long remainder = n % 10;
                        sumDigit += remainder;
                         n /= 10;
            }
           n = sumDigit;
        }
        cout << n << '\n';
    }
    return 0;
}