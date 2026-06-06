#include <iostream>
#include <string>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    while(testcase--)
    {
        string f1,f2; cin>>f1>>f2;
        // here was the problem i was getting the small string wrong (i should use built in functions)
        int min_size = min(f1.size(), f2.size());

        for(int i=0;i<min_size; i++)
        {
            cout<<f1[i]<<f2[i];
        }

        if (f1.size() >min_size) {
            cout << f1.substr(min_size);
        } else if (f2.size() >min_size) {
            cout << f2.substr(min_size);
        }

        cout<<"\n";
    }
    
    return 0;
}