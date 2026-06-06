#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char charactar;
    cin >> charactar;

    if (isupper(charactar))
    {
        char lowerchar=tolower(charactar);
        
        cout << lowerchar ;
    }
    if (islower(charactar))
    {
        char upperchar=toupper(charactar);
        
        cout << upperchar ;
    }
    
    

    return 0;
}