#include <iostream>
using namespace std;

int main(){
    long long testcase,packs; cin>>testcase>>packs;
    long long distressed_kids=0;

    while(testcase--)
    {
        char test; cin>>test;
        long long num; cin>>num;

        if(test=='+'){packs+=num;}
        else
        {
            if(packs>=num)
            {
                packs-=num;
            }else{distressed_kids++;}
        }
    }
   
   cout<<packs<<" "<<distressed_kids;

    return 0;
}