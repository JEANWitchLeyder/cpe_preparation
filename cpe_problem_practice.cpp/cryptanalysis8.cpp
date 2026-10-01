#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
     
    cin.ignore();
    string line;
    
    int frequency[26] = {0};
    while(n--){
      getline(cin,line);
      for(int i = 0; i < line.size(); i++){
       
        if(line[i] >= 'a' && line[i] <= 'z'){
            line[i] -= 32;
        }
        if(line[i] >= 'A' && line[i] <= 'Z'){
            frequency[line[i] - 'A']++;
        }
      }
    }

    for(long long count = 10000000; count > 0; count--){
        for(int i = 0; i < 26; i++){
           if(frequency[i] == count){
              cout << char('A'+i)
                   << " "
                   << frequency[i]
                   <<"\n";
           }
        }
      }
} 