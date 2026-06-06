#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i > 0; i++)
    {
        int password;
        cin >> password;

        if (password==1999)
        {
            cout<<"Correct\n";
            return 0;
        }else{cout<<"Wrong\n";}
    }
    
    return 0;
}