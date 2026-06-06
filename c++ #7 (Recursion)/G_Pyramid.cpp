#include <iostream>
using namespace std;

void recursion(int n, int x){

    if(n==0){return ;}
    
    for (int i = 1; i <n; i++)
    {
        cout<<" ";
    }
    
    for (int i = 0; i < x; i++)
    {
        cout<<"*";
    }
    cout<<"\n";

    recursion(n-1,x+2);
}

int main(){
    int n; cin>>n;
    int x=1;
    recursion(n,x);
    return 0;
}