#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string str; getline(cin,str);

    int x=0;
    for (int i = 0; i <= size(str); i++)
    {
        if(i == str.size() || str[i] == ' ')
        {
            reverse(str.begin()+x,str.begin()+i);
            
            cout<<str.substr(x,i-x+1);
            x=i+1;
            
        }
        
    }
    
    return 0;
}