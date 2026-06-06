#include <iostream>
using namespace std;

int main(){
    string name; 
    getline(cin,name);
    
    int po=name.find('\\');
    
    cout<<name.substr(0,po);
    return 0;
}