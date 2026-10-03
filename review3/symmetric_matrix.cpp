#include <iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
     
     

    for(int testCase = 1; testCase <= testCases; testCase++){
        string N;
        char equals;
        int matrixSize;
        long long Matrix[100][100];
        bool isSymmetricMatrix = true;

        cin >> N >> equals>>matrixSize;

        for(int row = 0; row < matrixSize; row++){
            for(int column = 0; column < matrixSize; column++){
                cin >> Matrix[row][column];

                if(Matrix[row][column] < 0){
                    isSymmetricMatrix = false;
                }
            }
        }

        for(int row = 0; row < matrixSize; row++){
            for(int column = 0; column < matrixSize; column++){
              if(Matrix[row][column] != Matrix[matrixSize - 1 - row][matrixSize-1-column]){
                isSymmetricMatrix = false;
              }
            }
        }

        cout << "Test #" << testCase <<": ";
        if(isSymmetricMatrix){
            cout << "Symmetric.\n";
        }else{
            cout << "Non-Symmetric.\n";
        }
    }
    
}