#include <iostream>
using namespace std;

int main(){
    long long n;
    while(cin>>n && n != 0){
        while(n >= 10){
          long long sumDigits = 0;

           while(n > 0){
            int remainder = n % 10;
            n = n /10;
            sumDigits += remainder;
           }
           n = sumDigits;
        }
        cout << n << "\n";
    }
    return 0;
}