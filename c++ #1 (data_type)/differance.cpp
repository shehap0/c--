#include <iostream>
using namespace std;

int main(){
    //X = (A * B) - (C * D)
    long long int A,B,C,D; cin>>A>>B>>C>>D;

    long long int frist_x =(A*B);
    long long int second_x =(C*D);
    long long int X=frist_x-second_x;
    cout<<"Difference = "<<X;

    return 0;
}