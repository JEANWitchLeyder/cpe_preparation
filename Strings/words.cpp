#include <iostream>
#include <string>
using namespace std;

int main(){
    char text[] = "I  love  CPE";

    int words = 1;

    for(int i = 0; text[i] != '\0';i++){
        if(text[i] == ' ' && text[i+1] != ' '){
            words++;
        }
    }

    cout << words << '\n';
}