#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num; cin>>num;

    bool isprime = true;

    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0){
            isprime=false;
            break;
        }
    }

    if(isprime){
        cout<<"YES";
    }else{cout<<"NO";}

    return 0;
}
