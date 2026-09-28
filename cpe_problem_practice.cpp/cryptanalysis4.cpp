#include <iostream>
#include <string>
using namespace std;

int main(){
int n;
cin >> n;

cin.ignore();
while(n--){
    string line;
    getline(cin,line);

    for(int i = 0;i < line.size();i++){
        if(line[i] == ' '){
           line[i] -= ' ';
        }
        int count = 0;
        if(line[i] >= 'a' && line[i] <= 'z'){
            line[i] -= 32;
        }else{
            count++;
        }
        cout << line[i] << " " << count << "\n";
    }
}
return 0;


}