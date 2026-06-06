#include <iostream>
using namespace std;

int recursion(int n,int r){
    if(r==0 or r==n){return 1;}

    return recursion(n-1,r-1)+recursion(n-1,r);
}

int main(){
    int n,r; cin>>n>>r;

    cout<<recursion(n,r);
    return 0;
}