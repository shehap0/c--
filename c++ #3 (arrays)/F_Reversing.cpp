#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    int arr1[testcase];
    int arr2[testcase];

    for(int i=0;i<testcase;i++)
    {
        cin>>arr1[i];
    }


    for(int i=0;i<(testcase);i++)
    {
        arr2[i]=arr1[testcase-1-i];
    }


    for(int i=0;i<testcase;i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}