#include <iostream>
using namespace std;

int main(){
    int even=0,odd=0,positive=0,negative=0,test_num,num;
    cin>>num;

    for(int i=0; i<num ;i++)
    {
        cin>>test_num;
        if (test_num%2==0)
        {
            even++;          
        }
        if (test_num%2!=0)
        {
            odd++;          
        }
        if (test_num>0)
        {
            positive++;          
        }
        if (test_num<0)
        {
            negative++;
        }
    }
    cout<<"Even: "<<even<<"\n";
    cout<<"Odd: "<<odd<<"\n";
    cout<<"Positive: "<<positive<<"\n";
    cout<<"Negative: "<<negative<<"\n";

    return 0;
}