#include <iostream>
using namespace std;

void distinctNumbers(int arr[],int size,int Distinct_Numbers){
    for(int i=0;i<size;i++)
    {
        for(int q=i+1;q<size;q++)
        {
            if(arr[i]==arr[q]){Distinct_Numbers--; break;}
        }
    }

    cout<<Distinct_Numbers;
}

int main(){
    int size; cin>>size;
    int Distinct_Numbers=size;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    distinctNumbers(arr,size,Distinct_Numbers);
    return 0;
}