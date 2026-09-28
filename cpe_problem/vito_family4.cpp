#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;


int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        int numberOfRelatives;
        cin >> numberOfRelatives;

        int addresses[500];
        for(int i = 0; i < numberOfRelatives; i++){
            cin>>addresses[i];
        }
        sort(addresses,addresses+numberOfRelatives);
        int median = addresses[numberOfRelatives/2];
        int totalDistance = 0;
        for(int i = 0; i < numberOfRelatives; i++){
            totalDistance += abs(addresses[i] - median);
        }
        cout << totalDistance << "\n";
    }
    return 0;
}