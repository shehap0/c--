#include <iostream>
using namespace std;

int main(){
    int first_num,second_num;
    cin >> first_num;

    char operation;
    cin >> operation>>second_num;

    if (operation == '+')
    {
        cout << first_num + second_num;
       
    }else if(operation == '-'){
            cout <<first_num - second_num;
          
    }else if(operation == '*'){
            cout<< first_num*second_num;
           
    }else if(operation == '/'){
        cout << first_num/second_num;
        
    }
    
    
    return 0;
}