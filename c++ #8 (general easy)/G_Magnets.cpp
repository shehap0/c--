#include <iostream>
using namespace std;

int main(){
    int size; cin>>size;
    int arr[size];

    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }

    int groups=1;
    bool test=true; int group1=arr[0];
    for (size_t i = 1; i<size; i++)
    {
        if(group1!=arr[i])
        {
            group1=arr[i]; groups++;
        }
    }
    
    cout<<groups;

    return 0;
}