#include <iostream>
using namespace std;

int main(){
    int count; cin>>count;
    int arr[count];

    for(int i=0;i<count;i++)
    {
        cin>>arr[i];
    }

    int police=0,crime=0;
    for(int i=0;i<count;i++)
    {
        if(arr[i]==-1)
        {
            if(police>0)
            {
                police--;
            }else{crime++;}
        }

        if(arr[i]!=-1)
        {
            police+=arr[i];
        }
    }
    
    cout<<crime;

    return 0;
}