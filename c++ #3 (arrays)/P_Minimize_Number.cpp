#include <iostream>
using namespace std;

int main(){
    int testcase,test=0; cin>>testcase;
    int arr[testcase];
    bool op=true;

    for(int i=0;i<testcase;i++)
    {
        cin>>arr[i];
    }

    while(true)
    {
        for(int w=0;w<testcase;w++){if(arr[w]%2!=0){op=false; break;}}

        if(op==false){break;}
        
        for(int w=0;w<testcase;w++)
        {
            arr[w]/=2;
        }
        test++;
    }
    
    cout<<test;

    return 0;
}