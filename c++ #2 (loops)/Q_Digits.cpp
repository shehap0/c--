#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;
     for(int i=0;i<testcase;i++)
     {
        string num; cin>>num;
        for (int w = 0; w <size(num); w++)
        {
            cout<<num[size(num)-w-1]<<" ";
        }
        cout<<"\n";
     }
     
    return 0;
}