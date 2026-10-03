#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
     int testCase;
     cin>>testCase;
      
     int N, I;
     double P;
     while(testCase--){
        cin >> N>>P>>I;
        
        double answer = 0.0;
        if(P != 0.0){
            answer = pow(1-P,I-1)*P;
            answer /= 1 - pow(1-P,N);
           
        }
        cout << fixed << setprecision(4) << answer <<'\n';
        
     }

    

    
}