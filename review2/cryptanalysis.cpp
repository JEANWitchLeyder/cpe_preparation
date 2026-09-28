#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    cin.ignore();

    int frequencyLetters[26] = {0};
    for(int i = 0; i < n; i++){
        string line;
        getline(cin,line);

        for(int j = 0; j < line.length();j++){
            if(line[j] >= 'a' && line[j] <= 'z'){
                line[j] -= 32;
            }
            if(line[j] >= 'A' && line[j] <= 'Z'){
                frequencyLetters[line[j]-'A']++;
            }
        }
    }

    for(int count =1000000; count > 0; count--){
        for(int i = 0; i < 26; i++){
            if(frequencyLetters[i] == count){
                cout << char('A'+i) 
                     << " "
                     <<frequencyLetters[i]
                     <<"\n";
            }
        }
    }
}
