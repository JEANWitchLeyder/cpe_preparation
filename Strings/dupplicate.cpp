#include <iostream>
using namespace std;

int main(){
    char A[] = "Programming";
    int i,j;
    int count = 0;
    for(i = 0; A[i] != '\0'; i++){
        
        for(j = i+1; A[j] != '\0'; j++){
        if(A[i] == A[j]){
            cout << "Dupplicate found " << A[i] << "\n";
        }
     }
    }
}



