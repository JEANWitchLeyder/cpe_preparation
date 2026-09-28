#include <iostream>
using namespace std;

 int getLength(char A[]){
    int i;
    int length = 0;
    for(i = 0; A[i] != '\0';i++){
      length++;
    }
    return length;
 }

void toUppercase(char A[]){
    int i;
    for(i = 0; A[i] != '\0'; i++){
        if(A[i] >= 'A' && A[i] <= 'Z'){
            continue;
        }
        if(A[i] >= 'a' && A[i] <= 'z'){
           A[i] -= 32;
        }
    }
}

 void toLowerCase(char A[]){
 for(int i = 0; A[i] != '\0'; i++){
    if(A[i] >= 'a' && A[i] <= 'z'){
        continue;
    }
    if(A[i] >= 'A' && A[i] <= 'Z'){
        A[i] += 32;
    }
 }
 }

 int countWords(char A[]){
    int count = 1 , i;
    for(i = 0; A[i] != '\0'; i++){
        if(A[i] == ' ' && A[i+1] != ' '){
            count++;
        }
    }
    return count;
 }

 int compareString(char A[], char B[]){
    int i = 0;
    for(i = 0; A[i] != '\0' && B[i] != '\0'; i++){
        if(A[i] != B[i]){
            break;
        }
    }

    if(A[i] == B[i]){
     return 0;
    }else if(A[i] < B[i]){
       return -1;
    }else{
      return 1;
    }

 }
 
 void reverseString(char A[]){
    int i,j;
    char temp;
    for(i = 0; A[i] != '\0'; i++){
      
    }
    j = i - 1;
    for(i = 0; i < j; i++ , j--){
      temp = A[i];
      A[i] = A[j];
      A[j] = temp;
    }

 }
 
 bool isPalyndrome(char A[]){
    int i,j;
    for(i = 0; A[i] != '\0'; i++){
       
    }
    j = i - 1;
    for(i = 0; i < j; i++, j--){
        if(A[i] != A[j]){
            break;
        }
    }
     return A[i] == A[j];
 }
 
 int countVowels(char A[]){
   int countVowel = 0;
  for(int i = 0; A[i] != '\0'; i++){
     // first , convert the word to lowercase
     if(A[i] == 'A' && A[i] <= 'Z'){
        A[i] += 32;
     }
     if(A[i] == 'a' || A[i] == 'e' || A[i] == 'o' || A[i] == 'u'|| A[i] == 'i'){
        countVowel++;
     }
  }
 return countVowel;
 }
 int countConsonants(char A[]){
    int countConsonant = 0;
    for(int i = 0; A[i] != '\0'; i++){
       // first , convert the word to lowercase
       if(A[i] == 'A' && A[i] <= 'Z'){
          A[i] += 32;
       }
       if(A[i] == 'b' || A[i] == 'c' || A[i] == 'd' || A[i] == 'f'|| A[i] == 'g' 
        || A[i] == 'h' || A[i] == 'j' || A[i] == 'k' || A[i] == 'l'|| A[i] == 'm'
        || A[i] == 'n' || A[i] == 'p' || A[i] == 'q' || A[i] == 'r'|| A[i] == 's'
        || A[i] == 't' || A[i] == 'v' || A[i] == 'w' || A[i] == 'z'
       ){
          countConsonant++;
       }
    }
    return countConsonant;
 }
 
int main(){
    char A[] = "madam";
    cout << getLength(A) <<endl;

    toUppercase(A);
    
    cout << "The character array after applying uppercase: \n";
    cout << A << endl;

    char B[] = "PeTER";
    toLowerCase(B);
    cout << B << endl;

    char C[] = "I love CPE";
    cout << countWords(C) << " words."<<endl;
    
    char D[] = "abcdef";

    char E[] = "abcdef";

    if(compareString(D,E) == 0){
       cout << "Equal\n";
    }else if(compareString(D,E) == -1){
        cout << "Smaller\n";
    }else{
        cout << "Greater\n";
    }

    cout << "Reverse String: \n";
    
    char string1[] = "dfgwe";
    
    char string2[] = "rtety";

    reverseString(string1);
    reverseString(string2);

    cout << string1 << '\n';
    cout << string2 << '\n';

    
    char palyndString[] = "oooo";
    if(isPalyndrome(palyndString)){
        cout << "Yes it is\n";
    }else{
        cout << "No, it isn't\n";
    }

    char string3[] = "aeiou";
    cout << countVowels(string3) <<endl;
    
    char string4[] = "bcdf";
    cout << countConsonants(string4) << endl;

}