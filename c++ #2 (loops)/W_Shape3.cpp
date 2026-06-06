#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;

    for(int i=1,z=0;i<=testcase;i++,z+=2)
    {
        for (int w = 0; w <testcase-i; w++)
        {
            cout<<" ";
        }
        for (int q=0;q<=z;q++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=1,z=(2*testcase)-1,shit=0;i<=testcase;i++,z-=2)
    {
        for(int w=0;w<shit; w++)
        {
            cout<<" ";
        }
        shit++;

        for (int q=0;q<z;q++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}