#include <iostream>
using namespace std;

int main(){                                
    int rows,columns; cin>>rows>>columns;

    char arr[100][100];
    for (int i = 0; i < rows; i++)
    {
        for (int w = 0; w <columns; w++)
        {
            cin>>arr[i][w];
        }
    }
    
    // lets get to the hard part i fucking hate this
    int count=0,test=0;
    //snake pass in rows
    for (int i = 0; i < rows; i++)
    {
        for (int w = 0; w < columns; w++)
        {
            if(arr[i][w]=='S')
            {
                test=0;
                for(int x = 0; x < columns; x++)
                {
                    if(arr[i][x]=='S')
                    {continue;}
                    // restoring the cake we mark by # 
                    arr[i][x]='.';
                }
                break;
            }
            if(arr[i][w]=='.')
            {
                test++;
                // mark the cake we eat
                arr[i][w]='#';
            }
        }
        count+=test;
        test=0;
    }

    // snake pass in columns
    for (int i = 0; i < columns; i++)
    {
        for (int w = 0; w < rows; w++)
        {
            if(arr[w][i]=='S')
            {
                test=0;
                for(int x = 0; x < rows; x++)
                {
                    if(arr[x][i]=='S')
                    {continue;}
                    // restoring the cake we mark by # 
                    arr[x][i]='.';
                }
                break;
            }
            if(arr[w][i]=='.')
            {
                test++;
                // mark the cake we eat
                arr[w][i]='#';
            }
        }
        count+=test;
        test=0;
    }
    

    cout<<count;


    return 0;
}