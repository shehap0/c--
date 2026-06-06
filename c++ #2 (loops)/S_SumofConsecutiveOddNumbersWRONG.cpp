#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;

    for (int i = 0; i<testcase; i++)
    {
        int x,y,small,big,sumodd=0; cin>>x>>y;
        if(x>=y)
        {
            small=y+1;
            big=x-1;
        }else{small=x+1; big=y-1;}

        
        for(int q=0; small<=big; small++)
        {
            if(small%2!=0)
            {
                sumodd+=small;
            }
        }
        cout<<sumodd<<"\n";
    }
    
    return 0;
}