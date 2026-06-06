#include <iostream>
#include <cmath>
using namespace std;

void Equation(int x,int n){
    long long result=0;
    for(int i=0; i<=n ; i+=2)
    {
        if(i==0){result+=pow(x,i)-1; continue;}
        result+=pow(x,i);
    }
    cout<<result;
}

int main(){
    int x,n; cin>>x>>n;

    Equation(x,n);
    return 0;
}