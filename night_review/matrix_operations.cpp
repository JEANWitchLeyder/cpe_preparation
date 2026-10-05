#include <iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    
    for(int testCase = 1; testCase <= testCases; testCase++){
       int row , column;
       cin >> row >> column;
      
       int MatrixA[10][10];
       //input
       for(int i = 0; i < row;i++){
        for(int j = 0; j < column; j++){
            cin >> MatrixA[i][j];
        }
       }
       cout << "Case #"<< testCase << ":\n";
       //sum
       int sum = 0;
       for(int i = 0; i < row;i++){
        for(int j = 0; j < column; j++){
            sum += MatrixA[i][j];
        }
       }
       cout << "Sum: " << sum << '\n';
       //rowSum , columnSum
       
       int rowSum , columnSum;
       for(int j = 0; j < column; j++){
          columnSum = 0;
        for(int i = 0; i < row; i++){
            columnSum += MatrixA[i][j];
        }
        cout << columnSum <<  ' ';
       }
       cout << '\n';
       for(int i = 0; i < row; i++){
         rowSum = 0;
        for(int j = 0; j < column; j++){
            rowSum += MatrixA[i][j];
        }
          cout << rowSum << ' ';
       }
       cout << '\n';
     
       
    
       int maximum = MatrixA[0][0];
       int maximumRow = 0, maximumColumn = 0;
       for(int i=0; i < row; i++){
        for(int j=0; j < column; j++){
            if(MatrixA[i][j] > maximum){
                maximum = MatrixA[i][j];
                maximumRow = i;
                maximumColumn = j;
            }
        }
       }
       cout << "Maximum: " << maximum << " at " 
            << "(" << maximumRow <<"," << maximumColumn <<")" 
            << '\n';
      
      int t[10][10];
      for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            t[j][i] = MatrixA[i][j];
        }
       }
       cout << "The transpose: \n";
        for(int i = 0; i < column; i++){
        for(int j = 0; j < row; j++){
            cout << t[i][j] << ' ';
        }
        cout << '\n';
       }

       //clockwise rotation - not yet

      // Main diagonal sum
      int mainSum = 0;
      
        for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(i==j){
                mainSum += MatrixA[i][j];
            }
        }
       }
       cout << mainSum << '\n';
       //Square
       bool isSquare = (row == column);
     
       cout << (isSquare ? "Square\n" : "Not square\n");

      //Secondary Diagonal Sum
        int secondarySum = 0;
       for(int i = 0; i < row; i++){
            secondarySum += MatrixA[i][column-1-i];
       }
       cout << "Secondary sum: " << secondarySum << '\n';
       
       //Symmetry
       bool isSymmetry = true;
       for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(MatrixA[i][j] != MatrixA[row-1-i][column-1-j]){
               isSymmetry = false;
            }
        }
       }
       cout << (isSymmetry ? "Symmetric" : "Not symmetric") << '\n';
   
       }
       
       

        












    }
