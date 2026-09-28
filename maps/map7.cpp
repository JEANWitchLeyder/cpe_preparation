#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    for(int testCase = 1; testCase <= testCases;testCase++){
        map<string,int>frequency;
        string text;

        while(cin>>text){
            frequency[text]++;
        }
        for(auto x: frequency){
            cout << x.first <<":"<<x.second<< "\n";
        }
    }
    return 0;
}