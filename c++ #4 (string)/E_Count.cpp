#include <iostream>
using namespace std;

int main() {
    int sum=0; string num; cin>>num;
    
    for(int i=0;i<size(num);i++)
    {
        sum += num[i]-'0';
    }
    cout<<sum;
    
    return 0;
}
