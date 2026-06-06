#include <iostream>
using namespace std;

int main(){
    int x,y,divider,smallest; cin>>x>>y;
    if(x>=y)
    {
        smallest=y;
    }else{smallest=x;}
    
    for (int i=1;i<=smallest;i++)
    {
        if (x%i==0 and y%i==0)
        {
            divider=i;
        }
    }

    cout<<divider;
    
    return 0;
}