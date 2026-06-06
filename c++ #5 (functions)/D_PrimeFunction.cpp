#include <iostream>
using namespace std;

void isprime(int n)
{
    bool test=true;
    for(int i=1; i<n ; i++)
    {
        if(n%i==0){test=true;}else{test=false; break;}
    }
        
    if(test)
    {
        cout<<"YES";
    }else{cout<<"NO";}
    cout<<"\n";
}
    


int main (){
    int testcase; cin>>testcase;
    while(testcase--)
    {
        int n; cin>>n;
        
        isprime(n);
    }
    
    return 0;
}