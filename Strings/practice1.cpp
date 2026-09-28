#include <iostream>
#include <string>

using namespace std;


int main(){
string s = "Competitive";

int i;

for(i = 0; s[i] != '\0'; i++){

}
cout << i <<endl;

cout << "Exo 2" <<endl;
string s2 = "CPE is my target";

for(int i = 0; i < s2.size(); i++){
    cout << s2[i] <<endl;
}

cout << "Exo 3: " <<endl;

string line;
int n;

cin >> n;
cin.ignore();

for(int i = 0; i < n; i++){
    getline(cin,line);
 }
}