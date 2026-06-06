#include <iostream>
using namespace std;

void recursion(int arr,int size,int target,int i){
    if(i==size)
    {
        if(sum=target){cout<<"YES";}else{cout<<"NO"}
    }
    recursion(arr,size,target,0);
}

int main(){
    int size,target; cin>>size>>target;
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    recursion(arr,size,target,0);

    return 0;
}