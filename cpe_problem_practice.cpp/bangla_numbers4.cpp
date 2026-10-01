#include <iostream>
#include <iomanip>
using namespace std;

void printBangla(long long number){
    if(number >= 10000000){
        printBangla(number/10000000);

        cout << " kuti";

        number %= 10000000;
    }

    if(number >= 100000){
        cout <<" " << number / 100000 <<" lakh";
        number %= 100000;
    }

    if(number >= 1000){
        cout <<" " << number / 1000 <<" hajar";
        number %= 1000;
    }

    if(number >= 100){
        cout <<" " << number / 100 <<" hajar";
        number %= 100;
    }
    if(number >= 0){
        cout << " " << number;
    }
}

int main(){
  long long number;
  int caseNumber = 1;
  while(cin >> number){
    cout << caseNumber <<"." <<setw(4);
    if(number == 0){
     cout << " 0";
    }else{
        printBangla(number);
    }
    cout << "\n";
    caseNumber++;
  }
}