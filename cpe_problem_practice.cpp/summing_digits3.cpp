#include <iostream>
using namespace std;

int main(){
    long long n, remainder;
    while(cin>>n && n != 0){
        while(n >= 10){
            int sumDigits = 0;
            while(n > 0){
               remainder = n % 10;
               sumDigits += remainder;
               n /= 10; 
            }
          n = sumDigits;
          
        }
        cout << n << "\n";
    }
    return 0;
}