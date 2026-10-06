#include <iostream>
#include <algorithm>
using namespace std;

int getCycleLength(long long n){
    int count = 1;
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
        }else{
            n = 3 * n + 1;
        }
        count++;
    }
    return count;
}
int main(){
    int i,j;
    while(cin >> i>>j){
        int start = i;
        int end = j;
        if(start > end){
            swap(start,end);
        }
        int maximumCycle = 0;
        for(int n = start; n <= end; n++){
           int cycleLength = getCycleLength(n);
           if(cycleLength > maximumCycle){
               maximumCycle = cycleLength;
           }
           
        }
        cout << i << " " << j << " " << maximumCycle << '\n';
            
        
    }
}