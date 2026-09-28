#include <iostream>
#include <string>
using namespace std;

int main(){
    char text[] = "I  love  CPE";

    int spaces = 0;

    for(int i = 0; text[i] != '\0';i++){
        if(text[i] == ' '){
            spaces++;
        }
    }

    cout << spaces<< '\n';
}

