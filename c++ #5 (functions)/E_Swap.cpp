#include <iostream>
using namespace std;

void swap(int x,int y){
    cout<<y<<" "<<x;
}

int main(){
    int x,y; cin>>x>>y;

    swap(x,y);
}