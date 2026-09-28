#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    string text;
    map<string, int> frequency;

    while(cin >> text)
    {
        frequency[text]++;
    }

    for(auto x : frequency)
    {
        cout << x.first << ": " << x.second << "\n";
    }

    return 0;
}