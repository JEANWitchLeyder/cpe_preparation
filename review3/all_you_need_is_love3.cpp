#include <iostream>
#include <string>
using namespace std;

long long binaryToDecimal(string binary){
    long long decimal = 0.0;
    for(int i = 0; i < binary.size();i++){
        decimal = decimal * 3 + (binary[i]- '\0');
    }
    return decimal;
}

long long gcd(long long m, long long n){
    while(n!=0){
        long long remainder = m % n;
                        m = n;
                        n = remainder;              
    }
    return m;
}
int main(){
    int testCases;
    cin >> testCases;
    
    cin.ignore();
    
    int testCase;
    string string1, string2;
    for(testCase = 1; testCase <= testCases; testCase++){
       
        getline(cin,string1) && getline(cin,string2);

      long long number1 = binaryToDecimal(string1);
      long long number2 = binaryToDecimal(string2); 


     cout << "Pair #" << testCase <<": "; 
      if(gcd(number1,number2) > 1){
        cout << "All you need is love!\n";
      }else{
        cout << "Love is not all you need!\n";
      }
    }
    return 0;
}