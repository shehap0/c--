#include <iostream>
using namespace std;

int main(){
    int testcase; cin>> testcase;
    int arr[testcase];


    for (int i = 0; i < testcase; i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<testcase;i++)
    {
        if(arr[i]<=10)
        {
            cout<<"A["<<i<<"] = "<<arr[i]<<"\n";
        }
    }
    
    return 0;
}