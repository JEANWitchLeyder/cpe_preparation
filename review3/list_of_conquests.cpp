#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int>countries;
    while(n--){
      string country;
      cin >> country;

      string name;
      getline(cin,name);

      countries[country]++;

    }
    for(auto x:countries){
        cout << x.first << ' '<< x.second << '\n';
    }
    return 0;
    
}