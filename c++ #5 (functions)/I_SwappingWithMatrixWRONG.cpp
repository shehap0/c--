#include <iostream>
using namespace std;
void get_array(int arr[500][500],int n,int x,int y){
    for(int i=0; i<n; i++)
    {
        for(int q=0; q<n; q++)
        {
            cin>>arr[i][q];
        }
    }
}

void swap_rows(int arr[500][500],int n,int x,int y){
    for(int i=0; i<n; i++)
    {
        swap(arr[x][i],arr[y][i]);
    }
}

void swap_column(int arr[500][500],int n,int x,int y){
    for(int i=0; i<n; i++)
    {
        swap(arr[i][x],arr[i][y]);
    }
}

void output_array(int arr[500][500],int n){
    for(int i=0; i<n; i++)
    {
        for(int q=0; q<n; q++)
        {
            cout<<arr[i][q]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int n,x,y; cin>>n>>x>>y;
    int arr[n][n];

    get_array(arr,n,x,y);

    swap_rows(arr,n,x,y);
    
    swap_column(arr,n,x,y);

    output_array(arr,n);
    return 0;
}