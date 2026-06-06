#include <iostream>
using namespace std;

int main(){                             
    string s; cin>>s;   // char 26          // v
    string alphabet="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    
    int count=0,x=26; 
    for (int i = 0; i < size(s); i++)
    {
        for (int y = x,w=x; y <= 52; y++,w--)
        {
            
            if(s[i]==alphabet[y])
            {
                x=y;
                break;
            }
            if(s[i]==alphabet[w])
            {
                x=w;
                break;
            }
            count++;
        }
        
    }
    
    cout<<count;

    return 0;
}