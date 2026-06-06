#include <iostream>
using namespace std;

int main(){
    int test; cin>>test;
    string str; cin>>str;

    string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/"; //size 62
    string original="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; //size 62

    if(test==1)//   original to key
    {
        for(int i=0; i <size(str); i++)         // Egypt
        {                                       // ZaoQR
            for (int y = 0; y < size(key); y++)
            {
                if(str[i]==original[y])
                {
                    cout<<key[y];
                    break;
                }
            }
        }
        
    }else   // key to original 
    {
        for(int i=0; i <size(str); i++)         // #@_!=.+-*/
        {                                       // 0123456789
            for (int y = 0; y < size(key); y++)
            {
                if(str[i]==key[y])
                {
                    cout<<original[y];
                    break;
                }
            }
        }
    }


    return 0;
}