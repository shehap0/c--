#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string word; cin>>word;
    string shit=word;
    reverse(word.begin(),word.end());

    if(word==shit)
    {
        /* code */
        cout<<"YES";        
    }else{cout<<"NO";}
     
    return 0;
}