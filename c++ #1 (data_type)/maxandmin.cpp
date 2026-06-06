#include <iostream>
using namespace std;

int main(){
    int first_num,second_num,third_num;
    cin >> first_num >> second_num >> third_num;

    int max_num=first_num;
    if (max_num<second_num){
        max_num=second_num;
    }
    if (max_num<third_num)
    {
        max_num=third_num;
    }

    int min_num=first_num;
    if (min_num>second_num){
        min_num=second_num;
    }
    if (min_num>third_num)
    {
        min_num=third_num;
    }
    
    cout <<min_num<<" "<<max_num;
    return 0;
    
}