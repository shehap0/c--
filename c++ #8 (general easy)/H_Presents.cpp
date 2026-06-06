#include <iostream>
using namespace std;

int main(){
    int size; cin>>size;
    int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        cin>>arr[i];   
    }

    for (size_t i = 1; i <= size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if  (i == arr[j])
            {
                cout<<j+1<<" ";
                break;
            }
        }
        
    }
    
    

    return 0;
}