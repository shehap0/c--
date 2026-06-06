#include <bits/stdc++.h>
using namespace std;

int main(){
    int size; cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    long long sereja=0,dima=0;
    int i=0,L=0,R=1;
    bool test=true;
    while(i<size)
    {
        int left=arr[L],right=arr[size-R];
        if(left>right)
        {
            if(test)
            {
            sereja+=left;
            L++,i++;
            test=false;
            }else
            {
                dima+=left;
                L++,i++;
                test=true;
            }
        
        }else
        {
            if(test)
            {
            sereja+=right;
            R++,i++;
            test=false;
            }else
            {
                dima+=right;
                R++,i++;
                test=true;
            }
        }
    }
    
    cout<<sereja<<" "<<dima;

    return 0;
}