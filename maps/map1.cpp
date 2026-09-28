#include <iostream>
#include <map>
using namespace std;

int main(){
    map <char,int>mp = {
        {'T',7},
        {'S',8},
        {'a',4}
    };
    mp['u'] = 9;
    mp.insert(pair<char,int>('j',5));
    cout << mp['j'] << endl; 
}