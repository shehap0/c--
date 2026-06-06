#include <iostream>
using namespace std;

int main(){
    int num; cin>>num;
    int test2=num-1;

    for (int i = 1; i < num; i++)
    {
        if(i%2==0 and test2%2==0)
        {
            cout<<"YES";
            return 0;
        }
        test2--;
    }
    cout<<"NO";

    return 0;
}