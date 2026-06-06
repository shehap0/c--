#include <iostream>
using namespace std;

int main(){
    int testcase;
    cin >> testcase;

    int arr[testcase];
    for (int i = 0; i <testcase; i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<testcase;i++){
    if (arr[i]>=1)
    {
        arr[i]=1;
    }else if (arr[i]<=-1)
    {
        arr[i]=2;
    }else{arr[i]=0;}
    }
    for (int i = 0; i <testcase; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}