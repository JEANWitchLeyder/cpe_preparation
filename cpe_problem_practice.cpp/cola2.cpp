#include <iostream>
using namespace std;

int main(){
    int numberOfColas;
    while(cin >> numberOfColas){
        int emptyColas = numberOfColas,
            totalColas = numberOfColas,
            borrowedBottle = 1;

        if(emptyColas % 2 == 0){
           emptyColas += borrowedBottle;
        }
        while(emptyColas >= 3){
            int newColas = emptyColas / 3;
            totalColas += newColas;
            emptyColas = newColas + emptyColas % 3;
        }
        cout << totalColas <<'\n';
    }
    return 0;
}