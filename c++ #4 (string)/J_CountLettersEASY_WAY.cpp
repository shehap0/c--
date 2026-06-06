#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    // Initialize an array to store the frequency of each letter
    int frequency[26] = {0};
    
    // Count frequency of each character
    for (char c : S) {
        frequency[c - 'a']++;
    }
    
    // Print characters and their frequencies in alphabetical order
    for (int i = 0; i < 26; ++i) {
        if (frequency[i] > 0) {
            cout << static_cast<char>('a' + i) << " : " << frequency[i] << endl;
        }
    }
    
    return 0;
}
