#include <iostream>
using namespace std;

void loop(int count,char ojbect)
{
    while(count--)
    {
        cout<<ojbect<<" ";
    }
    cout<<"\n";    
}

int main(){
    int testcase; cin>>testcase;
    while(testcase--)
    {
        int count; char object; cin>>count>>object;
        loop(count,object);
    }


    
    return 0;
}