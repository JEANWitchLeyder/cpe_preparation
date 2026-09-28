#include <iostream>
using namespace std;

int main(){
    char A[] = "Painter";
    char B[] = "Painting";

    int i;
    for(i = 0; A[i] != '\0' && B[i] != '\0'; i++){
        if(A[i] != B[i]){
            break;
        }
    }

    if(A[i] == B[i]){
        cout << "Equal\n";
    }else if(A[i] < B[i]){
        cout << "Smaller\n";
    }else{
        cout << "Greater";
    }
}
