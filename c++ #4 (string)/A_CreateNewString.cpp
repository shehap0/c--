#include <iostream>
using namespace std;

int main(){
    string name1,name2; cin>>name1>>name2;
    string name3=name1+" "+name2;

    cout<<size(name1)<<" "<<size(name2)<<"\n"<<name3;
    return 0;
}