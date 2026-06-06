#include <iostream>
#include <vector>
using namespace std;

int countNonDecreasingSubarrays(const vector<int>& array) {
    int n = array.size();
    int count = 0;

    for (int i = 0; i < n; ++i) {
        int length = 1;  // Initialize the length of the current non-decreasing subarray

        for (int j = i + 1; j < n; ++j) {
            if (array[j] >= array[j - 1]) {
                length++;
            } else {
                break;
            }
        }

        // Count all subarrays ending at each position in the current non-decreasing sequence
        count += length * (length + 1) / 2;
        i += length - 1;  // Move to the end of the current non-decreasing subarray
    }

    return count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> array(N);
        for (int i = 0; i < N; ++i) {
            cin >> array[i];
        }

        cout << countNonDecreasingSubarrays(array) << endl;
    }

    return 0;
}
