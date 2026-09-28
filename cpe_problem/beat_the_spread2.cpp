#include <iostream>
using namespace std;

int main(){
   int T;
   cin>>T;
   while(T--){
    int s,d,high,low;
    cin>>s>>d;
    high = (s + d) / 2;
    low = (s-d)/2;
    if(s >= d){
        cout << high << " " << low <<"\n";
    }else{
        cout << "impossible" << "\n";
    }

}
return 0;
}