#include <iostream>
using namespace std;

void recursion(int num){
    cout<<num;
    if (num==1){return;}
    cout<<" "; 
    recursion(num-1);
}

int main(){
    int num; cin>>num;

    recursion(num);
    return 0;
}