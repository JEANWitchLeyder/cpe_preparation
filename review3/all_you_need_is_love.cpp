#include <iostream>
using namespace std;

long long binaryToDecimal(string binary){
long long decimal = 0.0;
for(int i = 0; i < binary.length();i++){
    decimal = decimal * 2 +  (binary[i] - '\0');
}
return decimal;
}
long long gcd(long long m , long long n){
   while(m != n){
     if(m >= n){
        m = m - n;
     }else{
        n = n - m;
     }
   }
   return m;
}

int main(){
   int N;
   cin >> N;
   
   cin.ignore();
   string string1, string2;
   for(int i = 1; i <= N; i++){
    getline(cin, string1) && getline(cin,string2);
    long long number1 = binaryToDecimal(string1); 
    long long number2 = binaryToDecimal(string2); 
     
    cout << "Pair #" << i << ": ";
    
    if(gcd(number1,number2) > 1){
      cout << "All you need is love!\n";
    }else{
      cout << "Love is not all you need!\n";
    }
   }
   return 0;
}