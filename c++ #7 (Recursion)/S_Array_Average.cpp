#include <iostream>
#include <iomanip>
using namespace std;

int recursion(float arr[],int size,int i){
    if(i==size){return 0;}

    return arr[i]+recursion(arr,size,i+1);
}

int main(){
    int size; cin>>size;
    float arr[size];

    for(int i=0 ; i<size;i++){
        cin>>arr[i];
    }
    float y=size;
    float x=recursion(arr,size,0)/y;
    cout<<fixed<<setprecision(6)<<x;
    return 0;
}