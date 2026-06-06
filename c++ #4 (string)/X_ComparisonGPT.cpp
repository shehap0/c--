#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    std::string smallest = S;  // Initialize the smallest string as the original string

    // Iterate over all possible splits
    for (size_t i = 1; i < S.length(); ++i) {
        std::string X = S.substr(0, i);
        std::string Y = S.substr(i);
        
        std::sort(X.begin(), X.end());
        std::sort(Y.begin(), Y.end());
        
        std::string combined = X + Y;
        if (combined < smallest) {
            smallest = combined;
        }
    }

    std::cout << smallest << std::endl;
    return 0;
}
