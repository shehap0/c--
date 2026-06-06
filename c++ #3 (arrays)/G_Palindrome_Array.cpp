#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    int arr[testcase];

    
    for(int i=0;i<testcase;i++)
    {
        cin>>arr[i];
    }
    bool palindrome=false;
    for (int i = 0; i<testcase; i++)
    {
        if (arr[i]==arr[testcase-1-i])
        {
            palindrome=true;
        }else{palindrome=false;
        break;}
    }

    if (palindrome==true){
        cout<<"YES"<<endl;
    }else if(palindrome==false){cout<<"NO"<<endl;}
    
    return 0;
}