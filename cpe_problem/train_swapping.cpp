#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    while(N--){
        int lengthTrain;
        cin>>lengthTrain;

        int numbers[50];
        for(int i = 0; i <lengthTrain; i++){
            cin>>numbers[i];
        }
        int countSwap = 0;
        for (int pass = 0; pass < lengthTrain - 1; pass++)
        {
      for (int i = 0; i < lengthTrain - 1 - pass; i++)
       {
        if (numbers[i] > numbers[i + 1])
        {
            int temp = numbers[i];
            numbers[i] = numbers[i + 1];
            numbers[i + 1] = temp;

            countSwap++;
        }
     }
     }      
     cout << "Optimal train swapping takes "
     << countSwap
     << " swaps.\n";

    }
    return 0;
}