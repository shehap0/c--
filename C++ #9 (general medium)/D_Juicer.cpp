#include <iostream>
using namespace std;

int main(){
    int testcase,max_size,max_oranges; cin>>testcase>>max_size>>max_oranges;
    int waste_section=0,current_waste=0;

    while(testcase--)
    {
        int orange_size; cin>>orange_size;

        if(orange_size>max_size)
        {
            // throws it away
            continue;
        }

        current_waste+=orange_size;

        if(current_waste>max_oranges)
        {
            waste_section++; 
            current_waste = 0; 
        }

    } 

    cout<<waste_section;

    return 0;
}