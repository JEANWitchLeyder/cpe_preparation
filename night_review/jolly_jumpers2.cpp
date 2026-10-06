#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int numbers[3000];
    bool seen[3000]={};
    
    int n;
    while(cin >> n){
        for(int i = 0; i < n; i++){
            cin >> numbers[i];
        }
          for(int i = 1; i <= n; i++){
            int difference = abs(numbers[i]-numbers[i-1]);
            if(difference >= 1 && difference <= n-1){
                seen[difference] = true;
            }
        }
        bool isJolly = true;
        for(int i = 1; i <= n-1; i++){
          if(seen[i] == false){
            isJolly = false;
            break;
          }
        }  
        if(isJolly){
            cout << "Jolly\n";
        }else{
            cout << "Not jolly\n";
        }

    }
}