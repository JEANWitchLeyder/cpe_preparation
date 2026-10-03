#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    while(N--){
        int lengthTrain;
        cin >> lengthTrain;

        int numbers[50];

        for(int i = 0; i < lengthTrain;i++){
            cin >> numbers[i];
        }
        
        int countSwap = 0;
        for(int i = 0; i < lengthTrain - 1; i++){
          for(int j = 0; j < lengthTrain - 1 - i; j++){
               if(numbers[j] > numbers[j+1]){
                 int temp = numbers[j];
                 numbers[j] = numbers[j+1];
                 numbers[j+1] = temp;

                 countSwap++;
               }
          }
        }

        cout << "Optimal train swapping takes " << countSwap << " swaps.\n";
    }
}