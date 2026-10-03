#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    string line;
    int frequencyLetters[26]={0};
    while(n--){
        getline(cin,line);
     
            for(int i = 0; i < line.length();i++){
                if(line[i] >= 'a' && line[i] <= 'z'){
                    line[i] -= 32;
                }
                if(line[i] >= 'A' && line[i] <= 'Z'){
                  frequencyLetters[line[i] - 'A']++;
                }
            }

           
        }
        for(int count = 100000; count > 0; count--){
            for(int i = 0; i < 26; i++){
             if(frequencyLetters[i] == count){
                 cout << char('A'+i)
                      <<" " 
                      << frequencyLetters[i]
                      <<'\n';
             }
            }
         }       
    }
   
   
    
