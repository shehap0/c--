#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a>b)
    {
        
       if (a>c){cout<<a;}
       else if (b>c){cout<<c;}
       else{cout<<b;}
     
    }
    else if(b>a)
    {
       if (b>c){cout<<b;}
        else if (c>b){cout<<c;}
       
    }
    else if(a>c){
        if (a>b){cout<<a;}
        else if (b>c){cout<<b;}
        else{cout<<c;}
    }
    else if (c>a)
    {
        if (c>b){cout<<c;}
        else if (b>c){cout<<b;}
        }
    else if (b>c)
    {
        if (b>a){cout<<b;}
        else if (a>b){cout<<a;}
        else{cout<<c;}
    }
    else if (c>a){
        if (c>a){cout<<c;}
        else if (a>c){cout<<a;}
    }
    
    
    
    
    return 0;
}
