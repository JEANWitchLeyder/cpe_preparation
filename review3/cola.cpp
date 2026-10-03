#include <iostream>
using namespace std;

int main(){
     int numberOfColas;
    
     while(cin >> numberOfColas){
        int totalColas = numberOfColas;
        int emptyBottle = numberOfColas;
        int borrowedBottle = 1;

        if(emptyBottle % 2 == 0){
            emptyBottle += borrowedBottle;
        }

        while(emptyBottle >= 3){
            int newColas = emptyBottle / 3;
            totalColas += newColas;
            emptyBottle += newColas + emptyBottle % 3;
        }
        cout << totalColas << '\n';
     }

    
}