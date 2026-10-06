#include <iostream>
#include <string>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    cin.ignore();
    int frequencyLetters[26]={0};
    while(testCases--){
        string line;
         
         getline(cin,line);
         for(int i = 0; i < line.length();i++){
            if(line[i] >= 'a'  && line[i] <= 'z'){
                line[i] -= 32;
            }
             if(line[i] >= 'A'  && line[i] <= 'Z'){
                frequencyLetters[line[i] - 'A']++;
            }
         }
    }
    for(long long count = 1000000; count > 0; count--){
             for(int i = 0; i < 26; i++){
                if(frequencyLetters[i] == count){
                    cout << char('A'+i)
                         << ' '
                         << frequencyLetters[i]
                         <<'\n';
                }
             }
         }
}