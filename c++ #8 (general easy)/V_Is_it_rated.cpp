#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    int arr[testcase*2];

    for(int i = 0; i <testcase*2; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < testcase*2; i+=2)
    {
        if(arr[i]!=arr[i+1])
        {
            cout<<"rated";
            return 0;
        }
    }

    for (int i = 0; i < testcase*2; i+=2)
    {
        for (int w = i+2; w < testcase*2; w+=2)
        {
            if(arr[i] < arr[w])
            {
                cout<<"unrated";
                return 0;
            }
        }
    }
    
    
    cout<<"maybe";
     

    return 0;
}