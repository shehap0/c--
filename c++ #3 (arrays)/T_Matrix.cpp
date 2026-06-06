#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int x=0,y=0;

    for(int i=0,j=0;i<n;i++,j++)
    {
        x+=arr[i][j];
    }

    for(int i=0,j=n-1;i<n;i++,j--)
    {
        y+=arr[i][j];
    }
    
    cout<<abs(x-y);

    return 0;
}