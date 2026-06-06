#include<bits/stdc++.h>
using namespace std;
int main() 
{
    // for fast input/output
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    bool prime[51] = { 0,0,0,0,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0 };
    int testcase;
	cin>>testcase;

	while(testcase--)
    {
        int num; cin>>num;
		if(prime[num]==1)
        {
		  cout<<"prime\n";
        }else{
		  cout<<"not prime\n";
        }
    } 
}