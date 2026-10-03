#include <iostream>
using namespace std;

int main(){
    long long N;
    while(cin >> N && N != 0){
     if(N % 11 == 0){
        cout << N << " is a multiple of 11.\n";
     }else{
        cout << N << " is not a multiple of 11.\n";
     }
    }
}