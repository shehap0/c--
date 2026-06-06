#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    int arr[testcase];
    int smallest,postion;
    for(int i=0;i<testcase;i++)
    {
        cin>>arr[i];
    }
    smallest = arr[0];
    postion = 1;
    for (int w = 0; w <testcase; w++)
    {
        if(arr[w] < smallest)
        {
            smallest = arr[w];
            postion = w+1;
        }
    }
    cout<<smallest<<" "<<postion;

    return 0;
}