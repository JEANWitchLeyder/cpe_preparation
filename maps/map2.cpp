#include <iostream>
#include <map>
using namespace std;

int main(){
    string test = "Hello world my name is Tim! ttthhaaa";
    
    map<char,int>freq;
    for(int i = 0; i < test.size(); i++){
        char letter = test[i];
        cout << letter << endl;
    }
}