#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a , b;
    while(cin >> a>> b){
        if(a == 0 && b == 0){
            break;
        }
        int count = 0;
        for(int i = a; i <= b; i++){
         long long root = static_cast<long long> (sqrt(i));
         if(root * root == i){
            count++;
         }
        }
        cout << count << '\n';
    }
}