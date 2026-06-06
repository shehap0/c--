#include <iostream>
using namespace std;

int main(){
    string str; cin>>str;
    int size=str.size();         
    int L=0,R=0,balaned=0;
    for(int i = 0; i <= size;i++)
    {
        if(str[i]=='L'){L++;}else if(str[i]=='R'){i+=L; R=L; balaned++;}
    }

    cout<<balaned<<"\n";
    L=0,R=0; 
    for(int i = 0; i <=size; i++)
    {
        if(str[i]=='L'){L++;}else if(str[i]=='R')           
        {
            i+=L-1;                           //2 LLRR 
            R=L;
            while(L--)
            {
                cout<<'L';
            }
            while (R--)
            {
                cout<<'R';
            }
            L=0,R=0;
            balaned--; if(balaned!=0){cout<<"\n";}
            
        }
        
    }
    
    
    
    return 0;
}