#include <iostream>
using namespace std;

int main(){
    int numberOfColas;
    while(cin >> numberOfColas){
        int totalColas = numberOfColas;
        int emptyBottles = numberOfColas;
        int borrowedBottle = 1;

        if(emptyBottles % 2 == 0){
            emptyBottles += borrowedBottle;
        }

        while(emptyBottles >= 3){
            int newColas = emptyBottles / 3;
                totalColas +=newColas;
                emptyBottles = newColas + emptyBottles % 3;
        }
        cout << totalColas << '\n';
    }
    return 0;
}