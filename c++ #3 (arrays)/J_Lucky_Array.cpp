#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;

    int arr[testcase];
    for(int i=0;i<testcase;i++)
    {
        cin>>arr[i];
    }

    int small=arr[0];
    for(int a=0;a<testcase;a++)
    {
        if(arr[a]<=small)
        {
            small=arr[a];
        }
    }    

    int frequency=0;
    for(int w=0;w<testcase;w++)
    {
        if(arr[w]==small)
        {
            frequency++;
        }        
    }
    
    if(frequency%2==0)
    {
        cout<<"Unlucky";
    }else{cout<<"Lucky";}

    return 0;
}