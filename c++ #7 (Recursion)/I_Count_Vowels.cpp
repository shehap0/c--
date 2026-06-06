#include <iostream>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);  
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int countVowels(const string &S,int index){
    if(index==S.length()) {return 0;}
    return isVowel(S[index])+countVowels(S,index+1);
}

int main(){
    string S; getline(cin, S); 
    cout<<countVowels(S, 0); 

    return 0;
}
