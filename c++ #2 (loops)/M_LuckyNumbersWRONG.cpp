#include <iostream>
using namespace std;

int main(){
    string x,y,small,big; cin>>x>>y;
    
    if(x>y)
    {
        small=y;
        big=x;
    }else{small=x; big=y;}
    
    int sizeeeee=size(small);

    for(int i = ; small<=big; i++)
    {
        if(small[sizeeeee-i]=='7' or small[sizeeeee-i]=='4')
        {
            cout<<small[sizeeeee-i];
        }
    }
    
    return 0;
}