#include <iostream>
using namespace std;

int main(){
    char ASCII;
    cin >> ASCII;

    if(isalpha(ASCII)){
            if (isupper(ASCII))
            {
                cout << "ALPHA\n"<<"IS CAPITAL";
                return 0;
            }else{cout << "ALPHA\n"<<"IS SMALL";
                return 0;}
    }

    if (isdigit(ASCII))
    {
        cout <<"IS DIGIT";
    }
    


    return 0;
}