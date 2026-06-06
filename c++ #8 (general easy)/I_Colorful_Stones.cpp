#include <iostream>
using namespace std;

int main(){
    string stone,instruction; cin>>stone>>instruction;

    int steps=1,w=0; 
    for (int i = 0; i < size(stone) ; i++)
    {
        for (int q = w; q < size(instruction); q++)
        {
            if(stone[i]==instruction[q])
            {
                steps++; 
                w++;
                break;
            }
            w++;
        }
        if (i > size(instruction) )
        {
            break;
        }
        
    }
    
    cout<<steps;
    
    
    return 0;
}