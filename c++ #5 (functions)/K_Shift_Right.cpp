#include <iostream>
using namespace std;

void getarray(int arr[],int size,int testcase){
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void shift_right(int arr[],int size,int testcase){
    for(int i=0;i<testcase;i++)
    {
        for(int q=0;q<size;q++)
        {
            swap(arr[q],arr[size-1]);
        }
    }
    for(int i=0;i<size;i++){cout<<arr[i]<<" ";}
}

int main(){
    int size,testcase; cin>>size>>testcase;
    int arr[size]; 
    
    getarray(arr,size,testcase);
    shift_right(arr,size,testcase);
    return 0;
}