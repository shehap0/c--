#include <iostream>
using namespace std;

int recursion(int arr[][100], int x,int y, int row,int colums){

    if(row==x and colums==y){return arr[row][colums];}
    if(row>x or colums>y)
    {
        return INT_MIN;
    }
    int right= recursion(arr,x,y,row,colums+1);
    int down= recursion(arr,x,y,row+1,colums);

    return arr[row][colums] + max(right,down);
}

int main(){
    int x,y; cin>>x>>y;
    int arr[100][100];
    
    for(int i=0;i<x;i++)
    {
        for(int w=0;w<y;w++)
        {
            cin>>arr[i][w];
        }
    }

    cout<<recursion(arr,x,y,0,0);

    return 0;
}