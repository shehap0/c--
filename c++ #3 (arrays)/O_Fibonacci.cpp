#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;

    if(n==1){cout<<"0"; return 0;}
    if(n==2){cout<<"1"; return 0;}

    long long f1=0,f2=1,f3;
    for(int i=2;i<n; i++)
    {
        f3=f2+f1;
        f1=f2;
        f2=f3;
    }
    cout<<f3;

    return 0;
}