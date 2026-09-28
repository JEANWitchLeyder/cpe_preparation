#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    cin >> line;

    int i,j;
    for(i = 0; i < line.size(); i++){

    }
    j = i - 1;
    for(int i = 0; i < j; i++,j--){
        int temp = line[i];
        line[i] = line[j];
        line[j] = temp;
    }
    for(int i = 0; i < line.size();i++){
        cout << line[i] <<"\n";
    }
    
}