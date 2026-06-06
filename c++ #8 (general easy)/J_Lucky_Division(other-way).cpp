#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    // List of lucky numbers up to 1000
    vector<int> lucky_numbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    
    // Check if n is divisible by any lucky number
    for (int lucky : lucky_numbers) {
        if (n % lucky == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}
