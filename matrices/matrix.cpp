#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int rows, columns;
        cin>>rows>>columns;
        int matrix[rows][columns];
        for(int row = 0; row < rows; row++){
            for(int column = 0; column < columns; column++){
              cin >> matrix[row][column];
            }
        }

        int sum = 0;
        for(int row = 0; row < rows; row++){
            for(int column = 0; column < columns; column++){
              sum += matrix[row][column];
            }
        }
         int maxRowSum = -1;
         int maxRow = 0;
        for(int row = 0; row < rows; row++){
            int rowSum = 0;
            for(int column = 0; column < columns; column++){
                rowSum += matrix[row][column];
            }
            if(rowSum > maxRowSum){
                maxRowSum = rowSum;
                maxRow = row;
            }
        }

        long long minColumnSum = 10000000001;
        int minColumn = 0;

        for(int column = 0; column < columns; column++){
            int columnSum = 0;
            for(int row = 0; row < rows; row++){
                columnSum += matrix[row][column];
            }

            if(columnSum < minColumnSum){
                minColumnSum = columnSum;
                minColumn = column;
            }
        }

        cout << "The sum of all cells: " << sum << "\n"; 
        cout << "The row whose cells have the largest sum: " << maxRow + 1 << "(" << maxRowSum <<")" << "\n";
        cout << "The column whose cells have the smallest sum: " << minColumn + 1  << "(" << minColumnSum <<")" << "\n";

        cout << endl;
    }
}