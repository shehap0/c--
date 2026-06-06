#include <iostream>
using namespace std;

int main(){
    char position; cin>>position ;
    string s; cin>>s;
    string original="qwertyuiopasdfghjkl;zxcvbnm,./";

    for(int i = 0; i <size(s); i++)
    {
        if(position=='R')
        {
            for(int y = 0;y<size(original); y++)
            {
                if(s[i]==original[y])
                {
                    cout<<original[y-1];
                    break;
                }
            }
        }else
        {
            for(int y = 0;y<size(original); y++)
            {
                if(s[i]==original[y])
                {
                    cout<<original[y+1];
                    break;
                }
            }
        }
    }
    




    return 0;
}
