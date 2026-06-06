#include <iostream>
using namespace std;

int main(){
    int x,y; cin>>x>>y;

    int arr[x][y];

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>arr[i][j];
        }
    }

    int num; cin>>num;
    bool test=false;

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(arr[i][j]==num)
            {
                test=true;
                break;
            }
        }
        if(test==true)
            {
                break;
            }
    }

    if(test==true){cout<<"will not take number";}else{cout<<"will take number";}
    
    return 0;
}