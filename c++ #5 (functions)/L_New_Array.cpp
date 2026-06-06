#include <iostream>
using namespace std;

void getarray1(int arr1[],int n){
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
}

void getarray2(int arr2[],int n){
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
}

void newarray(int newarr[],int arr1[],int arr2[],int n){
    for(int i=0;i<n;i++)
    {
        newarr[i]=arr2[i];
    }

    for(int i=n,q=0;i<n+n;i++,q++)
    {
        newarr[i]=arr1[q];
    }

    for(int i=0;i<n+n;i++)
    {
        cout<<newarr[i]<<" ";
    }
}

int main(){
    int n; cin>>n;
    int arr1[n],arr2[n],newarr[n+n];
    
    getarray1(arr1,n);
    getarray2(arr2,n);
    newarray(newarr,arr1,arr2,n);
    
    return 0;
}