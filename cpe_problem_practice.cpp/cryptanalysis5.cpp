#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    string line;
    cin.ignore();
    int frequencyLetters[26] = {0};
    while(n--){
        getline(cin,line);
        for(int i = 0; i < line.size();i++){
            if(line[i] >= 'a' && line[i] <= 'z'){
                line[i] -= 32;
            }
            if(line[i] >= 'A' && line[i] <= 'Z'){
                frequencyLetters[line[i]-'A']++;
            }
        }
    }

    for(int count = 1000000; count > 0; count--){
        for(int i = 0; i < 26; i++){
            if(frequencyLetters[i] == count){
                cout << char('A'+ i) <<" " <<frequencyLetters[i] << "\n";
            }
        }
    }
    return 0;
}