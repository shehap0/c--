#include <iostream>
using namespace std;

int main(){
    long long n; cin>>n;
    if(n%4==0 or n%7==0){cout<<"YES"; }else
    {
        while(n!=0)
        {
            if(n%10!=4 and n%10!=7)
            {
                cout<<"NO";   
                return 0;
            }
            n/=10;
        }
    
    cout<<"YES";
    }

    return 0;
}