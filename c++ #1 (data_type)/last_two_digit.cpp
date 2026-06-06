#include <iostream>
using namespace std;

int main() {
    long long int a, b, c, d;
    cin >>a>>b>>c>>d;


    long long int mult = (a % 100) * (b % 100) % 100;
    mult = mult * (c % 100)%100;
    mult = mult * (d % 100)%100;

    if (mult < 10)
        cout << "0" << mult << endl; 
    else
        cout << mult << endl;

    return 0;
}
