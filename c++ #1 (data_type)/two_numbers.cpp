#include <iostream>
#include <cmath>
using namespace std;
int main(){

    float A,B;
    cin>>A>>B;
    
    cout<<"floor "<<A<<" / "<<B<<" = "<<floor(A/B);
    cout<<"\nnceil "<<A<<" / "<<B<<" = "<<ceil(A/B);
    cout<<"\nround "<<A<<" / "<<B<<" = "<<round(A/B);
    //floor 10 / 3 = 3
    //ceil 10 / 3 = 4
    //round 10 / 3 = 3
    
    return 0;
}