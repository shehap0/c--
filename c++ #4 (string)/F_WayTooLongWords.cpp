#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    for(int i=0;i<testcase;i++)
    {
        string word; cin>>word;

        if(size(word)<=10){cout<<word<<"\n";}else
        {
            cout<<word[0]<<size(word)-2<<word[size(word)-1]<<"\n";
        }
    }
    
    return 0;
}