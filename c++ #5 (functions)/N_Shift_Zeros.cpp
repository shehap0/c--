#include <iostream>
using namespace std;

void shiftZeros(int arr[],int size){
    for(int i = 0;i<size;i++)
    {
        if(arr[i]==0)
        {
            for(int q=i+1;q<size; q++)
            {
                if(arr[q]>0)
                {
                    swap(arr[i],arr[q]);
                    break;
                }
            }
        }
    }

    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size; cin>>size;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    shiftZeros(arr,size); 
    
    return 0;
}