#include <iostream>
using namespace std;

void recursion(int arr1[][100],int arr2[][100],int rows,int columns,int x,int y){
    if(x>=rows){return ;}

    if(y<columns)
    {
        cout<<arr1[x][y]+arr2[x][y]<<" ";
        recursion(arr1,arr2,rows,columns,x,y+1);
    }else{cout<<"\n";
        recursion(arr1,arr2,rows,columns,x+1,0);
    }
}

int main(){
    int rows,columns; cin>>rows>>columns;
    int arr1[100][100],arr2[100][100];

    for (int i = 0; i < rows; i++)
    {
        for (int w = 0; w < columns; w++)
        {
            cin>>arr1[i][w];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int w = 0; w < columns; w++)
        {
            cin>>arr2[i][w];
        }
    }

//  cout<<arr1[0][0]+arr2[0][0]<<arr1[0][1]+arr2[0][1]<<arr1[0][2]+arr2[0][2];
//  cout<<arr1[1][0]+arr2[1][0]<<arr1[1][1]+arr2[1][1]<<arr1[1][2]+arr2[1][2];

    recursion(arr1,arr2,rows,columns,0,0);

    return 0;
}