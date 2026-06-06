#include <iostream>
using namespace std;

int recursion(int arr[],int size,int last_digit){
    if(last_digit==0){return 0;}
    return arr[size] + recursion(arr,size-1,last_digit-1);
};

int main(){
    int size,last_digit; cin>>size>>last_digit;
    int arr[size];

    for(int i=0;i<size;i++){cin>>arr[i];}

    cout<<recursion(arr,size-1,last_digit);

    return 0;
}