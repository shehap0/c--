#include <iostream>
using namespace std;

int main() {
    int numbers_of_testcases;
    cin >> numbers_of_testcases;
    
    while (numbers_of_testcases--)
    {
        long long number_of_members;
        cin >> number_of_members;
        
            cout<<(number_of_members*(number_of_members+1))/2<<"\n";
        
        
    }
    


    return 0;
}
