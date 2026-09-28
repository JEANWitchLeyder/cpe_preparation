#include <iostream>
using namespace std;

int main(){
    int caseNumber = 1, N;
    int A[100];

    while(cin >> N){

        // 1. Read the sequence
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }

        bool isB2Sequence = true;

        // 2. Check positive + strictly increasing
        if(A[0] <= 0){
            isB2Sequence = false;
        }

        for(int i = 1; i < N; i++){
            if(A[i] <= 0 || A[i] <= A[i - 1]){
                isB2Sequence = false;
                break;
            }
        }

        // 3. Check that every pair sum is unique
        bool seen[20001] = {};

        if(isB2Sequence){
            for(int i = 0; i < N; i++){

                for(int j = i; j < N; j++){

                    int sum = A[i] + A[j];

                    if(seen[sum]){
                        isB2Sequence = false;
                        break;
                    }

                    seen[sum] = true;
                }

                if(!isB2Sequence){
                    break;
                }
            }
        }

        // 4. Output once per test case
        if(isB2Sequence){
            cout << "Case #" << caseNumber
                 << ": It is a B2-Sequence.\n\n";
        }else{
            cout << "Case #" << caseNumber
                 << ": It is not a B2-Sequence.\n\n";
        }

        caseNumber++;
    }

    return 0;
}