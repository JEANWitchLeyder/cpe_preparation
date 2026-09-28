#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    cin.ignore();
    string line;

    int frequencyLetter[26] = {0};

    while(n--){
        getline(cin,line);
        for(int i = 0; i < line.size();i++){
            if(line[i] >= 'a' && line[i] <= 'z'){
                line[i] -= 32;
            }
            if(line[i] >= 'A' && line[i] <= 'Z'){
                frequencyLetter[line[i] - 'A']++;
            }
        }
    }

    for(int count = 1000000; count > 0; count--){
        for(int i = 0; i < 26; i++){
            if(frequencyLetter[i] == count){
                cout << char('A'+i) << " " << frequencyLetter[i] <<"\n";
            }
        }
    }
return 0;
}