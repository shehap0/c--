#include <iostream>
using namespace std;

int main(){
    // THIS CODE NOT FINISHED YET IT DONT PASS ALL THE TESTS 
    int Kirito_strength,testcase; cin>>Kirito_strength>>testcase;

    int arr[testcase*2];
    for (int i = 0; i < testcase*2; i++)
    {
        cin>>arr[i];
    }

    int failed[testcase*2];
    int count=0,w=0;

    for(int i = 0; i < testcase*2; i+=2)
    {
        if(Kirito_strength>arr[i])
        {
            Kirito_strength+=arr[i+1];
        }else{count++; failed[w]=arr[i]; failed[w+1]=arr[i+1]; w+=2;}
    }
    
    for (int i = 0; i < count*2; i+=2)
    {
        if(Kirito_strength>failed[i])
        {
            Kirito_strength+=failed[i+1];
        }else{cout<<"NO"; return 0;}
    }
    
    cout<<"YES";


    // while(testcase--)
    // {
    //     int enemy_strength,bonus; cin>>enemy_strength>>bonus;

    //     if(Kirito_strength>enemy_strength)
    //     {
    //         Kirito_strength+=bonus;
    //     }else{cout<<"NO"; return 0;}
        
    // }
    //cout<<"YES";
    

    return 0;
}