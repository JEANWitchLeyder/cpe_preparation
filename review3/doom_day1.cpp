#include <iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        string daysInWeek[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

        int Month , day;
        cin >> Month >> day;

        int dayPassed = day - 1;

        for(int i = 0; i < Month-1;i++){
            dayPassed += daysInMonth[i];
        }
        int dayInWeekIndex = (6+dayPassed) % 7;
        cout << daysInWeek[dayInWeekIndex] << '\n';
    }
    return 0;
}