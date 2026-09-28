#include <iostream>
#include <iomanip>
using namespace std;

void printBangla(long long n){
    if(n >= 10000000){
        printBangla(n/10000000);
        cout << " kuti ";
        n = n % 10000000;
    }
    if(n >= 100000){
        cout << n/100000 <<" lakh ";
        n = n % 100000;
    }
    if(n >= 1000){
        cout << n/1000 <<" hajar ";
        n = n % 1000;
    }
    if(n >= 100){
        cout << n/100 <<" shata ";
        n = n % 100;
    }
    if(n > 0){
        cout << " " << n;
    }
}
int main(){
    long long n;
    int caseNumber = 1;

    while(cin>>n){
       cout << setw(4) << caseNumber << ". ";
       if(n == 0){
        cout << " 0";
       }else{
        printBangla(n);
       }
       cout << "\n";
       caseNumber++;
    }
    return 0;
    
}