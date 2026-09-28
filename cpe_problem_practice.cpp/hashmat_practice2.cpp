#include <iostream>
using namespace std;

int main(){
    long long x1,x2;
    while(cin>>x1>>x2){
        if(x1 >= x2){
            cout << x1 - x2 << "\n";
        }else{
            cout << x2 - x1 << "\n";
        }
    }
    return 0;
}