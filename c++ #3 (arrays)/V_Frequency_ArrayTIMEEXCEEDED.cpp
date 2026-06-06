#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); // Disable synchronization with C stdio for faster IO
    cin.tie(nullptr);
    
    int testcase,x; cin>>testcase>>x;
    int arr[testcase];

    for(int i=0;i<testcase;i++){cin>>arr[i];}


    for(int i=0;i<x;i++)
    {
        int count=0;
        for(int w=0;w<testcase;w++)
        {
            if(arr[i]==arr[w]){count++;}
        }
        cout<<count<<"\n";
    }
    
    return 0;
}