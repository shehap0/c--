#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    
    while(testcase--)
    {
        string num; cin>>num;
        if(num.find("101") != string::npos or num.find("010") != string::npos)
        {
            cout<<"Good"<<"\n";
        }else{cout<<"Bad"<<"\n";}
        
    }
    return 0;
}