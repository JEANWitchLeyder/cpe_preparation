#include <iostream>
#include <cmath>
using namespace std;

int GCD(int M, int N){
    while(M != N){
        if(M > N){
          M -= N;
        }else{
            N -= M;
        }
    }
    return M;
}
int main(){
int i , j , N;
while(cin >> N && N != 0){
    int G = 0;
    for(int i = 1; i < N; i++){
        for(int j = i+1; j <= N; j++){
           G+=GCD(i,j);
        }
       }
       cout << G <<"\n";
}
return 0;

}