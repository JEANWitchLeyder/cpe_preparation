#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int numbers[3000];
        bool seen[3000] = {};

        for(int i =  0; i < n; i++){
            cin >> numbers[i];
        }
        bool isJolly = true;
        for(int i = 1; i < n; i++){
            int difference = abs(numbers[i]-numbers[i-1]);
            if(difference >= 1 && difference <= n-1){
               seen[difference] = true;
            }
        }

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
    return 0;
}