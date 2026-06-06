#include <iostream>
using namespace std;

int main(){
    char N;
    cin>>N;

    if(N=='z'){
        cout<<"a";
    }else{
        char next_letter=N+1;
        cout<<next_letter;
    }


    return 0;
}