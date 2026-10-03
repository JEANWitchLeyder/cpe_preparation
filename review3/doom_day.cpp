#include <iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
    int daysInMonths[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string daysInWeek[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
     int day , month;
     cin >> month >> day;
     int dayPassed = day - 1;
     for(int i = 0; i < month-1; i++){
       dayPassed += daysInMonths[i];
     }
     int weekDayIndex = (6+dayPassed)%7;
     cout << daysInWeek[weekDayIndex] <<'\n';
    }
}