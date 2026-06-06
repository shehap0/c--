#include <iostream>
using namespace std;

// Recursive function to check if we can reach N
bool canReach(long long current_value, long long N) {
    // Base case: If we reached the target number N
    if (current_value == N) {
        return true;
    }
    // If current value exceeds N, we can't reach N
    if (current_value > N) {
        return false;
    }
    // Recursively try to multiply by 10 or 20
    return canReach(current_value * 10, N) || canReach(current_value * 20, N);
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long N;
        cin >> N;
        
        // Start with a value of 1 and check if we can reach N
        if (canReach(1, N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
