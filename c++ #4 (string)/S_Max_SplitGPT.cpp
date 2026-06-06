#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    int size = str.size();
    int L = 0, R = 0, balanced = 0;

    // First pass to count the number of balanced substrings
    for (int i = 0; i < size; i++) {
        if (str[i] == 'L') {
            L++;
        } else if (str[i] == 'R') {
            R++;
        }
        
        // Check if we have a balanced substring
        if (L == R) {
            balanced++;
        }
    }

    cout << balanced << "\n";

    L = 0;
    R = 0;
    for (int i = 0; i < size; i++) {
        if (str[i] == 'L') {
            L++;
        } else if (str[i] == 'R') {
            R++;
        }

        if (L == R) {
            // Print the balanced substring
            cout << str.substr(i - 2 * L + 1, 2 * L) << "\n";
            // Reset counters
            L = 0;
            R = 0;
        }
    }

    return 0;
}
