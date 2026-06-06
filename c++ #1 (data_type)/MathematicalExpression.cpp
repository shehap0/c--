#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    char operation,equal;
    cin>>a>>operation>>b>>equal>>c;

    switch (operation)
    {
    case '+':
        if (a+b==c)
        {
            cout<<"Yes";
        }else{cout<<a+b;}
        break;
    case '-':
        if (a-b==c)
        {
            cout<<"Yes";
        }else{cout<<a-b;}
        break;
    case '*':
        if (a*b==c)
        {
            cout<<"Yes";
        }else{cout<<a*b;}
        break;
    }
    
    return 0;
}