#include <bits/stdc++.h>
using namespace std;

void recursion(int num, string &binary){
    if(num==0){return;}
    recursion(num/2,binary);
    if(num%2==0){binary.push_back('0');}else{binary.push_back('1');}
}

int main(){
    int testcase; cin>>testcase;

    while(testcase--)
    {
        int num; cin>>num;
        string binary="";
        recursion(num,binary);
        cout<<binary;
        if(testcase>0){cout<<"\n";}
    }
    
        return 0;
}