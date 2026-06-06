#include <iostream>
#include <iomanip>
using namespace std;

void get_array(float arr[],int count){
    
    for(int i=0;i<count;i++)
    {
        cin>>arr[i];
    }
}

void average(float arr[],int count){
    double average=0;
    for(int i=0;i<count;i++)
    {
        average+=arr[i];
    }
    cout<<fixed<<setprecision(7)<<average/count; 
}

int main(){
    int count; cin>>count;
    float arr[count];

    get_array(arr,count);

    average(arr,count);
    
    return 0;
}