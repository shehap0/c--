#include <iostream>
using namespace std;

void min_max(int arr[1000] ,int testcase){
    int min=arr[0];
    int max=arr[0];
    for(int i=0; i<testcase ; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
        if(max<arr[i])
        {
            max=arr[i];
        }        
    }
    cout<<min<<" "<<max;
}

int main(){
    int testcase; cin>>testcase;
    int arr[testcase];

    for(int i=0;i<testcase;i++)
    {cin>>arr[i];}

    min_max(arr,testcase);
    
    return 0;
}