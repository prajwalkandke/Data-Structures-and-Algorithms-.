//vowel or not
#include<iostream>
using namespace std;
 
#include <iostream>
using namespace std;
  
int main(){
    char c;
 cout << "Enter a character\n";
 cin >> c;
    // Check if input alphabet is member of set{A,E,I,O,U,a,e,i,o,u}
    if(c == 'a' || c == 'e' || c =='i' || c=='o' || c=='u' || c=='A'
          || c=='E' || c=='I' || c=='O' || c=='U'){
        cout << c <<" is a Vowel\n";
    } else {
        cout << c <<" is a Consonant\n";
    }
 
    return 0;
}
