#include <iostream>
using namespace std;

int main(){
    long long groupSize,day;
    while(cin>>groupSize>>day){
        if(day > groupSize){
            day -= groupSize;
            groupSize++;
        }
    }
}