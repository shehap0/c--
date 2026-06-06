#include <iostream>

using namespace std;

int main(){
    float discound,price_after_discound;
    cin >> discound >> price_after_discound;
    float original_price = price_after_discound / (1-(discound/100));
    cout << original_price << endl;
    return 0;
}