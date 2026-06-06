#include <iostream>
using namespace std;

int main() {
    int x,sum=0; string num; cin>>x>>num;
    
    for(int i=0;i<x;i++)
    {
        sum += num[i]-'0';
    }
    cout<<sum;
    
    return 0;
}
