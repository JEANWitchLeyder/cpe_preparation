#include <iostream>
using namespace std;

int main(){
    int N;
    while(cin>>N){
        if(N%11==0){
            cout << N << "is a multiple of 11.\n";
        }
    }
    return 0;
}