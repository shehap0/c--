#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z; cin>>x>>y>>z;
    
    int big = max({x,y,z});
    int small = min({x,y,z});
    int mid=(x+y+z)-big-small;

    cout<<(big-mid)+(mid-small);

    return 0;
}