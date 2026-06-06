#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int testcase,searchcase,num; cin>>testcase>>searchcase;
    int arr[testcase];
    
    for(int i=0;i<testcase;i++){cin>>arr[i];}

    sort(arr,arr+testcase);
    for(int i=0;i<searchcase;i++)
    {
        cin>>num;
        
        if(binary_search(arr,arr+testcase,num)){cout<<"found\n";}else{cout<<"not found\n";}
    }

    /*    for(int i=0;i<searchcase;i++)
    {
        bool test=false;
        cin>>num;
        for(int w=0;w<testcase;w++)
        {
            if(arr[w]==num)
            {
                cout<<"found\n";
                test=true;
                break;
            }
        }
        if(test==false){cout<<"not found\n";}
    }
    */
    return 0;
}