#include <iostream>
using namespace std;

int main(){
    int size,testcase; cin>>size>>testcase;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<testcase;i++)
    {
        
        for(int w=0;w<size;w++)
        {   int count=0;
            for(int q=w+1;q<size;q++)
            {
                if(arr[w]==arr[q]){count++;}
            }
            cout<<count<<"\n";
        }
       
    }



    return 0;
}