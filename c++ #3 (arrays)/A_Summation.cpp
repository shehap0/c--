#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;

    int arr[testcase];
    for(int i=0; i<testcase; i++)
    {
        cin>>arr[i];
    }
    long long summation=0;
    for (int w = 0; w < testcase; w++)
    {
        summation=summation+arr[w];
    }
    cout<<abs(summation)<<endl;
    

    return 0;
}