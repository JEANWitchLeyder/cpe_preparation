#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--)
   {
    int numberRelatives;
    cin >> numberRelatives;

    int addresses[500];
    for(int i = 0; i < numberRelatives; i++){
        cin >> addresses[i];
    }
    sort(addresses,addresses+numberRelatives);
    int median = addresses[numberRelatives/2];
    int totalDistance = 0;
    for(int i = 0; i < numberRelatives; i++){
        totalDistance += abs(addresses[i] - median);
    }
    cout << totalDistance << "\n";
   }
 return 0;
}
