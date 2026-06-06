#include <iostream>
using namespace std;

int main(){
    int a,b; cin>>a>>b;
    if (a==0 and b==0)
    {
        cout<<"NO";
        return 0;
    }
    
    if(a==b or a-1==b or a==b-1)
    {
        cout<<"YES";
    }else{cout<<"NO";}
    

    return 0;
}