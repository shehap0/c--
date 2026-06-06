#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    for(int i=0 ; i<=num ; i+=2){
        if (num==1)
        {
            cout<<"-1";
            return 0;
        }
        if (i==0)
        {
            continue;
        }
        
        cout<<i<<"\n";
        
    }


    return 0;
}