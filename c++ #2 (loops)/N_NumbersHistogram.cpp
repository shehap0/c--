#include <iostream> 
using namespace std;

int main(){
    char operation; cin>>operation;
    int testcase; cin>>testcase;

    for (int i = 0; i < testcase; i++)
    {
        int times; cin>>times;
        for (int w = 0; w < times; w++)
        {
            if(operation=='+')
            {
                cout<<operation;
            }
            if(operation=='-')
            {
                cout<<operation;
            }
            if(operation=='*')
            {
                cout<<operation;
            }
            if(operation=='/')
            {
                cout<<operation;
            }
        }
        cout<<"\n";
    }
    
    return 0;
}