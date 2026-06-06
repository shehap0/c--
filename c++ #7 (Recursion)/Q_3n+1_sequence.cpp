#include <iostream>
using namespace std;

void recursion(int n,int count){
    if(n==1){cout<<count; return;}
    if(n%2==0)
    {
        n/=2;
    }else{ n*=3; n++;}

    recursion(n,count+1);
}

int main(){
    int n; cin>>n;

    recursion(n,1);
    return 0;
}