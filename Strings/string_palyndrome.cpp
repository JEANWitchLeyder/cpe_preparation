#include <iostream>
using namespace std;

int main(){
    char A[101];

    while(true){
        cout << "Enter a word: ";
        cin >> A;
    
        int i,j;
    
    
        for(i = 0; A[i]!= '\0';i++){
    
        }
        j = i-1;
        for(i = 0; i < j; i++,j--){
          if(A[i]!=A[j]){
            break;
          }
        }
        if(A[i] == A[j]){
            cout << "Palyndrome\n";
        }else{
            cout << "Not a Palyndrome\n";
            break;
        }
    }
}
    