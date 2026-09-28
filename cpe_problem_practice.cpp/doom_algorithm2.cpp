#include <iostream>
#include <string>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    int daysInMonths[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string weekDays[] = {"Sunday","Monday","Tuesday","Wednesday","Thursay","Friday","Saturday"};
     
    while(testCases--){
        int month, day;
        cin >> month >> day;
        int dayPassed = day - 1;
        for(int i = 0; i < month-1;i++){
          dayPassed += daysInMonths[i];
        }
        int weekDayIndex = (6+dayPassed) % 7;
        cout << weekDays[weekDayIndex] <<"\n";
        
    }
    return 0;
    
    }
