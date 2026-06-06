#include <iostream>
using namespace std;

void recursion(int arr[],int size,int i){
    if(size<=i){cout<<"YES"; return;}
    
    if(arr[i]!=arr[size]){cout<<"NO"; return;}

    recursion(arr,size-1,i+1);
}

int main(){
    int size; cin>>size;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    recursion(arr,size-1,0);

    return 0;
}