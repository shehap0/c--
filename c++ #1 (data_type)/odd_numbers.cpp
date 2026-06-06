#include <bits/stdc++.h>
using namespace std;

int main(){
    int how_many_operations;
    cin >> how_many_operations;

    while(how_many_operations--){
        int x,y;
        cin >> x >> y;
        if(y%2==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}