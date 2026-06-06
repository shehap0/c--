#include <iostream>
#include <string>

int main() {
    // Input: a single number N
    std::string N;
    std::cin >> N;

    // Reverse the number and remove leading zeros using a loop
    std::string reversedN = "";
    bool leadingZero = true;

    for (int i = N.size() - 1; i >= 0; --i) {
        if (leadingZero && N[i] == '0') {
            continue;
        }
        leadingZero = false;
        reversedN += N[i];
    }

    if (reversedN.empty()) {
        reversedN = "0";
    }

    // Print the reversed number without leading zeroes
    std::cout << reversedN << std::endl;

    // Check if the original number is a palindrome using a loop
    bool isPalindrome = true;
    int len = N.size();
    for (int i = 0; i < len / 2; ++i) {
        if (N[i] != N[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    // Print "YES" if the number is a palindrome, otherwise "NO"
    if (isPalindrome) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
