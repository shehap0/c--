#include <iostream>
using namespace std;

int main(){
    int size; cin >>size;
    string str; cin>>str;

    string newstr="";
    newstr.push_back(str[0]);
    int points=1;
    for(int i=1;i<size;i++)
    {
        if(str[i]!=str[i-1]){newstr.push_back(str[i]); points++;}
    }

    cout<<points;
    


    return 0;
}