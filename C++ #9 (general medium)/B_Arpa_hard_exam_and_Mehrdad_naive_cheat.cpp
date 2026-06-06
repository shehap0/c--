#include <iostream>
using namespace std;

int main() {
    long long n;    cin>>n;
    
    if(n==0)
    {
        cout<<1;
    }else
    {
        int last_digits[]={6,8,4,2};
        cout<<last_digits[n%4];
    }

    return 0;
}
