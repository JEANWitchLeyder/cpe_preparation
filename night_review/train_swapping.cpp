#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        int lengthTrain;
        cin >> lengthTrain;
        int numbers[50];
        for(int i = 0; i < lengthTrain;i++){
            cin >> numbers[i];
        }
        int countSwap = 0;
        for(int i = 0; i < lengthTrain - 1; i++){
            
            for(int j=0; j < lengthTrain-1-i;j++){
                if(numbers[j] > numbers[j+1]){
                    swap(numbers[j],numbers[j+1]);
                    countSwap++;
                }
            }
        
        }
        cout << "Optimal train swapping takes " << countSwap << " swaps.\n";
     

        
    }
}