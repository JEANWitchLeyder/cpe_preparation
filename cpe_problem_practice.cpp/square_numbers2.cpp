#include <iostream>
#include <type_traits>
#include <cmath>
using namespace std;

int main(){
    long long a,b;
    while(cin >> a >> b){
        if(a == 0 || b == 0){
            break;
        }
        int count = 0;
        for(long long i = a; i <= b; i++){
           long long square_root = static_cast<long long>(sqrt(i));
           if(square_root * square_root == i){
               count++;
           }
        }
        cout << count << "\n"; 
    }
    return 0;
}
