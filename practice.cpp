#include <iostream>
using namespace std;

/*
long long factorial(int n);
long long power(int base, int exponent);
bool isPrime(int n);
bool isPerfect(int n);
int gcd(int a, int b);

*/
long long factorial(int n){
    if(n == 0)
       return 1;

return factorial(n-1)*n;
}
long long power(int base, int exponent){
    if(exponent == 0)
       return 1;
 return power(base,exponent-1) * base;
}

bool isPrime(int n){
    int count = 0;
    for(int i = 1; i <= n; i++){
       if(n % i == 0){
          count++;
       }
    }
    return (count == 2);
}
bool isPerfect(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            sum += i;
        }
    }
    return sum == 2*n;
}
int gcd(int a, int b){
    while(a != b){
        if(a > b)
           a = a - b;
        else if(b > a)
           b = b - a;
    }
    return a;
}

int main(){
    int n = 10;
    cout <<"Factorial: "<<factorial(n) <<endl;

    int base = 2 , exponent = 2; 
    cout << "Power: " << power(base,exponent)<<endl;
    
    //Prime Number
    if(isPrime(13)){
        cout << "It is  a Prime Number"<<endl;
    }else{
        cout << "It is  not a Prime Number"<<endl;
    }

    //Perfect Number
    if(isPerfect(14)){
        cout << "It is a Perfect Number" <<endl;
    }else{
        cout << "It is not a Perfect Number" <<endl;
    }

    //GCD

    cout << "GCD(30,21): " << gcd(30,21) <<endl;
}