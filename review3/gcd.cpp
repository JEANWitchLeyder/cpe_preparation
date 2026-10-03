#include <iostream>
using namespace std;

int GCD(int m, int n){
    while(m != n){
        if(m > n){
            m = m - n;
        }else{
            n = n - m;
        }
    }
    return m;
}
int main(){
    
    int N;
    while(cin >> N && N != 0){
        int G = 0;
        for(int i =1;i < N;i++){
            for(int j = i+1; j <= N; j++){
              G += GCD(i,j);
            }
          }
      cout << G << '\n';
    }
    
    return 0;
    
}