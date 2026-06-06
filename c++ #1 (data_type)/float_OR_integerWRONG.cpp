#include <iostream>
using namespace std;

int main(){
    string x;
    cin>>x;
    int n=x.length();

    if(x[n-1]=='0' and x[n-2]=='0' and x[n-3]=='0')
    {
        cout<<"int "<<x[n-7]<<x[n-6]<<x[n-5];
    }else{cout<<"float "<<x[n-7]<<x[n-6]<<x[n-5]<<" 0."<<x[n-3]<<x[n-2]<<x[n-1];}

    return 0;
}