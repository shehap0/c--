#include <iostream>
using namespace std;

int recursion(long long n){
    if(n==0){return 1;}
    return n * recursion(n-1);
}

int main(){
    long long n; cin>>n;

    cout<<recursion(n);
    return 0;
}