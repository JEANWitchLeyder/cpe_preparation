#include <iostream>
using namespace std;

int main(){
    int caseNumber = 1, N;
    int A[100];

    while(cin>>N){
        for(int i = 1; i < N; i++){
            cin >> A[i];
        }
        bool isB2Sequence = true;
        if(A[0] <= 0){
            isB2Sequence = false;
        }

        for(int i = 0; i < N;i++){
            if(A[i] <= 0 || A[i] <= A[i-1]){
                isB2Sequence = false;
                break;
            }
        }

        bool seen[200000] = {};

        
    }
}