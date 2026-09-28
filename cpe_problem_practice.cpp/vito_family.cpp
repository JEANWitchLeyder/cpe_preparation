#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        int numberOfRelatives;
        cin >> numberOfRelatives;

        int addresses[500];

        for(int i=0; i < numberOfRelatives;i++){
            cin>>addresses[i];
        }
        sort(addresses,addresses+numberOfRelatives);
        
        int median = addresses[numberOfRelatives/2];

        int totalDistances = 0;

        for(int i = 0; i < numberOfRelatives; i++){
            totalDistances += abs(addresses[i]-median);
        }
        cout << totalDistances <<"\n";
    }
    return 0;
}

