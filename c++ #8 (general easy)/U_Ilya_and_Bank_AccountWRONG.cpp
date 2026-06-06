#include <bits/stdc++.h>
using namespace std;

int main(){
    int balance; cin>>balance;

    if(balance>=0){cout<<balance; return 0;}

    int lastdigit=balance/10;
    int last=balance%10;
    int digitbeforelastdigit=balance%100;
    

    if(lastdigit>=digitbeforelastdigit)
    {
        cout<<digitbeforelastdigit;
    }else
    {
        cout<<lastdigit;
    }

    return 0;
}