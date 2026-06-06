#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    int arr[testcase];
    for (int i = 1; i <= testcase; i++)
    {
        cin >> arr[i];
    }
    int searching_num;
    cin >> searching_num;

    for (int i = 0; i < testcase; i++)
    {
        if (arr[i] == searching_num)
        {
            cout <<i-1;
            return 0;
        }
    }
    cout<<"-1";
    
    return 0;
}