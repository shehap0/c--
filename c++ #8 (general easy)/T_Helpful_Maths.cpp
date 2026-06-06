#include <iostream>
using namespace std;

int main(){
    string s; cin>>s;

    for (int i = 0; i <size(s); i+=2)
    {
        for (int y = i+2; y < size(s); y+=2)  // x + x + x
        {
            if(s[y]<s[i])
            {
                swap(s[y],s[i]);
            }
            
        }
        
    }
    
    cout<<s;

    return 0;
}