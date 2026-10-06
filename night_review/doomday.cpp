#include <iostream>
#include <string>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
      
     int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string weekDays[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    while(testCases--){
         int Month , Day;
         cin >> Month>>Day;

         int dayPassed = Day - 1;
         for(int i = 0; i < Month-1;i++){
             dayPassed += daysInMonth[i];
         }
         int weekDaysIndex = (dayPassed + 6) % 7;
         cout << weekDays[weekDaysIndex] << '\n';
    }
}