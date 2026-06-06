#include <iostream>
using namespace std;

int main(){
    int rows,columns; cin>>rows>>columns;
    int testcase; cin>>testcase;
    char arr[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int q = 0; q < columns; q++)
        {
            arr[i][q]='.';
        }
    }

    while(testcase--)
    {
        int r1,c1,r2,c2; cin>>r1>>c1>>r2>>c2;
        char c; cin>>c;
        // lol i didn't know he will give me r1 could be bigger than r2  
        for (int i = min(r1,r2)-1; i <max(r1,r2) ; i++)
        {
            for (int q = min(c1,c2)-1; q <max(c1,c2); q++)
            {
                arr[i][q]=c;
            }
        }
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int q = 0; q < columns; q++)
        {
            cout<<arr[i][q];
        }
        cout<<"\n";
    }


    return 0;
}