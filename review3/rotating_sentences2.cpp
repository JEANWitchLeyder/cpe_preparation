#include <iostream>
#include <string>
using namespace std;


int main(){
    string lines[100];
    int numberOfLines = 0;
    int maximumLength = 0;

    while(getline(cin,lines[numberOfLines])){
        if(lines[numberOfLines].size() >= maximumLength){
            maximumLength = lines[numberOfLines].size();
        }
        numberOfLines++;
    }

    for(int column = 0; column < maximumLength; column++){
        for(int row = numberOfLines-1; row >= 0; row--){
            if(column < lines[row].size()){
                cout << lines[row][column];
            }else{
                cout << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}