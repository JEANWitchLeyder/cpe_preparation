#include <iostream>
using namespace std;

long long gcd(long long m, long long n)
{
    while (n != 0)
    {
        long long remainder = m % n;
        m = n;
        n = remainder;
    }

    return m;
}

int main(){
    cout << gcd(2,4) << '\n'; 
}