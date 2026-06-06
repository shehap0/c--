#include <iostream>
using namespace std;

void recursion(int num){
    if(num==0){return; }
    recursion(num/10);
    cout<<num%10<<" ";
}


int main(){
    int testcase; cin>>testcase;
    int num;
    
    while (testcase--)
    {
        cin>>num;   
        if(num==0){
            cout<<0;
        }else{recursion(num);}
        
        if(testcase>0){cout<<"\n";}
    }
    
    return 0;
}