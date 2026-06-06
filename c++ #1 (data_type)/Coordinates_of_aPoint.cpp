#include <iostream>
using namespace std;

int main(){
    float x,y;
    cin>>x>>y;

    if(x>0 and y>0){
        cout<<"Q1";
    }
    if(x<0 and y>0){
        cout<<"Q2";
    }
    if(x>0 and y<0){
        cout<<"Q4";
    }
    if(x<0 and y<0){
        cout<<"Q3";
    }
    if (x==0 and y==0)
    {
        cout<<"Origem";
    }
    if (x==0 and (y<0 or y>0))
    {
        cout<<"Eixo Y";
    }
    if (y==0 and (x<0 or x>0))
    {
        cout<<"Eixo X";
    }
    
    

    return 0;
}