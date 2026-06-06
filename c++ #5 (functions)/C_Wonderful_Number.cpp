#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is odd
bool isOdd(int N) {
    return N % 2 != 0;
}

// Function to check if the binary representation of a number is a palindrome
bool isBinaryPalindrome(int N) {
    string binaryRep = "";
    while (N > 0) {
        binaryRep += (N % 2) + '0';
        N /= 2;
    }
    
    int left = 0, right = binaryRep.size() - 1;
    while (left < right) {
        if (binaryRep[left] != binaryRep[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}

// Function to check if a number is wonderful
string isWonderful(int N) {
    if (isOdd(N) && isBinaryPalindrome(N)) {
        return "YES";
    } else {
        return "NO";
    }
}

// Main function to test the solution
int main() {
    int N;
    cin >> N;
    cout << isWonderful(N) << endl;
    return 0;
}
