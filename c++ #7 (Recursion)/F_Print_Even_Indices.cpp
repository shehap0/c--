#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void recursion(int arr[],int size,int i){
    if(i>=size){return ;}
    recursion(arr,size,i+2);
    cout<<arr[i]<<" ";
}

int main(){
    int size; cin>>size;
    int arr[size];

    for(int i=0;i<size; i++)
    {
        cin>>arr[i];
    }
    int i=0;
    recursion(arr,size,i);
    

    return 0;
}