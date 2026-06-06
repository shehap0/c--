#include <bits/stdc++.h>
using namespace std;

int main(){
    int stringsize,steps; cin>>stringsize>>steps;
    string name; cin>>name;
    
    string result=name;
    for(int i=0;i<steps;)
    {
        
        string operation; cin>>operation;
        if(operation=="sort" or operation=="reverse" or operation=="substr")
        {
            int x,y; cin>>x>>y; i++;
            if(operation=="sort")
            {
                sort(result.begin()+x-1,result.begin()+y);
                continue;
            }
            if(operation=="reverse")
            {
                reverse(result.begin()+x-1,result.begin()+y);
                continue;
            }
            if(operation=="substr")
            {
                cout<<result.substr(x-1,y)<<"\n";
                continue;
            }
        }
        if(operation=="push_back"){char x; cin>>x; result.push_back(x); i++; continue;}
        
        if(operation=="pop_back"){result.pop_back(); i++; continue;}

        if(operation=="front" or operation=="back" or operation=="print")
        {   i++;
            if(operation=="front"){cout<<result.front()<<"\n"; continue;}
            if(operation=="back"){cout<<result.back()<<"\n"; continue;}
            if(operation=="print"){int x; cin>>x; cout<<result[x-1]<<"\n"; continue;}
        }
    }
    return 0;
}