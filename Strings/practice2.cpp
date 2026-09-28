#include <iostream>
using namespace std;

int main(){
  char input;
  cin >> input;

  if(input >= 'A' && input <= 'Z'){
    cout << "UPPERCASE" <<endl;
  }else if(input >= 'a' && input <= 'z'){
    cout << "LOWERCASE" <<endl;
  }else if(input >= '0' && input <= '9'){
    cout <<"DIGIT" <<endl;
  }else{
    cout <<"OTHER"<< endl;
  }
}