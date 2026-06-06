#include <iostream>
using namespace std;

int main(){
    string word; cin>>word;

    for(int i=0; i<size(word) ;i++)
    {
        if(word[i]==',')
        {
            word[i]=' ';
        }
        
        if(isupper(word[i]))
        {
            word[i]=tolower(word[i]);
        }else{
            word[i]=toupper(word[i]);
            }
    }

    cout<<word;
    return 0;
}