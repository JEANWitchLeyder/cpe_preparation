#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    map<string,int>countries;
    while(n--){
       string country , name;
       cin >> country;

       getline(cin,name);
       countries[country]++;
    }
    for(auto x:countries){
        cout << x.first << " " << x.second << '\n';
    }
    return 0;   
}