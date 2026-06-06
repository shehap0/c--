#include <iostream>
using namespace std;

int main(){
    int x,testcase; cin>>x>>testcase;
    int arr[x];

    for(int i=0;i<x;i++){cin>>arr[i];}
    
    for(int i=0;i<testcase;i++)
    {
        int x,y,sum=0; cin>>x>>y;
        while(x<=y)
        {
            sum+=arr[x-1];
            x++;
        }
        cout<<sum<<"\n";
    }
    
    
    return 0;
}