#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int s,d,high,low;
        cin>>s>>d;
        high = (s+d)/2;
        low = (s-d)/2;
        if(s >= d){
            cout << high << " " << low <<"\n";
        }else{
            cout << "impossible\n";
        }
    }
    return 0;
}