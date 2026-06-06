#include <iostream>
#include <algorithm> // For std::max and std::min
using namespace std;

int main() {
    int l1, r1, l2, r2;
    
    // Read input values
    cin >> l1 >> r1 >> l2 >> r2;
    
    // Calculate the start and end of the intersection
    int start = max(l1, l2);
    int end = min(r1, r2);
    
    // Check if the intersection is valid
    if (start <= end) {
        cout << start << " " << end << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}
