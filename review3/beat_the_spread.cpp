#include <iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        int s,d,high,low;
        cin >> s>>d;

        if(s >= d){
            high = (s+d)/2;
            low = (s-d)/2;
            cout <<high << " "<<low <<'\n';
        }else{
            cout << "imposibble\n";
        }
    }
}