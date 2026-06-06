#include <iostream>
using namespace std;

int main(){
    string str; getline(cin,str);
    int alpha=0,words=0;
    for(int i=0;i<size(str);i++)
    {
        if(isalpha(str[i]))
        {
            alpha++;
        }else{
            if(alpha>=1)
            {
                words++;
                alpha=0;
            }
        }
    }

    // If the last character was part of a word, count it
    if (alpha >= 1) {
        words++;
    }


    cout<<words;


    return 0;
}