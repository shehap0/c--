#include <iostream>
using namespace std;



void summation(int x){
    for(int i=1;i<=x;i++)
    {
        if(x==i){cout<<i; break;}
        
        cout<<i<<" ";
    }
    
}

int main(){
    int x;
    cin>>x;

    summation(x);
}