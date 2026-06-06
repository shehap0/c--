#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcase; 
    cin >> testcase;
    
    while (testcase--) {
        int size; 
        cin >> size;
        int arr[size];
        
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        
        // Initialize the smallest sum to a large value
        int small = INT_MAX;
        // Track the minimum value of Ai - i
        int minAi_minus_i = arr[0] - 0;
        
        for (int j = 1; j < size; j++) {
            // Calculate the result for the current j and the best i found so far
            small = min(small, arr[j] + j + minAi_minus_i);
            // Update the best Ai - i for future j values
            minAi_minus_i = min(minAi_minus_i, arr[j] - j);
        }
        
        cout << small << "\n";
    }
    
    return 0;
}
