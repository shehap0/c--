#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    int count=0;
    while(testcase--)
    {
        int exist,total; cin>>exist>>total;
        if(total-exist>=2){count++;}
    }
    
    cout<<count;
    
    return 0;
}