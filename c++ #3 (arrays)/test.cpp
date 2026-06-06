#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, y; 
    cin >> x >> y;
    string num; 
    cin >> num;

    // Check if the length of num is exactly x + y + 1
    if (num[x] == '-' && num.size() == x + y + 1) {
        bool isValid = true;
        for (int i = 0; i < num.size(); i++) {
            if (i != x && !isdigit(num[i])) {
                isValid = false;
                break;
            }
        }
        if (isValid) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else {
        cout << "No";
    }

    return 0;
}
