#include <iostream>
using namespace std;

int main() {

    char A[] = "heart";
    char B[] = "earth";

    int i, j;
    bool isAnagram = true;

    int lengthA = 0;
    int lengthB = 0;

    for(i = 0; A[i] != '\0'; i++){
        lengthA++;
    }

    for(j = 0; B[j] != '\0'; j++){
        lengthB++;
    }

    if(lengthA != lengthB){
        isAnagram = false;
    }
    else {

        for(i = 0; A[i] != '\0'; i++){

            for(j = 0; B[j] != '\0'; j++){

                if(A[i] == B[j]){
                    B[j] = '0';
                    break;
                }
            }

            if(B[j] == '\0'){
                isAnagram = false;
                break;
            }
        }
    }

    if(isAnagram){
        cout << "Anagram\n";
    }
    else{
        cout << "Not anagram\n";
    }

    return 0;
}