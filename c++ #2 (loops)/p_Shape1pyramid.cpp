#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    for (int i = 1; i <= x; x--)
    {
        for (int y = 1; y <=x; y++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}