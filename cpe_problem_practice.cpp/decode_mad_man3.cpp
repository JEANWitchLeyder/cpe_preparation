#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm./";
    string line;
    while(getline(cin,line)){
        for(int i = 0; i < line.length();i++){
            char currentCharacter = line[i];
            if(currentCharacter == ' '){
                cout << " ";
                continue;
            }
            currentCharacter = tolower(currentCharacter);
            int position = keyboard.find(currentCharacter);

            if(position != string::npos && position >= 2){
                cout << keyboard[position-2];
            }
        }
        cout << "\n";
    }
    return 0;
}