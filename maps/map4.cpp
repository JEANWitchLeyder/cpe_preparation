#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string,int>countries;
    countries["France"] = 3;
    countries.insert({"Japan",5});
    pair<string,int>p("Taiwan",2);
    countries.insert(p);
    for(auto x : countries){
        cout << x.first << ":" << x.second << "\n";
    }
    return 0;


}