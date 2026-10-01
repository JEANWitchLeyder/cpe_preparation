#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string string1,string2;
    while(getline(cin,string1) && getline(cin,string2)){
        sort(string1.begin(),string1.end());

        for(int i = 0; i < string1.length();i++){
            for(int j = 0; j < string2.length();j++){
                if(string1[i] == string2[j]){
                    cout << string1[i];
                    string2[j] = '\0';
                    break;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}