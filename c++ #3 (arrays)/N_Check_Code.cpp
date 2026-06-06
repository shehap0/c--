#include <iostream>
using namespace std;

int main(){
    long long x,y; cin>>x>>y;
    string num; cin>>num;

    for(int i=0;i<size(num);i++)
    {
        if(isalpha(num[i])){cout<<"No"; return 0;}
    }
    
    if(num[x]=='-' and size(num)==x+y+1)
    {
        cout<<"Yes";
    }else{cout<<"No";}
    
    return 0;
}