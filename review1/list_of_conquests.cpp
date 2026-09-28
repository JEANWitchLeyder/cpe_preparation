#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int>countries;
    for(int i = 0; i < n; i++){
        string country;
        string name;
        cin >> country;
        getline(cin,name);

        countries[country]++;  
    }    for(auto x: countries){
        cout << x.first << " " << x.second << "\n";
    }
    return 0;
}