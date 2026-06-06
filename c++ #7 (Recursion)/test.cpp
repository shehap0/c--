#include <iostream>
using namespace std;

void recursion(int arr[],int size, int i,int maxx){
    if(i==size){return;}
    if(i==0)
    {
        cout<<arr[i]<<" ";
    }else
    { 
        if(arr[i]>arr[0]){int max=arr[i]; 
            cout<<arr[i]<<" ";
        }else{    
        cout<<max(arr[i],arr[0])<<" ";}
    }
    return recursion(arr,size,i+1,maxx);
}

int main(){
    int size; cin>>size;
    int arr[size];

    for(int i=0;i<size;i++){    cin>>arr[i];   }
    int max=arr[0];
    recursion(arr,size,0,max);

    return 0;
}