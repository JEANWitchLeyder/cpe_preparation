#include <iostream>
#include <string>
using namespace std;

int main(){
    int testCases;
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string weekDays[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    cin >> testCases;
    while(testCases--){
        int month , day;
        cin >> month >> day;
        int dayPassed = day - 1;
        for(int i = 0; i < month-1;i++){
            dayPassed += daysInMonth[i];
        }
        int weekIndex = (6+dayPassed)%7;
        cout << weekDays[weekIndex] <<"\n"; 
    }
    return 0;
}