#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long a,b;
    while(cin>>a>>b){
        int count = 0;
        if(a == 0 || b == 0){
            break;
        }
        for(long long i = a; i <= b; i++){
            long long root = static_cast<long long>(sqrt(i));

            if(root * root == i){
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}