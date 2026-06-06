#include <iostream>
using namespace std;

void recursion(int arr[],int size, int i){
    if(i==size){return;}
    if(i==0)
    {
        cout<<arr[i]<<" ";
    }else{ cout<<max(arr[i],arr[i-1])<<" "; }
    return recursion(arr,size,i+1);
}

int main(){
    int size; cin>>size;
    int arr[size];

    for(int i=0;i<size;i++){    cin>>arr[i];   }

    recursion(arr,size,0);

    return 0;
}