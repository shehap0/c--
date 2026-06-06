#include <iostream>
using namespace std;

int main(){
    int Limak,bob; cin>>Limak>>bob;
    
    int count=0;
    while(Limak<=bob)
    {
        Limak *= 3;
        bob *= 2;
        count++;
    }

    cout<<count;
    

    return 0;
}