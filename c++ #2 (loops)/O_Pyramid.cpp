#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    for (int i = 1; i <= x; i++)
    {
        for (int y=1;y<=i;y++)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }
    

    return 0;
}