#include <iostream>
using namespace std;

int main(){
    

    string str; cin>>str;
    string strsub="hello";
    
    int points=0,y=0;
    for(int i = 0; i <strsub.size(); i++)
    {   
        
        for (int w=0 ; y <str.size();y++)
        {      // hello    hlelo  
            y++;         
            if(strsub[i]==str[y])
            {
                y++;
                points++;
                break;
            }
        }
    }
    
    
    if(points==5){cout<<"YES";}else{cout<<"NO";}

    return 0;
}