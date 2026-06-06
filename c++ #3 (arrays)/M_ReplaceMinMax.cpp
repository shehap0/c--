#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    int arr[testcase];

    for(int i=0;i<testcase;i++)
    {
        cin>>arr[i];
    }

    int small=arr[0];
    int smallX;
    int big=arr[0];
    int bigX;
    for(int i=0;i<testcase; i++)
    {
        if(small>arr[i]){small=arr[i]; smallX=i;} 
        if(big<arr[i]){big=arr[i]; bigX=i;}
    }

    swap(arr[smallX],arr[bigX]);

    for(int i=0;i<testcase;i++)
    {
        cout<<arr[i]<<" ";
    }
    
        
    return 0;
}