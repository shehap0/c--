#include <iostream>
using namespace std;

int main(){
    int a,c;
    char b;
    cin>>a>>b>>c;

    switch (b)
    {
    case '>':
        if (a>c)
        {
            cout<<"Right";
        }else{cout<<"Wrong";}
        
        break;
    case '<':
        if (a<c)
        {
            cout<<"Right";
        }else{cout<<"Wrong";}
        break;
    case '=':
        if (a==c)
        {
            cout<<"Right";
        }else{cout<<"Wrong";}
        break;
    }

    return 0;
}