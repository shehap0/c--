#include <iostream>
using namespace std;

int main(){
    int x,test,max=0;
    cin>>x;

    for(int i=1;i<=x;i++)
    {
        cin>>test;
        if (test>max)
        {
            max=test;
        }
    }
    cout<<max;

    return 0;
}