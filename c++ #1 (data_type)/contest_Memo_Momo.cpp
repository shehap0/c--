#include <iostream>
using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;

    if (a%c==0 and b%c==0)
    {
        cout<<"Both";
        return 0;
    }
    if (a%c==0 and b%c!=0)
    {
        cout<<"Memo";
        return 0;
    }
    if (a%c!=0 and b%c==0)
    {
        cout<<"Momo";
        return 0;
    }
    if (a%c!=0 and b%c!=0)
    {
        cout<<"No One";
        return 0;
    }
    
    return 0;
}