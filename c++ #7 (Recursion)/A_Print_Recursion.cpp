#include <iostream>
using namespace std;

void Recursion(int num){
    if(num==0){return;}
     cout<<"I love Recursion\n";
     Recursion(num-1);
 }

 int main(){
     int num; cin>>num;

     Recursion(num);

     return 0;
 }
