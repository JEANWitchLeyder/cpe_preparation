#include <iostream>
using namespace std;

int main() {
    char A[] = "Python";

    int i, j;
    char temp;

    // Find the length
    for (i = 0; A[i] != '\0'; i++) {
    }

    // j points to the last character
    j = i - 1;

    // i goes back to the beginning
    for (i = 0; i < j; i++, j--) {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

    cout << A;

    return 0;
}