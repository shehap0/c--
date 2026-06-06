#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    // Finding maximum
    int max_num = num1;
    if (num2 > max_num) {
        max_num = num2;
    }
    if (num3 > max_num) {
        max_num = num3;
    }

    // Finding minimum
    int min_num = num1;
    if (num2 < min_num) {
        min_num = num2;
    }
    if (num3 < min_num) {
        min_num = num3;
    }

    // Output
    cout << min_num << " " << max_num << endl;

    return 0;
}
