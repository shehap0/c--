#include <iostream>
using namespace std;

int main(){
    string x,y; cin>>x>>y;
    cout<<size(x)<<" "<<size(y)<<"\n";
    cout<<x+y<<"\n";
    swap(x[0],y[0]);
    cout<<x<<" "<<y;
    return 0;
}