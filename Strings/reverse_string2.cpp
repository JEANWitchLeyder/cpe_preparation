#include <iostream>
using namespace std;

int main(){
    char A[] = "Python";
    char temp;
    int i, j;

    for(i = 0; A[i] != '\0';i++){

    }
    j = i - 1;
    for(i = 0; i < j; i++ , j--){
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    cout << A;
}