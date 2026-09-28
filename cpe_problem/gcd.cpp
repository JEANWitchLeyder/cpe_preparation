#include <iostream>
using namespace std;

int gcd(int n , int m){
    while(n!=m){
        if(n >= m){
            n -= m;
        }else{
            m -= n;
        }
    }
    return n;
}

int main(){
    int N;
    while(cin >> N && N != 0){
        int G=0;
        for(int i = 1; i < N; i++){
            for(int j = i+1; j <= N; j++){
                G+=gcd(i,j);
            }
        }
        cout << G << "\n";
    }
    return 0;
   
}
