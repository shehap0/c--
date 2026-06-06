#include <iostream>
using namespace std;

int main(){
    int num; cin>>num;

    for(int i=2;i<=num;i++)
    {
        bool prime=true;
        for(int w=2;w<i;w++)
        {
            if(i%w==0)
            {
                prime=false;
                break;
            }
        }
        if(prime){cout<<i<<" ";}
    }
    return 0;
}