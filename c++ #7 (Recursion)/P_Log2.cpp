#include <iostream>
using namespace std;

int recursion(long long n){
    if(n==1){return 0;}
    return recursion(n/2)+1;
}

int main(){
    long long n; cin>>n;
    int log=0;
    
    cout<<recursion(n);

    return 0;
}