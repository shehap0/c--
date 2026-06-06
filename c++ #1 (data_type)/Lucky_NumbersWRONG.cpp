#include <iostream>
using namespace std;

int main() {
    int num; cin>>num;

    int first=num/10;
    int second=num%10; 

    if (second!=0 or (first%second==0 or second%first==0))
    {
        cout<<"YES";
    }else{cout<<"NO";}

    return 0;
}
