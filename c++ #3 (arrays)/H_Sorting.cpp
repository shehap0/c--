#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    int arr[testcase];

    for(int i=0;i<testcase;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+testcase);
    for(int i=0;i<testcase;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}