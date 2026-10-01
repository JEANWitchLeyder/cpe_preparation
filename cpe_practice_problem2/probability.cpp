#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
     
    while(testCases--){
        int N,I;
        double P;
        cin >> N >> P >> I;
    
        double answer = 0.0;
    
        if(P != 0){
            answer = pow(1.0-P,I-1.0) * P;
            answer /= 1.0 - pow(1.0-P,N);
        }
        cout << fixed << setprecision(4) << answer << '\n';
    
    }
    
   return 0;
}