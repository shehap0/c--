#include <bits/stdc++.h>
using namespace std;

int main(){
    int students,puzzles; cin>>students>>puzzles;
    int arr[puzzles];

    for (int i = 0; i < puzzles; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+puzzles);
    long long min_difference=arr[students-1]-arr[0];
    for(int i = 0; i <=puzzles-students; i++)
    {
        if(min_difference>arr[students-1+i]-arr[i])
        {
            min_difference=arr[students-1+i]-arr[i];
        }
    }
    
    cout<<min_difference;

    return 0;
}
