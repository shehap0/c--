#include <bits/stdc++.h>
using namespace std;

int main(){
    int num,count=0,sum=0; cin>>num;

    for(int i=1;i<=num;i++)
    {
        if(sum==num){cout<<count; break;}
        sum+=i;
        count++;
    }


    return 0;
}