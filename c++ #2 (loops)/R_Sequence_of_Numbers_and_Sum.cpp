#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i >= 0; i++)
    {
        int x,y,sum=0; cin>>x>>y;
        int small,big;
        if(x<=0 or y<=0)
        {
            return 0;
        }
        if(x>=y){small=y,big=x;}else{small=x,big=y;}
        
        for (int w=0;small<=big; small++)
        {
            cout<<small<<" ";
            sum+=small;
        }
        cout<<"sum ="<<sum<<"\n";
        
    }
    
    return 0;
}