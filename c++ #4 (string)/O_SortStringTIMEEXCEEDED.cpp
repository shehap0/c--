#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x; cin>>x;
    string str; cin>>str;

    for(int i=0;i<x-1;i++)
    {
        for(int w=i; w<x; w++)
        {
            if(str[i]>str[w]){swap(str[i],str[w]);}
        }
    }
    
    cout<<str;

    return 0;
}